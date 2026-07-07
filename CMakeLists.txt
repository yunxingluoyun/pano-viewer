cmake_minimum_required(VERSION 3.21)

project(PanoViewer VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_DEPENDS_USE_COMPILER FALSE)

find_package(Qt6 6.7 REQUIRED COMPONENTS Widgets Gui GuiPrivate ZlibPrivate ShaderTools LinguistTools)

qt_standard_project_setup(I18N_TRANSLATED_LANGUAGES zh_CN)

set(CMAKE_AUTOUIC_SEARCH_PATHS ${CMAKE_CURRENT_SOURCE_DIR}/ui)

set(PROJECT_SOURCES
    src/main.cpp
    src/MainWindow.cpp
    src/GLwindow.cpp
    src/pvQtView.cpp
    src/pvQtPic.cpp
    src/pvQt_QTVR.cpp
    src/picTypeDialog.cpp
    src/pictureTypes.cpp
    src/About.cpp
    src/panosurface.cpp
    src/panosphere.cpp
    src/panocylinder.cpp
    src/TurnDialog.cpp
    src/CubeLimit_dialog.h
    src/MainWindow.h
    src/GLwindow.h
    src/pvQtView.h
    src/pvQtPic.h
    src/pvQt_QTVR.h
    src/picTypeDialog.h
    src/About.h
    src/panosurface.h
    src/panosphere.h
    src/panocylinder.h
    src/TurnDialog.h
    src/pvQtMouseModes.h
    ui/mainwindow.ui
    ui/picTypeDialog.ui
    ui/About.ui
    ui/ShowText.ui
    ui/TurnDialog.ui
    ui/CubeLimit_dialog.ui
    ui/PaniniIcon.qrc
)

if(WIN32)
    list(APPEND PROJECT_SOURCES ui/panoWin.rc)
endif()

qt_add_executable(PanoViewer
    MANUAL_FINALIZATION
    ${PROJECT_SOURCES}
)

target_compile_definitions(PanoViewer PRIVATE VERSION="${PROJECT_VERSION}")

target_include_directories(PanoViewer PRIVATE
    ${CMAKE_CURRENT_SOURCE_DIR}/src
    ${CMAKE_CURRENT_SOURCE_DIR}/ui
)

target_link_libraries(PanoViewer PRIVATE
    Qt6::Widgets
    Qt6::GuiPrivate
    Qt6::ZlibPrivate
)

qt_add_shaders(PanoViewer "pano_shaders"
    PREFIX "/shaders"
    FILES
        shaders/pano.vert
        shaders/pano.frag
)

qt_add_translations(PanoViewer
    TS_FILES PanoViewer_zh_CN.ts
    RESOURCE_PREFIX "/i18n"
)

install(TARGETS PanoViewer
    BUNDLE DESTINATION .
    RUNTIME DESTINATION bin
)

if(UNIX AND NOT APPLE)
    install(FILES linux/panini.desktop DESTINATION share/applications)
    install(FILES linux/panini.png DESTINATION share/pixmaps)
    install(FILES linux/panini.appdata.xml DESTINATION share/metainfo)
endif()

qt_finalize_executable(PanoViewer)
