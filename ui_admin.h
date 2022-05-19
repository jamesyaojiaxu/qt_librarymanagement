/********************************************************************************
** Form generated from reading UI file 'admin.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMIN_H
#define UI_ADMIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include <searchbox.h>

QT_BEGIN_NAMESPACE

class Ui_admin
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QTableWidget *tableWidget;
    QWidget *page_2;
    QTableView *tableView;
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QVBoxLayout *verticalLayout;
    QPushButton *addbook;
    QPushButton *deletebook;
    QPushButton *refresh;
    searchbox *widget1;
    QToolButton *usermanage;
    QToolButton *librarymanage;
    QMenuBar *menubar;

    void setupUi(QMainWindow *admin)
    {
        if (admin->objectName().isEmpty())
            admin->setObjectName(QString::fromUtf8("admin"));
        admin->resize(1920, 1080);
        centralwidget = new QWidget(admin);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, -40, 101, 1121));
        QSizePolicy sizePolicy(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy);
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);"));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(110, 40, 1781, 981));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        tableWidget = new QTableWidget(page);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(-5, 1, 411, 1001));
        tableWidget->setSortingEnabled(false);
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(30, 80, 961, 631));
        groupBox = new QGroupBox(page_2);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(990, 80, 431, 631));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(120, 70, 191, 501));
        verticalLayout = new QVBoxLayout(layoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        addbook = new QPushButton(layoutWidget);
        addbook->setObjectName(QString::fromUtf8("addbook"));

        verticalLayout->addWidget(addbook);

        deletebook = new QPushButton(layoutWidget);
        deletebook->setObjectName(QString::fromUtf8("deletebook"));

        verticalLayout->addWidget(deletebook);

        refresh = new QPushButton(layoutWidget);
        refresh->setObjectName(QString::fromUtf8("refresh"));

        verticalLayout->addWidget(refresh);

        widget1 = new searchbox(page_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(20, 0, 971, 61));
        stackedWidget->addWidget(page_2);
        usermanage = new QToolButton(centralwidget);
        usermanage->setObjectName(QString::fromUtf8("usermanage"));
        usermanage->setGeometry(QRect(0, 210, 91, 61));
        usermanage->setStyleSheet(QString::fromUtf8("border-image: url(:/image/usermanage.png);"));
        librarymanage = new QToolButton(centralwidget);
        librarymanage->setObjectName(QString::fromUtf8("librarymanage"));
        librarymanage->setGeometry(QRect(0, 140, 81, 51));
        librarymanage->setStyleSheet(QString::fromUtf8("border-image: url(:/image/book.jpg.png);"));
        admin->setCentralWidget(centralwidget);
        menubar = new QMenuBar(admin);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1920, 26));
        admin->setMenuBar(menubar);

        retranslateUi(admin);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(admin);
    } // setupUi

    void retranslateUi(QMainWindow *admin)
    {
        admin->setWindowTitle(QCoreApplication::translate("admin", "MainWindow", nullptr));
        label->setText(QString());
        groupBox->setTitle(QString());
        addbook->setText(QCoreApplication::translate("admin", "\346\267\273\345\212\240\344\271\246\347\261\215", nullptr));
        deletebook->setText(QCoreApplication::translate("admin", "\345\210\240\351\231\244\344\271\246\347\261\215", nullptr));
        refresh->setText(QCoreApplication::translate("admin", "\345\210\267\346\226\260", nullptr));
        usermanage->setText(QString());
        librarymanage->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class admin: public Ui_admin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMIN_H
