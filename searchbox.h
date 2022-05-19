#ifndef SEARCHBOX_H
#define SEARCHBOX_H

#include <QWidget>
#include<QLabel>
#include <QSqlTableModel>
#include<QString>
#include <QtSql>
#include <QSqlDatabase>
#include<QCompleter>
#include<QLineEdit>
#include<QString>
namespace Ui {
class searchbox;
}

class searchbox : public QWidget
{
    Q_OBJECT

public:
    explicit searchbox(QWidget *parent = nullptr);
    ~searchbox();
    QLineEdit *m_searchedit;//搜索框的对外接口
    QCompleter *completer;//自动匹配外部接口
private:
    Ui::searchbox *ui;
};

#endif // SEARCHBOX_H
