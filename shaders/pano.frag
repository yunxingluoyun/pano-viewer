#version 440

layout(location = 0) in vec2 v_uv;
layout(location = 0) out vec4 fragColor;

layout(std140, binding = 0) uniform UniformBlock {
    vec4 view0;
    vec4 view1;
    vec4 view2;
    vec4 eye;
    vec4 params0;
    vec4 params1;
    vec4 image0;
    vec4 image1;
    vec4 image2;
    vec4 overlayParams;
} ub;

layout(binding = 1) uniform sampler2D source2D;
layout(binding = 2) uniform samplerCube sourceCube;
layout(binding = 3) uniform sampler2D overlayTex;

const float PI = 3.14159265358979323846;

float safeAtanh(float x)
{
    x = clamp(x, -0.999, 0.999);
    return 0.5 * log((1.0 + x) / (1.0 - x));
}

vec2 invalidUv(float sx, float sy)
{
    return vec2(sx < 0.0 ? -0.01 : 1.01, sy < 0.0 ? -0.01 : 1.01);
}

vec2 projectDirection(vec3 p, int picType)
{
    p = normalize(p);
    float xa = -atan(p.x, p.z);
    float ya = acos(clamp(p.y, -1.0, 1.0));
    float za = acos(clamp(p.z, -1.0, 1.0));
    float sza = max(length(p.xy), 0.0001);
    float sx = -p.x / sza;
    float sy = -p.y / sza;

    if (picType == 2) {
        if (za > 0.45 * PI)
            return invalidUv(sx, sy);
        float s = 0.5 * tan(za);
        return vec2(0.5 + s * sx, 0.5 + s * sy);
    }

    if (picType == 3) {
        if (za > PI)
            return invalidUv(xa, ya - 0.5 * PI);
        float s = 0.5 * sqrt(0.5 * (1.0 - p.z));
        return vec2(0.5 + s * sx, 0.5 + s * sy);
    }

    if (picType == 4) {
        float s = 0.5 * za / PI;
        return vec2(0.5 + s * sx, 0.5 + s * sy);
    }

    if (picType == 5) {
        float a = ya - 0.5 * PI;
        if (abs(a) > radians(75.0))
            return invalidUv(xa, a);
        return vec2(0.5 + 0.5 * xa / PI, 0.5 - 0.5 * tan(a) / tan(radians(75.0)));
    }

    if (picType == 6) {
        return vec2(0.5 + 0.5 * xa / PI, ya / PI);
    }

    if (picType == 7) {
        if (za > PI)
            return invalidUv(sx, sy);
        float s = 0.5 * tan(0.5 * za);
        return vec2(0.5 + s * sx, 0.5 + s * sy);
    }

    if (picType == 8) {
        float y = safeAtanh(p.y) / safeAtanh(sin(radians(75.0)));
        return vec2(0.5 + 0.5 * xa / PI, 0.5 - 0.5 * y);
    }

    return vec2(0.5 + 0.5 * xa / PI, ya / PI);
}

bool intersectSurface(vec3 origin, vec3 ray, int surface, out vec3 p)
{
    float t = 0.0;
    if (surface == 1) {
        float a = dot(ray.xz, ray.xz);
        float b = dot(origin.xz, ray.xz);
        float c = dot(origin.xz, origin.xz) - 1.0;
        float d = b * b - a * c;
        if (d < 0.0 || a < 0.00001)
            return false;
        float s = sqrt(d);
        t = (-b + s) / a;
        if (t < 0.0)
            t = (-b - s) / a;
    } else {
        float b = dot(origin, ray);
        float c = dot(origin, origin) - 1.0;
        float d = b * b - c;
        if (d < 0.0)
            return false;
        float s = sqrt(d);
        t = -b + s;
        if (t < 0.0)
            t = -b - s;
    }
    if (t < 0.0)
        return false;
    p = origin + t * ray;
    return true;
}

vec4 wireColor(vec3 p)
{
    vec3 q = normalize(p);
    float lon = abs(fract((atan(q.x, q.z) / (2.0 * PI)) * 24.0) - 0.5);
    float lat = abs(fract((asin(clamp(q.y, -1.0, 1.0)) / PI + 0.5) * 12.0) - 0.5);
    float line = smoothstep(0.47, 0.5, max(lon, lat));
    return mix(vec4(0.03, 0.035, 0.04, 1.0), vec4(0.45, 0.5, 0.55, 1.0), line);
}

void main()
{
    mat3 view = mat3(ub.view0.xyz, ub.view1.xyz, ub.view2.xyz);
    mat3 image = mat3(ub.image0.xyz, ub.image1.xyz, ub.image2.xyz);
    float ar = ub.params0.x;
    float tanHalf = ub.params0.y;
    vec2 frame = ub.params0.zw;
    vec2 ndc = vec2(v_uv.x * 2.0 - 1.0, 1.0 - v_uv.y * 2.0);
    vec3 ray = normalize(vec3((ndc.x - 2.0 * frame.x) * ar * tanHalf,
                              (ndc.y - 2.0 * frame.y) * tanHalf,
                              1.0));
    ray = normalize(view * ray);

    vec3 p;
    if (!intersectSurface(ub.eye.xyz, ray, int(ub.params1.w), p)) {
        fragColor = vec4(0.0, 0.0, 0.0, 1.0);
        return;
    }

    vec4 color;
    if (ub.image2.w > 0.5) {
        color = texture(sourceCube, normalize(image * normalize(p)));
    } else if (ub.params1.z <= 0.5) {
        color = wireColor(p);
    } else {
        vec2 uv = projectDirection(p, int(ub.params1.z));
        vec2 centered = uv - vec2(0.5);
        mat2 rot = mat2(image[0].x, image[0].y, image[1].x, image[1].y);
        uv = vec2(0.5) + rot * centered * ub.params1.xy;
        if (uv.x < 0.0 || uv.x > 1.0 || uv.y < 0.0 || uv.y > 1.0)
            color = vec4(0.0, 0.0, 0.0, 1.0);
        else
            color = texture(source2D, uv);
    }

    if (ub.overlayParams.x > 0.5 && v_uv.x <= ub.overlayParams.y) {
        vec2 ouv = vec2(v_uv.x / max(ub.overlayParams.y, 0.0001), v_uv.y);
        vec4 over = texture(overlayTex, ouv);
        color = mix(color, over, over.a);
    }

    fragColor = color;
}
