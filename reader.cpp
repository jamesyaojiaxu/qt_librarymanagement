#include "reader.h"
#include "ui_reader.h"
#include<QToolBar>
#include<QPushButton>
#include<QCompleter>
#include<QLineEdit>
#include<QTableWidgetItem>
reader::reader(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::reader)
{
    ui->setupUi(this);
    setWindowTitle("图书管理系统");
    showMaximized();//窗口最大化
    setFixedSize(1920,1080);//固定窗口大小


    //大搜索框
    ui->stackedWidget->setCurrentIndex(0);//默认进入搜索界面
    connect(ui->searchtool,&QToolButton::clicked,this,[=](){
        //点击左边工具栏的搜索图标,就切换至搜索界面
         ui->stackedWidget->setCurrentIndex(0);//利用栈空间切换界面
    });
    connect(ui->widget->completer,QOverload<const QModelIndex &>::of(&QCompleter::activated),[=](){
        //点击自动匹配的提示词就触发搜索
        emit ui->widget->m_searchedit->returnPressed();
    });


    connect(ui->widget->m_searchedit,&QLineEdit::returnPressed,this,[=](){
        //按下enter键就搜索
        ui->stackedWidget->setCurrentIndex(1);
        condition=ui->widget->m_searchedit->text();
        //condition=ui->widget->m_searchedit->text();//将用户在搜索框中输入的字符串储存在变量condition中
        model = new QSqlTableModel(this);
        //model->setStyleSheet("font: 16pt");
        //model->setHeaderData()
        model->setTable("book");//选择book表
        model->setEditStrategy(QSqlTableModel::OnFieldChange);
        model->setFilter(QString("book_name like '%%1%' or author= '%1'").arg(condition,condition));
        model->select();
        ui->tableView->setModel(model);//应用到ui的tableview中
    });


    //小搜索框
    connect(ui->widget_2->completer,QOverload<const QModelIndex &>::of(&QCompleter::activated),[=](){
        //点击自动匹配的提示词就触发搜索
        emit ui->widget_2->m_searchedit->returnPressed();
    });
    connect(ui->widget_2->m_searchedit,&QLineEdit::returnPressed,this,[=](){
        //按下enter键就搜索
        //ui->stackedWidget->setCurrentIndex(1);
        condition=ui->widget_2->m_searchedit->text();//将用户在搜索框中输入的字符串储存在变量condition中
        model = new QSqlTableModel(this);
        model->setTable("book");//选择book表
        //model->setEditStrategy(QSqlTableModel::OnFieldChange);
        model->setFilter(QString("book_name like '%%1%' or author= '%1'").arg(condition,condition));
        model->select();
        ui->tableView->setModel(model);//应用到ui的tableview中
    });


}

reader::~reader()
{
    delete ui;
}
