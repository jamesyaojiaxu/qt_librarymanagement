#include "admin.h"
#include "ui_admin.h"
#include"searchbox.h"
admin::admin(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::admin)
{
    ui->setupUi(this);
    setWindowTitle("图书管理系统");
    showMaximized();



    //图书管理,QSqlTableModel实现
    connect(ui->librarymanage,&QToolButton::clicked,this,[=](){
        //点击左边工具栏图书管理图标,切换至图书管理界面
        ui->stackedWidget->setCurrentIndex(1);//切换到第1个界面

    });


    //添加书籍
    connect(ui->addbook,&QToolButton::clicked,this,[=](){
        int rowNum = model->rowCount(); //获得表的行数
        model->insertRow(rowNum); //添加一行
        ui->tableView->scrollToBottom();//鼠标滚动条滑到最底部
        model->submitAll();//按下回车即提交
    });
    //删除书籍
    connect(ui->deletebook,&QToolButton::clicked,this,[=](){
        //获取选中的行
        int curRow = ui->tableView->currentIndex().row();
        //删除该行
        model->removeRow(curRow);
    });
    //刷新
    connect(ui->refresh,&QToolButton::clicked,this,[=](){
        //点击刷新按钮,就打印所有书籍信息
        model = new QSqlTableModel(this);
        model->setTable("book");//进入book表
        model->setEditStrategy(QSqlTableModel::OnFieldChange);//设置编辑模式:修改后立即上传至数据库
        model->select(); //选取整个表的所有行
        ui->tableView->setModel(model);//应用到ui的tableview中
    });
    //搜索
  connect(ui->widget1->completer,QOverload<const QModelIndex &>::of(&QCompleter::activated),[=](){
      //点击自动匹配的提示词就触发搜索
      emit ui->widget1->m_searchedit->returnPressed();
  });
  connect(ui->widget1->m_searchedit,&QLineEdit::returnPressed,this,[=](){
      //按下enter键就搜索
      QString condition=ui->widget1->m_searchedit->text();//将用户在搜索框中输入的字符串储存在变量condition中
      model = new QSqlTableModel(this);
      model->setTable("book");//选择book表
      //model->setEditStrategy(QSqlTableModel::OnFieldChange);
      model->setFilter(QString("book_name like '%%1%' or author= '%1'").arg(condition,condition));
      model->select();
        ui->tableView->setModel(model);//应用到ui的tableview中
    });
  emit ui->librarymanage->clicked();//默认显示书籍管理
  emit ui->refresh->clicked();//默认显示所有书籍


  //用户管理,QTableWidget+QSqlQuery实现
  connect(ui->usermanage,&QToolButton::clicked,this,[=](){
      //点击左边工具栏的用户管理图标,切换至用户管理界面,并打印用户数据
      ui->stackedWidget->setCurrentIndex(0);//切换到第0个界面
      ui->tableWidget->setColumnCount(3);//设置列数为3
      ui->tableWidget->setHorizontalHeaderLabels(QStringList()<<"姓名"<<"年龄"<<"性别");//设置表头
      int i=0,col=0;
      ui->tableWidget->setRowCount(100);//设置行数为100
      QSqlQuery query;
      query.exec("select username,password,identity from user");//查询用户名,密码,身份
      while(query.next()){
          col=0;
          QString user = query.value("username").toString();
          QString pass = query.value("password").toString();
          QString identity = query.value("identity").toString();
          ui->tableWidget->setItem(i,col++,new QTableWidgetItem(user));//填写(i,0)
          ui->tableWidget->setItem(i,col++,new QTableWidgetItem(pass));//填写(i,1)
          ui->tableWidget->setItem(i,col++,new QTableWidgetItem(identity));//填写(i,2)
          i++;
      }
  });

}
admin::~admin()
{
    delete ui;
}
