/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *action_Home;
    QAction *actionZoom_In;
    QAction *actionZoom_Out;
    QAction *actionPan_Left;
    QAction *actionPan_Right;
    QAction *actionTilt_Up;
    QAction *actionTilt_Down;
    QAction *actionEye_In;
    QAction *actionEye_Out;
    QAction *actionFullFrame;
    QAction *action_SuperFish;
    QAction *actionReset;
    QAction *actionRectilinear;
    QAction *actionFisheye;
    QAction *actionCylindrical;
    QAction *actionEquirectangular;
    QAction *actionCube_faces;
    QAction *actionQuit;
    QAction *actionQTVR;
    QAction *actionPT_script;
    QAction *actionAbout_pvQt;
    QAction *actionPanini_proj;
    QAction *actionSuper_wide;
    QAction *action90_deg_CW;
    QAction *actionSpherical;
    QAction *actionStereographic;
    QAction *actionMercator;
    QAction *actionHFovUp;
    QAction *actionHFovDn;
    QAction *actionVFovUp;
    QAction *actionVFovDn;
    QAction *actionSave_as;
    QAction *actionNext_iProj;
    QAction *actionPrev_iProj;
    QAction *actionMouse_modes;
    QAction *actionRoll_Right;
    QAction *actionRoll_Left;
    QAction *actionPanosphere;
    QAction *actionPanocylinder;
    QAction *actionHome_Eye_X_Y;
    QAction *actionLinear_proj;
    QAction *actionOrtho_proj;
    QAction *actionNone_wire_model;
    QAction *actionReset_turn;
    QAction *actionCube_limit;
    QAction *actionLoad_overlay;
    QAction *actionShow_Hide;
    QAction *actionHide;
    QAction *actionFade;
    QAction *actionRemove;
    QAction *actionRecenter_mode;
    QAction *actionEye_right;
    QAction *actionEye_left;
    QAction *actionEye_up;
    QAction *actionEye_down;
    QWidget *centralwidget;
    QLabel *hfovLabel;
    QLabel *vfovLabel;
    QToolButton *iprojButton;
    QToolButton *surfaceButton;
    QMenuBar *menubar;
    QMenu *menu_View;
    QMenu *menuLoad;
    QMenu *menuHelp;
    QMenu *menuPresets;
    QMenu *menuOverlay;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 358);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/Icons/panini.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        MainWindow->setWindowIcon(icon);
        action_Home = new QAction(MainWindow);
        action_Home->setObjectName("action_Home");
        actionZoom_In = new QAction(MainWindow);
        actionZoom_In->setObjectName("actionZoom_In");
        actionZoom_Out = new QAction(MainWindow);
        actionZoom_Out->setObjectName("actionZoom_Out");
        actionPan_Left = new QAction(MainWindow);
        actionPan_Left->setObjectName("actionPan_Left");
        actionPan_Right = new QAction(MainWindow);
        actionPan_Right->setObjectName("actionPan_Right");
        actionTilt_Up = new QAction(MainWindow);
        actionTilt_Up->setObjectName("actionTilt_Up");
        actionTilt_Down = new QAction(MainWindow);
        actionTilt_Down->setObjectName("actionTilt_Down");
        actionEye_In = new QAction(MainWindow);
        actionEye_In->setObjectName("actionEye_In");
        actionEye_Out = new QAction(MainWindow);
        actionEye_Out->setObjectName("actionEye_Out");
        actionFullFrame = new QAction(MainWindow);
        actionFullFrame->setObjectName("actionFullFrame");
        action_SuperFish = new QAction(MainWindow);
        action_SuperFish->setObjectName("action_SuperFish");
        actionReset = new QAction(MainWindow);
        actionReset->setObjectName("actionReset");
        actionRectilinear = new QAction(MainWindow);
        actionRectilinear->setObjectName("actionRectilinear");
        actionFisheye = new QAction(MainWindow);
        actionFisheye->setObjectName("actionFisheye");
        actionCylindrical = new QAction(MainWindow);
        actionCylindrical->setObjectName("actionCylindrical");
        actionEquirectangular = new QAction(MainWindow);
        actionEquirectangular->setObjectName("actionEquirectangular");
        actionCube_faces = new QAction(MainWindow);
        actionCube_faces->setObjectName("actionCube_faces");
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName("actionQuit");
        actionQTVR = new QAction(MainWindow);
        actionQTVR->setObjectName("actionQTVR");
        actionPT_script = new QAction(MainWindow);
        actionPT_script->setObjectName("actionPT_script");
        actionAbout_pvQt = new QAction(MainWindow);
        actionAbout_pvQt->setObjectName("actionAbout_pvQt");
        actionPanini_proj = new QAction(MainWindow);
        actionPanini_proj->setObjectName("actionPanini_proj");
        actionSuper_wide = new QAction(MainWindow);
        actionSuper_wide->setObjectName("actionSuper_wide");
        action90_deg_CW = new QAction(MainWindow);
        action90_deg_CW->setObjectName("action90_deg_CW");
        actionSpherical = new QAction(MainWindow);
        actionSpherical->setObjectName("actionSpherical");
        actionStereographic = new QAction(MainWindow);
        actionStereographic->setObjectName("actionStereographic");
        actionMercator = new QAction(MainWindow);
        actionMercator->setObjectName("actionMercator");
        actionHFovUp = new QAction(MainWindow);
        actionHFovUp->setObjectName("actionHFovUp");
        actionHFovDn = new QAction(MainWindow);
        actionHFovDn->setObjectName("actionHFovDn");
        actionVFovUp = new QAction(MainWindow);
        actionVFovUp->setObjectName("actionVFovUp");
        actionVFovDn = new QAction(MainWindow);
        actionVFovDn->setObjectName("actionVFovDn");
        actionSave_as = new QAction(MainWindow);
        actionSave_as->setObjectName("actionSave_as");
        actionNext_iProj = new QAction(MainWindow);
        actionNext_iProj->setObjectName("actionNext_iProj");
        actionPrev_iProj = new QAction(MainWindow);
        actionPrev_iProj->setObjectName("actionPrev_iProj");
        actionMouse_modes = new QAction(MainWindow);
        actionMouse_modes->setObjectName("actionMouse_modes");
        actionRoll_Right = new QAction(MainWindow);
        actionRoll_Right->setObjectName("actionRoll_Right");
        actionRoll_Left = new QAction(MainWindow);
        actionRoll_Left->setObjectName("actionRoll_Left");
        actionPanosphere = new QAction(MainWindow);
        actionPanosphere->setObjectName("actionPanosphere");
        actionPanosphere->setCheckable(true);
        actionPanosphere->setChecked(true);
        actionPanosphere->setEnabled(false);
        actionPanocylinder = new QAction(MainWindow);
        actionPanocylinder->setObjectName("actionPanocylinder");
        actionPanocylinder->setCheckable(true);
        actionPanocylinder->setEnabled(false);
        actionHome_Eye_X_Y = new QAction(MainWindow);
        actionHome_Eye_X_Y->setObjectName("actionHome_Eye_X_Y");
        actionLinear_proj = new QAction(MainWindow);
        actionLinear_proj->setObjectName("actionLinear_proj");
        actionOrtho_proj = new QAction(MainWindow);
        actionOrtho_proj->setObjectName("actionOrtho_proj");
        actionNone_wire_model = new QAction(MainWindow);
        actionNone_wire_model->setObjectName("actionNone_wire_model");
        actionReset_turn = new QAction(MainWindow);
        actionReset_turn->setObjectName("actionReset_turn");
        actionCube_limit = new QAction(MainWindow);
        actionCube_limit->setObjectName("actionCube_limit");
        actionCube_limit->setEnabled(false);
        actionCube_limit->setAutoRepeat(false);
        actionLoad_overlay = new QAction(MainWindow);
        actionLoad_overlay->setObjectName("actionLoad_overlay");
        actionShow_Hide = new QAction(MainWindow);
        actionShow_Hide->setObjectName("actionShow_Hide");
        actionHide = new QAction(MainWindow);
        actionHide->setObjectName("actionHide");
        actionFade = new QAction(MainWindow);
        actionFade->setObjectName("actionFade");
        actionRemove = new QAction(MainWindow);
        actionRemove->setObjectName("actionRemove");
        actionRecenter_mode = new QAction(MainWindow);
        actionRecenter_mode->setObjectName("actionRecenter_mode");
        actionRecenter_mode->setCheckable(true);
        actionEye_right = new QAction(MainWindow);
        actionEye_right->setObjectName("actionEye_right");
        actionEye_left = new QAction(MainWindow);
        actionEye_left->setObjectName("actionEye_left");
        actionEye_up = new QAction(MainWindow);
        actionEye_up->setObjectName("actionEye_up");
        actionEye_down = new QAction(MainWindow);
        actionEye_down->setObjectName("actionEye_down");
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        hfovLabel = new QLabel(centralwidget);
        hfovLabel->setObjectName("hfovLabel");
        hfovLabel->setGeometry(QRect(220, 280, 61, 16));
        hfovLabel->setFrameShape(QFrame::Panel);
        hfovLabel->setFrameShadow(QFrame::Sunken);
        vfovLabel = new QLabel(centralwidget);
        vfovLabel->setObjectName("vfovLabel");
        vfovLabel->setEnabled(true);
        vfovLabel->setGeometry(QRect(310, 280, 61, 16));
        vfovLabel->setFrameShape(QFrame::Panel);
        vfovLabel->setFrameShadow(QFrame::Sunken);
        iprojButton = new QToolButton(centralwidget);
        iprojButton->setObjectName("iprojButton");
        iprojButton->setGeometry(QRect(400, 280, 61, 20));
        surfaceButton = new QToolButton(centralwidget);
        surfaceButton->setObjectName("surfaceButton");
        surfaceButton->setGeometry(QRect(500, 280, 71, 20));
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(surfaceButton->sizePolicy().hasHeightForWidth());
        surfaceButton->setSizePolicy(sizePolicy);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 23));
        menu_View = new QMenu(menubar);
        menu_View->setObjectName("menu_View");
        menuLoad = new QMenu(menubar);
        menuLoad->setObjectName("menuLoad");
        menuHelp = new QMenu(menubar);
        menuHelp->setObjectName("menuHelp");
        menuPresets = new QMenu(menubar);
        menuPresets->setObjectName("menuPresets");
        menuOverlay = new QMenu(menubar);
        menuOverlay->setObjectName("menuOverlay");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menuLoad->menuAction());
        menubar->addAction(menu_View->menuAction());
        menubar->addAction(menuPresets->menuAction());
        menubar->addAction(menuOverlay->menuAction());
        menubar->addAction(menuHelp->menuAction());
        menu_View->addAction(actionPan_Right);
        menu_View->addAction(actionPan_Left);
        menu_View->addAction(actionTilt_Up);
        menu_View->addAction(actionTilt_Down);
        menu_View->addAction(actionRoll_Right);
        menu_View->addAction(actionRoll_Left);
        menu_View->addAction(actionZoom_In);
        menu_View->addAction(actionZoom_Out);
        menu_View->addSeparator();
        menu_View->addAction(actionEye_In);
        menu_View->addAction(actionEye_Out);
        menu_View->addAction(actionEye_right);
        menu_View->addAction(actionEye_left);
        menu_View->addAction(actionEye_up);
        menu_View->addAction(actionEye_down);
        menu_View->addSeparator();
        menu_View->addAction(actionHFovUp);
        menu_View->addAction(actionHFovDn);
        menu_View->addAction(actionVFovUp);
        menu_View->addAction(actionVFovDn);
        menu_View->addSeparator();
        menu_View->addAction(actionSave_as);
        menuLoad->addAction(actionRectilinear);
        menuLoad->addAction(actionFisheye);
        menuLoad->addAction(actionSpherical);
        menuLoad->addAction(actionCylindrical);
        menuLoad->addAction(actionEquirectangular);
        menuLoad->addAction(actionStereographic);
        menuLoad->addAction(actionMercator);
        menuLoad->addAction(actionCube_faces);
        menuLoad->addAction(actionQTVR);
        menuLoad->addAction(actionPT_script);
        menuLoad->addAction(actionNone_wire_model);
        menuLoad->addSeparator();
        menuLoad->addAction(actionQuit);
        menuHelp->addAction(actionAbout_pvQt);
        menuHelp->addAction(actionMouse_modes);
        menuPresets->addAction(actionLinear_proj);
        menuPresets->addAction(actionPanini_proj);
        menuPresets->addAction(actionOrtho_proj);
        menuPresets->addAction(actionSuper_wide);
        menuPresets->addSeparator();
        menuPresets->addAction(action_Home);
        menuPresets->addAction(actionHome_Eye_X_Y);
        menuPresets->addAction(actionReset);
        menuPresets->addSeparator();
        menuPresets->addAction(action90_deg_CW);
        menuPresets->addAction(actionReset_turn);
        menuPresets->addAction(actionCube_limit);
        menuPresets->addAction(actionRecenter_mode);
        menuOverlay->addAction(actionLoad_overlay);
        menuOverlay->addAction(actionRemove);
        menuOverlay->addAction(actionShow_Hide);
        menuOverlay->addAction(actionFade);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Panorama", nullptr));
        action_Home->setText(QCoreApplication::translate("MainWindow", "Home Y,P,R", nullptr));
