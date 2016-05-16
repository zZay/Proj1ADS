/********************************************************************************
** Form generated from reading UI file 'rtreegui.ui'
**
** Created by: Qt User Interface Compiler version 5.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RTREEGUI_H
#define UI_RTREEGUI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RTreeGUIClass
{
public:
    QWidget *centralWidget;
    QGroupBox *groupBox;
    QPushButton *pushButton_im;
    QLabel *label_im;
    QGroupBox *groupBox_2;
    QLineEdit *lineEdit;
    QPushButton *pushButton_sh;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_p1;
    QSpacerItem *horizontalSpacer;
    QLabel *label_p2;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_p3;
    QGroupBox *groupBox_3;
    QPushButton *pushButton_ve;
    QLabel *label_ve;
    QGroupBox *groupBox_4;
    QPushButton *pushButton_qu;
    QLabel *label_qu;
    QPushButton *pushButton_op;
    QPushButton *pushButton_ne;
    QPushButton *pushButton_re;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *RTreeGUIClass)
    {
        if (RTreeGUIClass->objectName().isEmpty())
            RTreeGUIClass->setObjectName(QStringLiteral("RTreeGUIClass"));
        RTreeGUIClass->resize(589, 568);
        centralWidget = new QWidget(RTreeGUIClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QStringLiteral("groupBox"));
        groupBox->setGeometry(QRect(20, 10, 261, 121));
        pushButton_im = new QPushButton(groupBox);
        pushButton_im->setObjectName(QStringLiteral("pushButton_im"));
        pushButton_im->setGeometry(QRect(20, 30, 75, 23));
        label_im = new QLabel(groupBox);
        label_im->setObjectName(QStringLiteral("label_im"));
        label_im->setGeometry(QRect(20, 60, 221, 51));
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QStringLiteral("groupBox_2"));
        groupBox_2->setGeometry(QRect(300, 10, 261, 121));
        lineEdit = new QLineEdit(groupBox_2);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 30, 221, 20));
        pushButton_sh = new QPushButton(groupBox_2);
        pushButton_sh->setObjectName(QStringLiteral("pushButton_sh"));
        pushButton_sh->setGeometry(QRect(20, 70, 75, 23));
        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QStringLiteral("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(20, 290, 541, 181));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_p1 = new QLabel(horizontalLayoutWidget);
        label_p1->setObjectName(QStringLiteral("label_p1"));

        horizontalLayout->addWidget(label_p1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label_p2 = new QLabel(horizontalLayoutWidget);
        label_p2->setObjectName(QStringLiteral("label_p2"));

        horizontalLayout->addWidget(label_p2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        label_p3 = new QLabel(horizontalLayoutWidget);
        label_p3->setObjectName(QStringLiteral("label_p3"));

        horizontalLayout->addWidget(label_p3);

        groupBox_3 = new QGroupBox(centralWidget);
        groupBox_3->setObjectName(QStringLiteral("groupBox_3"));
        groupBox_3->setGeometry(QRect(20, 150, 261, 121));
        pushButton_ve = new QPushButton(groupBox_3);
        pushButton_ve->setObjectName(QStringLiteral("pushButton_ve"));
        pushButton_ve->setGeometry(QRect(20, 30, 75, 23));
        label_ve = new QLabel(groupBox_3);
        label_ve->setObjectName(QStringLiteral("label_ve"));
        label_ve->setGeometry(QRect(20, 60, 211, 51));
        groupBox_4 = new QGroupBox(centralWidget);
        groupBox_4->setObjectName(QStringLiteral("groupBox_4"));
        groupBox_4->setGeometry(QRect(300, 150, 261, 121));
        pushButton_qu = new QPushButton(groupBox_4);
        pushButton_qu->setObjectName(QStringLiteral("pushButton_qu"));
        pushButton_qu->setGeometry(QRect(20, 30, 75, 23));
        label_qu = new QLabel(groupBox_4);
        label_qu->setObjectName(QStringLiteral("label_qu"));
        label_qu->setGeometry(QRect(20, 60, 211, 51));
        pushButton_op = new QPushButton(groupBox_4);
        pushButton_op->setObjectName(QStringLiteral("pushButton_op"));
        pushButton_op->setGeometry(QRect(110, 30, 75, 23));
        pushButton_ne = new QPushButton(centralWidget);
        pushButton_ne->setObjectName(QStringLiteral("pushButton_ne"));
        pushButton_ne->setGeometry(QRect(490, 480, 75, 23));
        pushButton_re = new QPushButton(centralWidget);
        pushButton_re->setObjectName(QStringLiteral("pushButton_re"));
        pushButton_re->setGeometry(QRect(20, 480, 75, 23));
        RTreeGUIClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(RTreeGUIClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 589, 23));
        RTreeGUIClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(RTreeGUIClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        RTreeGUIClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(RTreeGUIClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        RTreeGUIClass->setStatusBar(statusBar);

        retranslateUi(RTreeGUIClass);

        QMetaObject::connectSlotsByName(RTreeGUIClass);
    } // setupUi

    void retranslateUi(QMainWindow *RTreeGUIClass)
    {
        RTreeGUIClass->setWindowTitle(QApplication::translate("RTreeGUIClass", "RTreeGUI", 0));
        groupBox->setTitle(QApplication::translate("RTreeGUIClass", "\350\276\223\345\205\245\345\233\276\347\211\207\345\272\223", 0));
        pushButton_im->setText(QApplication::translate("RTreeGUIClass", "\351\200\211\346\213\251\347\233\256\345\275\225", 0));
        label_im->setText(QApplication::translate("RTreeGUIClass", "Address", 0));
        groupBox_2->setTitle(QApplication::translate("RTreeGUIClass", "\346\230\276\347\244\272\345\233\276\347\211\207", 0));
        pushButton_sh->setText(QApplication::translate("RTreeGUIClass", "\346\211\213\345\212\250\350\276\223\345\205\245", 0));
        label_p1->setText(QApplication::translate("RTreeGUIClass", "TextLabel", 0));
        label_p2->setText(QApplication::translate("RTreeGUIClass", "TextLabel", 0));
        label_p3->setText(QApplication::translate("RTreeGUIClass", "TextLabel", 0));
        groupBox_3->setTitle(QApplication::translate("RTreeGUIClass", "\350\276\223\345\205\245\345\220\221\351\207\217\346\226\207\344\273\266", 0));
        pushButton_ve->setText(QApplication::translate("RTreeGUIClass", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        label_ve->setText(QApplication::translate("RTreeGUIClass", "Address", 0));
        groupBox_4->setTitle(QApplication::translate("RTreeGUIClass", "\350\276\223\345\205\245\346\237\245\350\257\242\346\226\207\344\273\266", 0));
        pushButton_qu->setText(QApplication::translate("RTreeGUIClass", "\351\200\211\346\213\251\346\226\207\344\273\266", 0));
        label_qu->setText(QApplication::translate("RTreeGUIClass", "Address", 0));
        pushButton_op->setText(QApplication::translate("RTreeGUIClass", "\345\274\200\345\247\213\346\237\245\350\257\242", 0));
        pushButton_ne->setText(QApplication::translate("RTreeGUIClass", "Next >>", 0));
        pushButton_re->setText(QApplication::translate("RTreeGUIClass", "Restart", 0));
    } // retranslateUi

};

namespace Ui {
    class RTreeGUIClass: public Ui_RTreeGUIClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RTREEGUI_H
