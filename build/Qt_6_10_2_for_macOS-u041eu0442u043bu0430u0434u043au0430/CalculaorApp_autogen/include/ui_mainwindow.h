/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.10.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QWidget *layoutWidget;
    QGridLayout *gridLayout;
    QPushButton *btn1;
    QPushButton *btn2;
    QPushButton *btn3;
    QPushButton *btn4;
    QPushButton *btn5;
    QPushButton *btn6;
    QPushButton *btn7;
    QPushButton *btn8;
    QPushButton *btn9;
    QPushButton *btn0;
    QPushButton *btnClear;
    QPushButton *btnEqual;
    QPushButton *btnAdd;
    QPushButton *btnSub;
    QPushButton *btnMul;
    QPushButton *btnDiv;
    QLineEdit *display;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName("layoutWidget");
        layoutWidget->setGeometry(QRect(240, 90, 421, 251));
        gridLayout = new QGridLayout(layoutWidget);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        btn1 = new QPushButton(layoutWidget);
        btn1->setObjectName("btn1");

        gridLayout->addWidget(btn1, 1, 0, 1, 1);

        btn2 = new QPushButton(layoutWidget);
        btn2->setObjectName("btn2");

        gridLayout->addWidget(btn2, 1, 1, 1, 1);

        btn3 = new QPushButton(layoutWidget);
        btn3->setObjectName("btn3");

        gridLayout->addWidget(btn3, 1, 2, 1, 1);

        btn4 = new QPushButton(layoutWidget);
        btn4->setObjectName("btn4");

        gridLayout->addWidget(btn4, 2, 0, 1, 1);

        btn5 = new QPushButton(layoutWidget);
        btn5->setObjectName("btn5");

        gridLayout->addWidget(btn5, 2, 1, 1, 1);

        btn6 = new QPushButton(layoutWidget);
        btn6->setObjectName("btn6");

        gridLayout->addWidget(btn6, 2, 2, 1, 1);

        btn7 = new QPushButton(layoutWidget);
        btn7->setObjectName("btn7");

        gridLayout->addWidget(btn7, 3, 0, 1, 1);

        btn8 = new QPushButton(layoutWidget);
        btn8->setObjectName("btn8");

        gridLayout->addWidget(btn8, 3, 1, 1, 1);

        btn9 = new QPushButton(layoutWidget);
        btn9->setObjectName("btn9");

        gridLayout->addWidget(btn9, 3, 2, 1, 1);

        btn0 = new QPushButton(layoutWidget);
        btn0->setObjectName("btn0");

        gridLayout->addWidget(btn0, 4, 1, 1, 1);

        btnClear = new QPushButton(layoutWidget);
        btnClear->setObjectName("btnClear");

        gridLayout->addWidget(btnClear, 4, 0, 1, 1);

        btnEqual = new QPushButton(layoutWidget);
        btnEqual->setObjectName("btnEqual");

        gridLayout->addWidget(btnEqual, 4, 2, 1, 1);

        btnAdd = new QPushButton(layoutWidget);
        btnAdd->setObjectName("btnAdd");

        gridLayout->addWidget(btnAdd, 4, 3, 1, 1);

        btnSub = new QPushButton(layoutWidget);
        btnSub->setObjectName("btnSub");

        gridLayout->addWidget(btnSub, 3, 3, 1, 1);

        btnMul = new QPushButton(layoutWidget);
        btnMul->setObjectName("btnMul");

        gridLayout->addWidget(btnMul, 2, 3, 1, 1);

        btnDiv = new QPushButton(layoutWidget);
        btnDiv->setObjectName("btnDiv");

        gridLayout->addWidget(btnDiv, 1, 3, 1, 1);

        display = new QLineEdit(layoutWidget);
        display->setObjectName("display");
        QFont font;
        font.setPointSize(24);
        display->setFont(font);
        display->setAlignment(Qt::AlignmentFlag::AlignRight|Qt::AlignmentFlag::AlignTrailing|Qt::AlignmentFlag::AlignVCenter);
        display->setReadOnly(true);

        gridLayout->addWidget(display, 0, 0, 1, 4);

        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 24));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        btn1->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
        btn2->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
        btn3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
        btn4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
        btn5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
        btn6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
        btn7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
        btn8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
        btn9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
        btn0->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
        btnClear->setText(QCoreApplication::translate("MainWindow", "C", nullptr));
        btnEqual->setText(QCoreApplication::translate("MainWindow", "=", nullptr));
        btnAdd->setText(QCoreApplication::translate("MainWindow", "+", nullptr));
        btnSub->setText(QCoreApplication::translate("MainWindow", "-", nullptr));
        btnMul->setText(QCoreApplication::translate("MainWindow", "x", nullptr));
        btnDiv->setText(QCoreApplication::translate("MainWindow", "/", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