#if QT_CONFIG(shortcut)
        action_Home->setShortcut(QCoreApplication::translate("MainWindow", "Home", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_In->setText(QCoreApplication::translate("MainWindow", "Zoom &in", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_In->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionZoom_Out->setText(QCoreApplication::translate("MainWindow", "Zoom &out", nullptr));
#if QT_CONFIG(shortcut)
        actionZoom_Out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPan_Left->setText(QCoreApplication::translate("MainWindow", "Yaw &left", nullptr));
#if QT_CONFIG(shortcut)
        actionPan_Left->setShortcut(QCoreApplication::translate("MainWindow", "Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPan_Right->setText(QCoreApplication::translate("MainWindow", "Yaw &right", nullptr));
#if QT_CONFIG(shortcut)
        actionPan_Right->setShortcut(QCoreApplication::translate("MainWindow", "Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTilt_Up->setText(QCoreApplication::translate("MainWindow", "Pitch &up", nullptr));
#if QT_CONFIG(shortcut)
        actionTilt_Up->setShortcut(QCoreApplication::translate("MainWindow", "Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionTilt_Down->setText(QCoreApplication::translate("MainWindow", "Pitch &down", nullptr));
#if QT_CONFIG(shortcut)
        actionTilt_Down->setShortcut(QCoreApplication::translate("MainWindow", "Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEye_In->setText(QCoreApplication::translate("MainWindow", "Eye &near", nullptr));
#if QT_CONFIG(shortcut)
        actionEye_In->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEye_Out->setText(QCoreApplication::translate("MainWindow", "Eye &far", nullptr));
#if QT_CONFIG(shortcut)
        actionEye_Out->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionFullFrame->setText(QCoreApplication::translate("MainWindow", "Fullframe", nullptr));
#if QT_CONFIG(shortcut)
        actionFullFrame->setShortcut(QCoreApplication::translate("MainWindow", "PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        action_SuperFish->setText(QCoreApplication::translate("MainWindow", "SuperFish", nullptr));
#if QT_CONFIG(shortcut)
        action_SuperFish->setShortcut(QCoreApplication::translate("MainWindow", "PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionReset->setText(QCoreApplication::translate("MainWindow", "Home all", nullptr));
#if QT_CONFIG(shortcut)
        actionReset->setShortcut(QCoreApplication::translate("MainWindow", "End", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRectilinear->setText(QCoreApplication::translate("MainWindow", "rectilinear", nullptr));
        actionFisheye->setText(QCoreApplication::translate("MainWindow", "fisheye", nullptr));
        actionCylindrical->setText(QCoreApplication::translate("MainWindow", "cylindrical", nullptr));
        actionEquirectangular->setText(QCoreApplication::translate("MainWindow", "equirectangular", nullptr));
        actionCube_faces->setText(QCoreApplication::translate("MainWindow", "cube faces", nullptr));
        actionQuit->setText(QCoreApplication::translate("MainWindow", "Quit", nullptr));
        actionQTVR->setText(QCoreApplication::translate("MainWindow", "QTVR", nullptr));
        actionPT_script->setText(QCoreApplication::translate("MainWindow", "PT script", nullptr));
        actionAbout_pvQt->setText(QCoreApplication::translate("MainWindow", "About...", nullptr));
        actionPanini_proj->setText(QCoreApplication::translate("MainWindow", "Panini proj", nullptr));
#if QT_CONFIG(shortcut)
        actionPanini_proj->setShortcut(QCoreApplication::translate("MainWindow", "P", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSuper_wide->setText(QCoreApplication::translate("MainWindow", "Super fish", nullptr));
#if QT_CONFIG(shortcut)
        actionSuper_wide->setShortcut(QCoreApplication::translate("MainWindow", "S", nullptr));
#endif // QT_CONFIG(shortcut)
        action90_deg_CW->setText(QCoreApplication::translate("MainWindow", "Turn image...", nullptr));
#if QT_CONFIG(tooltip)
        action90_deg_CW->setToolTip(QCoreApplication::translate("MainWindow", "Turn image on panosurface", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        action90_deg_CW->setShortcut(QCoreApplication::translate("MainWindow", "T", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSpherical->setText(QCoreApplication::translate("MainWindow", "spherical", nullptr));
        actionStereographic->setText(QCoreApplication::translate("MainWindow", "stereographic", nullptr));
        actionMercator->setText(QCoreApplication::translate("MainWindow", "mercator", nullptr));
        actionHFovUp->setText(QCoreApplication::translate("MainWindow", "Frame right", nullptr));
#if QT_CONFIG(shortcut)
        actionHFovUp->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHFovDn->setText(QCoreApplication::translate("MainWindow", "Frame left", nullptr));
#if QT_CONFIG(shortcut)
        actionHFovDn->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVFovUp->setText(QCoreApplication::translate("MainWindow", "Frame up", nullptr));
#if QT_CONFIG(shortcut)
        actionVFovUp->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionVFovDn->setText(QCoreApplication::translate("MainWindow", "Frame down", nullptr));
#if QT_CONFIG(shortcut)
        actionVFovDn->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        actionSave_as->setText(QCoreApplication::translate("MainWindow", "Save as...", nullptr));
#if QT_CONFIG(shortcut)
        actionSave_as->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+S", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNext_iProj->setText(QCoreApplication::translate("MainWindow", "Next iProj", nullptr));
#if QT_CONFIG(shortcut)
        actionNext_iProj->setShortcut(QCoreApplication::translate("MainWindow", "Shift+PgUp", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPrev_iProj->setText(QCoreApplication::translate("MainWindow", "Prev iProj", nullptr));
#if QT_CONFIG(shortcut)
        actionPrev_iProj->setShortcut(QCoreApplication::translate("MainWindow", "Shift+PgDown", nullptr));
#endif // QT_CONFIG(shortcut)
        actionMouse_modes->setText(QCoreApplication::translate("MainWindow", "Mouse modes...", nullptr));
        actionRoll_Right->setText(QCoreApplication::translate("MainWindow", "Roll CW", nullptr));
#if QT_CONFIG(shortcut)
        actionRoll_Right->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRoll_Left->setText(QCoreApplication::translate("MainWindow", "Roll CCW", nullptr));
#if QT_CONFIG(shortcut)
        actionRoll_Left->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionPanosphere->setText(QCoreApplication::translate("MainWindow", "panosphere", nullptr));
#if QT_CONFIG(tooltip)
        actionPanosphere->setToolTip(QCoreApplication::translate("MainWindow", "project on sphere", nullptr));
#endif // QT_CONFIG(tooltip)
        actionPanocylinder->setText(QCoreApplication::translate("MainWindow", "panocylinder", nullptr));
#if QT_CONFIG(tooltip)
        actionPanocylinder->setToolTip(QCoreApplication::translate("MainWindow", "project on cylinder", nullptr));
#endif // QT_CONFIG(tooltip)
        actionHome_Eye_X_Y->setText(QCoreApplication::translate("MainWindow", "Home Eye, Frame", nullptr));
#if QT_CONFIG(shortcut)
        actionHome_Eye_X_Y->setShortcut(QCoreApplication::translate("MainWindow", "Shift+Home", nullptr));
#endif // QT_CONFIG(shortcut)
        actionLinear_proj->setText(QCoreApplication::translate("MainWindow", "Linear proj", nullptr));
#if QT_CONFIG(shortcut)
        actionLinear_proj->setShortcut(QCoreApplication::translate("MainWindow", "L", nullptr));
#endif // QT_CONFIG(shortcut)
        actionOrtho_proj->setText(QCoreApplication::translate("MainWindow", "Ortho proj", nullptr));
#if QT_CONFIG(shortcut)
        actionOrtho_proj->setShortcut(QCoreApplication::translate("MainWindow", "O", nullptr));
#endif // QT_CONFIG(shortcut)
        actionNone_wire_model->setText(QCoreApplication::translate("MainWindow", "none (wire model)", nullptr));
        actionReset_turn->setText(QCoreApplication::translate("MainWindow", "Reset turn", nullptr));
#if QT_CONFIG(shortcut)
        actionReset_turn->setShortcut(QCoreApplication::translate("MainWindow", "Alt+End", nullptr));
#endif // QT_CONFIG(shortcut)
        actionCube_limit->setText(QCoreApplication::translate("MainWindow", "Mac cube size...", nullptr));
#if QT_CONFIG(tooltip)
        actionCube_limit->setToolTip(QCoreApplication::translate("MainWindow", "Cube face size limit for Mac OSX", nullptr));
#endif // QT_CONFIG(tooltip)
        actionLoad_overlay->setText(QCoreApplication::translate("MainWindow", "Load image...", nullptr));
        actionShow_Hide->setText(QCoreApplication::translate("MainWindow", "Show/Hide", nullptr));
#if QT_CONFIG(shortcut)
        actionShow_Hide->setShortcut(QCoreApplication::translate("MainWindow", "V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionHide->setText(QCoreApplication::translate("MainWindow", "Hide", nullptr));
        actionFade->setText(QCoreApplication::translate("MainWindow", "Fade", nullptr));
#if QT_CONFIG(shortcut)
        actionFade->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+V", nullptr));
#endif // QT_CONFIG(shortcut)
        actionRemove->setText(QCoreApplication::translate("MainWindow", "Remove", nullptr));
        actionRecenter_mode->setText(QCoreApplication::translate("MainWindow", "Recenter mode", nullptr));
#if QT_CONFIG(shortcut)
        actionRecenter_mode->setShortcut(QCoreApplication::translate("MainWindow", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEye_right->setText(QCoreApplication::translate("MainWindow", "Eye right", nullptr));
#if QT_CONFIG(shortcut)
        actionEye_right->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Right", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEye_left->setText(QCoreApplication::translate("MainWindow", "Eye left", nullptr));
#if QT_CONFIG(shortcut)
        actionEye_left->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Left", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEye_up->setText(QCoreApplication::translate("MainWindow", "Eye up", nullptr));
#if QT_CONFIG(shortcut)
        actionEye_up->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Up", nullptr));
#endif // QT_CONFIG(shortcut)
        actionEye_down->setText(QCoreApplication::translate("MainWindow", "Eye down", nullptr));
#if QT_CONFIG(shortcut)
        actionEye_down->setShortcut(QCoreApplication::translate("MainWindow", "Alt+Down", nullptr));
#endif // QT_CONFIG(shortcut)
        hfovLabel->setText(QCoreApplication::translate("MainWindow", "hfov 360.0", nullptr));
        vfovLabel->setText(QCoreApplication::translate("MainWindow", "vfov 180.0", nullptr));
        iprojButton->setText(QCoreApplication::translate("MainWindow", "iproj: cube", nullptr));
        surfaceButton->setText(QCoreApplication::translate("MainWindow", "panocylinder", nullptr));
        menu_View->setTitle(QCoreApplication::translate("MainWindow", "&View", nullptr));
        menuLoad->setTitle(QCoreApplication::translate("MainWindow", "&Source", nullptr));
        menuHelp->setTitle(QCoreApplication::translate("MainWindow", "Help", nullptr));
        menuPresets->setTitle(QCoreApplication::translate("MainWindow", "Presets", nullptr));
        menuOverlay->setTitle(QCoreApplication::translate("MainWindow", "Overlay", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
