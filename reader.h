#ifndef READER_H
#define READER_H

#include <QMainWindow>
#include <QSqlTableModel>
#include<QString>
#include <QtSql>
#include <QSqlDatabase>
#include"searchbox.h"
namespace Ui {
class reader;
}

class reader : public QMainWindow
{
    Q_OBJECT

public:
    explicit reader(QWidget *parent = nullptr);
    ~reader();
    QString condition;
private:
    Ui::reader *ui;
    QSqlTableModel *model;
};

#endif // READER_H
