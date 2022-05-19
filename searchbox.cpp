#include "searchbox.h"
#include "ui_searchbox.h"

searchbox::searchbox(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::searchbox)
{
    ui->setupUi(this);
    m_searchedit=ui->searchedit;//将外部接口和内部搜索框关联起来
    //设置搜索框自动匹配
    QSqlQuery query;//新建sql查询
    query.exec("select book_name from book");//查询书名
    QStringList wordList;
    while(query.next()){
       wordList<<query.value("book_name").toString();//将书名存储到wordlist中
    }
    completer = new QCompleter(wordList, this);//初始化自动匹配
    completer->popup()->setStyleSheet("font: 16pt");//设置自动匹配文字大小
    ui->searchedit->setCompleter(completer);//将自动匹配应用于searchedit框中

    //设置搜索框中的提示词与图标
    ui->searchedit->setPlaceholderText("输入书名或作者");//设置搜索框提示词
    ui->searchedit->addAction(QIcon(":/image/search1.png"), QLineEdit::LeadingPosition);//在搜索框前添加搜索图标
}

searchbox::~searchbox()
{
    delete ui;
}
