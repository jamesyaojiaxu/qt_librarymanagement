/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *Login_Button;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Login_Username;
    QLineEdit *Login_Password;
    QLabel *label_3;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(606, 401);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        Login_Button = new QPushButton(centralWidget);
        Login_Button->setObjectName(QString::fromUtf8("Login_Button"));
        Login_Button->setGeometry(QRect(150, 280, 301, 61));
        QFont font;
        font.setPointSize(15);
        font.setBold(true);
        Login_Button->setFont(font);
        Login_Button->setStyleSheet(QString::fromUtf8("background-color: rgb(34, 174, 250);\n"
"color: rgb(255, 255, 255);"));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 160, 72, 21));
        QFont font1;
        font1.setPointSize(15);
        label->setFont(font1);
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(80, 220, 72, 21));
        label_2->setFont(font1);
        Login_Username = new QLineEdit(centralWidget);
        Login_Username->setObjectName(QString::fromUtf8("Login_Username"));
        Login_Username->setGeometry(QRect(150, 160, 301, 31));
        Login_Username->setFont(font1);
        Login_Password = new QLineEdit(centralWidget);
        Login_Password->setObjectName(QString::fromUtf8("Login_Password"));
        Login_Password->setGeometry(QRect(150, 220, 301, 31));
        QFont font2;
        font2.setPointSize(12);
        Login_Password->setFont(font2);
        Login_Password->setEchoMode(QLineEdit::Password);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(260, 60, 72, 71));
        label_3->setStyleSheet(QString::fromUtf8("border-image: url(:/image/user.png);"));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        Login_Button->setText(QCoreApplication::translate("MainWindow", "\347\231\273\345\275\225", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\347\224\250\346\210\267\345\220\215", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
