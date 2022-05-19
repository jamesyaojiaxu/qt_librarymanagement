/********************************************************************************
** Form generated from reading UI file 'searchbox.ui'
**
** Created by: Qt User Interface Compiler version 6.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEARCHBOX_H
#define UI_SEARCHBOX_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_searchbox
{
public:
    QLineEdit *searchedit;

    void setupUi(QWidget *searchbox)
    {
        if (searchbox->objectName().isEmpty())
            searchbox->setObjectName(QString::fromUtf8("searchbox"));
        searchbox->resize(1059, 63);
        searchedit = new QLineEdit(searchbox);
        searchedit->setObjectName(QString::fromUtf8("searchedit"));
        searchedit->setGeometry(QRect(10, 10, 1021, 41));
        QFont font;
        font.setPointSize(15);
        searchedit->setFont(font);
        searchedit->setStyleSheet(QString::fromUtf8(""));

        retranslateUi(searchbox);

        QMetaObject::connectSlotsByName(searchbox);
    } // setupUi

    void retranslateUi(QWidget *searchbox)
    {
        searchbox->setWindowTitle(QCoreApplication::translate("searchbox", "Form", nullptr));
    } // retranslateUi

};

namespace Ui {
    class searchbox: public Ui_searchbox {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEARCHBOX_H
