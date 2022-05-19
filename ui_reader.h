/********************************************************************************
** Form generated from reading UI file 'reader.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_READER_H
#define UI_READER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QToolButton>
#include <QtWidgets/QWidget>
#include <searchbox.h>

QT_BEGIN_NAMESPACE

class Ui_reader
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QToolButton *searchtool;
    QStackedWidget *stackedWidget;
    QWidget *page;
    QLabel *label_2;
    searchbox *widget;
    QWidget *page_2;
    QTableView *tableView;
    searchbox *widget_2;

    void setupUi(QMainWindow *reader)
    {
        if (reader->objectName().isEmpty())
            reader->setObjectName(QString::fromUtf8("reader"));
        reader->resize(1920, 1080);
        centralwidget = new QWidget(reader);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-9, -6, 101, 1091));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(64, 66, 68);"));
        searchtool = new QToolButton(centralwidget);
        searchtool->setObjectName(QString::fromUtf8("searchtool"));
        searchtool->setGeometry(QRect(0, 90, 71, 51));
        searchtool->setStyleSheet(QString::fromUtf8("border-image: url(:/image/images.jpg);"));
        searchtool->setIconSize(QSize(30, 30));
        stackedWidget = new QStackedWidget(centralwidget);
        stackedWidget->setObjectName(QString::fromUtf8("stackedWidget"));
        stackedWidget->setGeometry(QRect(79, -1, 1821, 1081));
        stackedWidget->setStyleSheet(QString::fromUtf8("background-color: rgb(246, 246, 246);"));
        page = new QWidget();
        page->setObjectName(QString::fromUtf8("page"));
        label_2 = new QLabel(page);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(440, 200, 491, 111));
        label_2->setStyleSheet(QString::fromUtf8("border-image: url(:/image/library.PNG);"));
        widget = new searchbox(page);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(210, 320, 1181, 80));
        stackedWidget->addWidget(page);
        page_2 = new QWidget();
        page_2->setObjectName(QString::fromUtf8("page_2"));
        tableView = new QTableView(page_2);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 100, 951, 691));
        tableView->setStyleSheet(QString::fromUtf8("font: 13pt \"Adobe Arabic\";"));
        widget_2 = new searchbox(page_2);
        widget_2->setObjectName(QString::fromUtf8("widget_2"));
        widget_2->setGeometry(QRect(0, 30, 1041, 80));
        stackedWidget->addWidget(page_2);
        reader->setCentralWidget(centralwidget);

        retranslateUi(reader);

        stackedWidget->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(reader);
    } // setupUi

    void retranslateUi(QMainWindow *reader)
    {
        reader->setWindowTitle(QCoreApplication::translate("reader", "MainWindow", nullptr));
        label->setText(QString());
        searchtool->setText(QCoreApplication::translate("reader", "...", nullptr));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class reader: public Ui_reader {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_READER_H
