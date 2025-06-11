/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <view/glview.h>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionSet_background_color;
    QAction *action1;
    QAction *action2;
    QAction *actionsolid;
    QAction *actiondashed;
    QAction *actioncolor;
    QAction *actionNone;
    QAction *actionCircle;
    QAction *actionSquare;
    QAction *actionSet_color;
    QAction *action_jpg;
    QAction *action_bpm;
    QWidget *centralwidget;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QVBoxLayout *verticalLayout;
    QPushButton *fileInputButton;
    QGridLayout *gridLayout_3;
    QPushButton *scaleToLessButton;
    QLabel *label_7;
    QPushButton *scaleToMoreButton;
    QSlider *scaleSlider;
    QGridLayout *gridLayout_4;
    QDoubleSpinBox *moveXDoubleSpinBox;
    QDoubleSpinBox *moveYDoubleSpinBox;
    QDoubleSpinBox *moveZDoubleSpinBox;
    QLabel *label_9;
    QLabel *label;
    QLabel *label_11;
    QLabel *label_12;
    QGridLayout *gridLayout_5;
    QDoubleSpinBox *spinYdoubleSpinBox;
    QDoubleSpinBox *spinZdoubleSpinBox;
    QDoubleSpinBox *spinXdoubleSpinBox;
    QLabel *label_13;
    QLabel *label_2;
    QLabel *label_14;
    QLabel *label_15;
    QGridLayout *gridLayout;
    QLabel *label_3;
    QPushButton *verticesThiknessLessButton;
    QPushButton *linesThiknessLessButton;
    QPushButton *linesThiknessMoreButton;
    QSlider *linesThiknessSlider;
    QLabel *label_4;
    QPushButton *verticesThiknessMoreButton;
    QSlider *verticesThiknessSlider;
    glview *myglwidget;
    QGridLayout *gridLayout_2;
    QLabel *label_6;
    QPushButton *gifButton;
    QPushButton *screenshotButton;
    QLabel *label_5;
    QHBoxLayout *horizontalLayout;
    QLabel *objnamelabel;
    QLabel *label_8;
    QLabel *verticesLabel;
    QLabel *label_10;
    QLabel *indicesLabel;
    QCheckBox *rotateXcheckBox;
    QPushButton *executeButton;
    QCheckBox *rotateYcheckBox;
    QCheckBox *rotateZcheckBox;
    QMenuBar *menubar;
    QMenu *menumenu;
    QMenu *menuSet_projection_type;
    QMenu *menuEdges;
    QMenu *menuVertices;
    QMenu *menuScrinshot_type;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(832, 651);
        QSizePolicy sizePolicy(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        actionSet_background_color = new QAction(MainWindow);
        actionSet_background_color->setObjectName("actionSet_background_color");
        action1 = new QAction(MainWindow);
        action1->setObjectName("action1");
        action2 = new QAction(MainWindow);
        action2->setObjectName("action2");
        actionsolid = new QAction(MainWindow);
        actionsolid->setObjectName("actionsolid");
        actiondashed = new QAction(MainWindow);
        actiondashed->setObjectName("actiondashed");
        actioncolor = new QAction(MainWindow);
        actioncolor->setObjectName("actioncolor");
        actionNone = new QAction(MainWindow);
        actionNone->setObjectName("actionNone");
        actionCircle = new QAction(MainWindow);
        actionCircle->setObjectName("actionCircle");
        actionSquare = new QAction(MainWindow);
        actionSquare->setObjectName("actionSquare");
        actionSet_color = new QAction(MainWindow);
        actionSet_color->setObjectName("actionSet_color");
        action_jpg = new QAction(MainWindow);
        action_jpg->setObjectName("action_jpg");
        action_bpm = new QAction(MainWindow);
        action_bpm->setObjectName("action_bpm");
        action_bpm->setCheckable(false);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName("formLayoutWidget");
        formLayoutWidget->setGeometry(QRect(10, 19, 801, 559));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName("formLayout");
        formLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        fileInputButton = new QPushButton(formLayoutWidget);
        fileInputButton->setObjectName("fileInputButton");

        verticalLayout->addWidget(fileInputButton);

        gridLayout_3 = new QGridLayout();
        gridLayout_3->setObjectName("gridLayout_3");
        scaleToLessButton = new QPushButton(formLayoutWidget);
        scaleToLessButton->setObjectName("scaleToLessButton");

        gridLayout_3->addWidget(scaleToLessButton, 1, 1, 1, 1);

        label_7 = new QLabel(formLayoutWidget);
        label_7->setObjectName("label_7");

        gridLayout_3->addWidget(label_7, 0, 1, 1, 2);

        scaleToMoreButton = new QPushButton(formLayoutWidget);
        scaleToMoreButton->setObjectName("scaleToMoreButton");

        gridLayout_3->addWidget(scaleToMoreButton, 1, 2, 1, 1);

        scaleSlider = new QSlider(formLayoutWidget);
        scaleSlider->setObjectName("scaleSlider");
        scaleSlider->setOrientation(Qt::Horizontal);

        gridLayout_3->addWidget(scaleSlider, 2, 1, 1, 2);

        gridLayout_4 = new QGridLayout();
        gridLayout_4->setObjectName("gridLayout_4");
        moveXDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        moveXDoubleSpinBox->setObjectName("moveXDoubleSpinBox");
        QSizePolicy sizePolicy1(QSizePolicy::Policy::Preferred, QSizePolicy::Policy::Maximum);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(moveXDoubleSpinBox->sizePolicy().hasHeightForWidth());
        moveXDoubleSpinBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(moveXDoubleSpinBox, 1, 1, 1, 1);

        moveYDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        moveYDoubleSpinBox->setObjectName("moveYDoubleSpinBox");
        sizePolicy1.setHeightForWidth(moveYDoubleSpinBox->sizePolicy().hasHeightForWidth());
        moveYDoubleSpinBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(moveYDoubleSpinBox, 2, 1, 1, 1);

        moveZDoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        moveZDoubleSpinBox->setObjectName("moveZDoubleSpinBox");
        sizePolicy1.setHeightForWidth(moveZDoubleSpinBox->sizePolicy().hasHeightForWidth());
        moveZDoubleSpinBox->setSizePolicy(sizePolicy1);

        gridLayout_4->addWidget(moveZDoubleSpinBox, 3, 1, 1, 1);

        label_9 = new QLabel(formLayoutWidget);
        label_9->setObjectName("label_9");
        QSizePolicy sizePolicy2(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Minimum);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy2);

        gridLayout_4->addWidget(label_9, 1, 0, 1, 1);

        label = new QLabel(formLayoutWidget);
        label->setObjectName("label");
        QSizePolicy sizePolicy3(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_4->addWidget(label, 0, 0, 1, 2);

        label_11 = new QLabel(formLayoutWidget);
        label_11->setObjectName("label_11");
        QSizePolicy sizePolicy4(QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Preferred);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(label_11->sizePolicy().hasHeightForWidth());
        label_11->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(label_11, 2, 0, 1, 1);

        label_12 = new QLabel(formLayoutWidget);
        label_12->setObjectName("label_12");
        sizePolicy4.setHeightForWidth(label_12->sizePolicy().hasHeightForWidth());
        label_12->setSizePolicy(sizePolicy4);

        gridLayout_4->addWidget(label_12, 3, 0, 1, 1);


        gridLayout_3->addLayout(gridLayout_4, 3, 1, 1, 2);


        verticalLayout->addLayout(gridLayout_3);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setObjectName("gridLayout_5");
        spinYdoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        spinYdoubleSpinBox->setObjectName("spinYdoubleSpinBox");

        gridLayout_5->addWidget(spinYdoubleSpinBox, 2, 1, 1, 1);

        spinZdoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        spinZdoubleSpinBox->setObjectName("spinZdoubleSpinBox");

        gridLayout_5->addWidget(spinZdoubleSpinBox, 3, 1, 1, 1);

        spinXdoubleSpinBox = new QDoubleSpinBox(formLayoutWidget);
        spinXdoubleSpinBox->setObjectName("spinXdoubleSpinBox");

        gridLayout_5->addWidget(spinXdoubleSpinBox, 1, 1, 1, 1);

        label_13 = new QLabel(formLayoutWidget);
        label_13->setObjectName("label_13");
        QSizePolicy sizePolicy5(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(label_13->sizePolicy().hasHeightForWidth());
        label_13->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(label_13, 1, 0, 1, 1);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName("label_2");
        sizePolicy3.setHeightForWidth(label_2->sizePolicy().hasHeightForWidth());
        label_2->setSizePolicy(sizePolicy3);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 2);

        label_14 = new QLabel(formLayoutWidget);
        label_14->setObjectName("label_14");
        sizePolicy5.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(label_14, 2, 0, 1, 1);

        label_15 = new QLabel(formLayoutWidget);
        label_15->setObjectName("label_15");
        sizePolicy5.setHeightForWidth(label_15->sizePolicy().hasHeightForWidth());
        label_15->setSizePolicy(sizePolicy5);

        gridLayout_5->addWidget(label_15, 3, 0, 1, 1);


        verticalLayout->addLayout(gridLayout_5);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName("label_3");
        sizePolicy3.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_3, 0, 1, 1, 2);

        verticesThiknessLessButton = new QPushButton(formLayoutWidget);
        verticesThiknessLessButton->setObjectName("verticesThiknessLessButton");

        gridLayout->addWidget(verticesThiknessLessButton, 4, 1, 1, 1);

        linesThiknessLessButton = new QPushButton(formLayoutWidget);
        linesThiknessLessButton->setObjectName("linesThiknessLessButton");
        sizePolicy3.setHeightForWidth(linesThiknessLessButton->sizePolicy().hasHeightForWidth());
        linesThiknessLessButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(linesThiknessLessButton, 1, 1, 1, 1);

        linesThiknessMoreButton = new QPushButton(formLayoutWidget);
        linesThiknessMoreButton->setObjectName("linesThiknessMoreButton");
        sizePolicy3.setHeightForWidth(linesThiknessMoreButton->sizePolicy().hasHeightForWidth());
        linesThiknessMoreButton->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(linesThiknessMoreButton, 1, 2, 1, 1);

        linesThiknessSlider = new QSlider(formLayoutWidget);
        linesThiknessSlider->setObjectName("linesThiknessSlider");
        linesThiknessSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(linesThiknessSlider, 2, 1, 1, 2);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName("label_4");
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        gridLayout->addWidget(label_4, 3, 1, 1, 2);

        verticesThiknessMoreButton = new QPushButton(formLayoutWidget);
        verticesThiknessMoreButton->setObjectName("verticesThiknessMoreButton");

        gridLayout->addWidget(verticesThiknessMoreButton, 4, 2, 1, 1);

        verticesThiknessSlider = new QSlider(formLayoutWidget);
        verticesThiknessSlider->setObjectName("verticesThiknessSlider");
        verticesThiknessSlider->setOrientation(Qt::Horizontal);

        gridLayout->addWidget(verticesThiknessSlider, 5, 1, 1, 2);


        verticalLayout->addLayout(gridLayout);


        formLayout->setLayout(0, QFormLayout::LabelRole, verticalLayout);

        myglwidget = new glview(formLayoutWidget);
        myglwidget->setObjectName("myglwidget");
        QSizePolicy sizePolicy6(QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(myglwidget->sizePolicy().hasHeightForWidth());
        myglwidget->setSizePolicy(sizePolicy6);
        myglwidget->setMinimumSize(QSize(400, 400));

        formLayout->setWidget(0, QFormLayout::FieldRole, myglwidget);

        gridLayout_2 = new QGridLayout();
        gridLayout_2->setObjectName("gridLayout_2");
        label_6 = new QLabel(formLayoutWidget);
        label_6->setObjectName("label_6");

        gridLayout_2->addWidget(label_6, 0, 2, 1, 1);

        gifButton = new QPushButton(formLayoutWidget);
        gifButton->setObjectName("gifButton");

        gridLayout_2->addWidget(gifButton, 0, 3, 1, 1);

        screenshotButton = new QPushButton(formLayoutWidget);
        screenshotButton->setObjectName("screenshotButton");

        gridLayout_2->addWidget(screenshotButton, 0, 1, 1, 1);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName("label_5");

        gridLayout_2->addWidget(label_5, 0, 0, 1, 1);


        formLayout->setLayout(1, QFormLayout::SpanningRole, gridLayout_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName("horizontalLayout");
        objnamelabel = new QLabel(formLayoutWidget);
        objnamelabel->setObjectName("objnamelabel");

        horizontalLayout->addWidget(objnamelabel);

        label_8 = new QLabel(formLayoutWidget);
        label_8->setObjectName("label_8");

        horizontalLayout->addWidget(label_8);

        verticesLabel = new QLabel(formLayoutWidget);
        verticesLabel->setObjectName("verticesLabel");

        horizontalLayout->addWidget(verticesLabel);

        label_10 = new QLabel(formLayoutWidget);
        label_10->setObjectName("label_10");

        horizontalLayout->addWidget(label_10);

        indicesLabel = new QLabel(formLayoutWidget);
        indicesLabel->setObjectName("indicesLabel");

        horizontalLayout->addWidget(indicesLabel);


        formLayout->setLayout(2, QFormLayout::SpanningRole, horizontalLayout);

        rotateXcheckBox = new QCheckBox(centralwidget);
        rotateXcheckBox->setObjectName("rotateXcheckBox");
        rotateXcheckBox->setGeometry(QRect(10, 580, 121, 22));
        executeButton = new QPushButton(centralwidget);
        executeButton->setObjectName("executeButton");
        executeButton->setGeometry(QRect(480, 580, 80, 24));
        rotateYcheckBox = new QCheckBox(centralwidget);
        rotateYcheckBox->setObjectName("rotateYcheckBox");
        rotateYcheckBox->setGeometry(QRect(320, 580, 91, 22));
        rotateZcheckBox = new QCheckBox(centralwidget);
        rotateZcheckBox->setObjectName("rotateZcheckBox");
        rotateZcheckBox->setGeometry(QRect(160, 580, 91, 22));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 832, 21));
        menumenu = new QMenu(menubar);
        menumenu->setObjectName("menumenu");
        menuSet_projection_type = new QMenu(menumenu);
        menuSet_projection_type->setObjectName("menuSet_projection_type");
        menuEdges = new QMenu(menumenu);
        menuEdges->setObjectName("menuEdges");
        menuVertices = new QMenu(menumenu);
        menuVertices->setObjectName("menuVertices");
        menuScrinshot_type = new QMenu(menumenu);
        menuScrinshot_type->setObjectName("menuScrinshot_type");
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        menubar->addAction(menumenu->menuAction());
        menumenu->addAction(actionSet_background_color);
        menumenu->addAction(menuSet_projection_type->menuAction());
        menumenu->addAction(menuEdges->menuAction());
        menumenu->addAction(menuVertices->menuAction());
        menumenu->addAction(menuScrinshot_type->menuAction());
        menuSet_projection_type->addAction(action1);
        menuSet_projection_type->addAction(action2);
        menuEdges->addAction(actionsolid);
        menuEdges->addAction(actiondashed);
        menuEdges->addSeparator();
        menuEdges->addAction(actioncolor);
        menuVertices->addAction(actionNone);
        menuVertices->addAction(actionCircle);
        menuVertices->addAction(actionSquare);
        menuVertices->addSeparator();
        menuVertices->addAction(actionSet_color);
        menuScrinshot_type->addAction(action_jpg);
        menuScrinshot_type->addAction(action_bpm);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        actionSet_background_color->setText(QCoreApplication::translate("MainWindow", "Set background color", nullptr));
        action1->setText(QCoreApplication::translate("MainWindow", "parallel", nullptr));
        action2->setText(QCoreApplication::translate("MainWindow", "central", nullptr));
        actionsolid->setText(QCoreApplication::translate("MainWindow", "solid", nullptr));
        actiondashed->setText(QCoreApplication::translate("MainWindow", "dashed", nullptr));
        actioncolor->setText(QCoreApplication::translate("MainWindow", "color", nullptr));
        actionNone->setText(QCoreApplication::translate("MainWindow", "None", nullptr));
        actionCircle->setText(QCoreApplication::translate("MainWindow", "Circle", nullptr));
        actionSquare->setText(QCoreApplication::translate("MainWindow", "Square", nullptr));
        actionSet_color->setText(QCoreApplication::translate("MainWindow", "Set color", nullptr));
        action_jpg->setText(QCoreApplication::translate("MainWindow", ".jpg", nullptr));
        action_bpm->setText(QCoreApplication::translate("MainWindow", ".bmp", nullptr));
        fileInputButton->setText(QCoreApplication::translate("MainWindow", "\320\227\320\260\320\263\321\200\321\203\320\267\320\270\321\202\321\214 \321\204\320\260\320\271\320\273", nullptr));
        scaleToLessButton->setText(QCoreApplication::translate("MainWindow", "\320\274\320\265\320\275\321\214\321\210\320\265", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214 \320\274\320\260\321\201\321\210\321\202\320\260\320\261", nullptr));
        scaleToMoreButton->setText(QCoreApplication::translate("MainWindow", "\320\261\320\276\320\273\321\214\321\210\320\265", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\274\320\265\321\211\320\265\320\275\320\270\320\265", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\262\320\276\321\200\320\276\321\202", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "y", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "z", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \321\200\320\265\320\261\320\265\321\200", nullptr));
        verticesThiknessLessButton->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        linesThiknessLessButton->setText(QCoreApplication::translate("MainWindow", "\320\274\320\265\320\275\321\214\321\210\320\265", nullptr));
        linesThiknessMoreButton->setText(QCoreApplication::translate("MainWindow", "\320\261\320\276\320\273\321\214\321\210\320\265", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "\320\242\320\276\320\273\321\211\320\270\320\275\320\260 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        verticesThiknessMoreButton->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \320\263\320\270\321\204\320\272\321\203", nullptr));
        gifButton->setText(QCoreApplication::translate("MainWindow", "\320\221\320\260\320\274", nullptr));
        screenshotButton->setText(QCoreApplication::translate("MainWindow", "\320\221\321\203\320\274", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "\320\241\320\264\320\265\320\273\320\260\321\202\321\214 \321\201\320\272\321\200\320\270\320\275", nullptr));
        objnamelabel->setText(QString());
        label_8->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\262\320\265\321\200\321\210\320\270\320\275", nullptr));
        verticesLabel->setText(QString());
        label_10->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\200\320\265\320\261\320\265\321\200", nullptr));
        indicesLabel->setText(QString());
        rotateXcheckBox->setText(QCoreApplication::translate("MainWindow", "Rotate X 90", nullptr));
        executeButton->setText(QCoreApplication::translate("MainWindow", "Execute", nullptr));
        rotateYcheckBox->setText(QCoreApplication::translate("MainWindow", "Rotate Z 90", nullptr));
        rotateZcheckBox->setText(QCoreApplication::translate("MainWindow", "Rotate Y 90", nullptr));
        menumenu->setTitle(QCoreApplication::translate("MainWindow", "menu", nullptr));
        menuSet_projection_type->setTitle(QCoreApplication::translate("MainWindow", "Set projection type", nullptr));
        menuEdges->setTitle(QCoreApplication::translate("MainWindow", "Edges", nullptr));
        menuVertices->setTitle(QCoreApplication::translate("MainWindow", "Vertices", nullptr));
        menuScrinshot_type->setTitle(QCoreApplication::translate("MainWindow", "Scrinshot type", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
