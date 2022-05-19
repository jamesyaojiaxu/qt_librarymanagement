#include "mainwindow.h"
#include "ui_mainwindow.h"
#include<QDebug>
#include"reader.h"
#include<admin.h>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("图书管理系统");
    ui->Login_Username->setText("admin");
    ui->Login_Password->setText("admin");
    setFixedSize(606,401);//设置固定大小
    db = QSqlDatabase::addDatabase("QMYSQL");//连接mysql数据库
    db.setHostName("81.70.93.5");//数据库ip地址
    db.setDatabaseName("librarymanagement");//数据库名称
    db.setUserName("root");//mysql用户名
    db.setPassword("123456");//mysql密码
    if(!db.open()){//如果连接数据库失败,就打印错误提示
         QMessageBox::information(this,"警告","网络异常,请稍候再试");
         exit(0);
     }

}

MainWindow::~MainWindow()
{
    delete ui;
}
void MainWindow::on_Login_Button_clicked()
{

    QString username = ui->Login_Username->text();//保存输入的用户名
    QString password = ui->Login_Password->text();//保存输入的密码
    qDebug()<<"用户名："<<username<<"密码:"<<password;
    QSqlQuery query;
    query.exec("select username,password,identity from user");
    bool loginSuccess=false;//用于判断是否登录成功
    while(query.next()){
       QString user = query.value("username").toString();
       QString pass = query.value("password").toString();
       QString identity = query.value("identity").toString();
       qDebug() << user << pass ;
       if(username.compare(user)==0&&password.compare(pass)==0){
           loginSuccess=true;//如果用户名和密码都正确,就设置该值为true
           this->hide();//关闭当前窗口
           if(identity.compare("reader")==0){
               //如果身份为读者,就打开读者界面
               reader *r=new reader;
               r->show();
           }
           if(identity.compare("admin")==0){
               //如果身份为管理员,就打开管理员界面
               admin *a=new admin;
               a->show();
           }
           break;
       }
   }

   if(loginSuccess==false){
        QMessageBox::information(this,"警告","用户名或密码错误");
   }
}
