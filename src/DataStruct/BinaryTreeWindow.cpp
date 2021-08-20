#include "DataStruct/BinaryTreeWindow.h"
#include "DataStruct/BinTreeNode.h"
#include "DataStruct/BinaryTreePaint.h"
#include <vector>
#include <QMessageBox>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QDebug>
BinaryTreeWindow::BinaryTreeWindow(QWidget *parent)
:QWidget(parent),
btnCreate(new QPushButton(this)),
btnClear(new QPushButton(this)),
text_edit_input1(new QLineEdit(this)),
text_edit_input2(new QLineEdit(this))
//binaryTreeWindow(new BinaryTreeWindow(this))
{

    this->resize(1000,800);
    QLabel *preLabel = new QLabel(this);
    preLabel->setText("前序");
    QLabel *midLabel = new QLabel(this);
    midLabel->setText("中序");
    preLabel->setGeometry(50,300,100,30);
    midLabel->setGeometry(50,600,100,30);
    preLabel->setAlignment(Qt::AlignCenter);
    midLabel->setAlignment(Qt::AlignCenter);
    btnCreate->setGeometry(150,700,150,40);
    btnCreate->setText("创建");
    btnClear->setGeometry(600,700,150,40);
    btnClear->setText("清空");
    text_edit_input1->setGeometry(160,300,700,30);
    text_edit_input2->setGeometry(160,600,700,30);
    text_edit_input1->setAlignment(Qt::AlignCenter);
    text_edit_input2->setAlignment(Qt::AlignCenter);

    connect(this->btnCreate, SIGNAL(clicked()), this,SLOT(on_btnCreate_clicked()));
    connect(this->btnClear, SIGNAL(clicked()), this,SLOT(on_btnClear_clicked()));

}

void BinaryTreeWindow::on_btnCreate_clicked()
{ 
    QString preText = this->text_edit_input1->text();
    QString midText = this->text_edit_input2->text();
    qDebug()<<"on_btnCreate_clicked"<<endl;
    BinaryTreePaint *p = new BinaryTreePaint();
    qDebug()<<preText<<endl;
    p->SetInput(preText,midText);
    p->show();

}

void BinaryTreeWindow::on_btnClear_clicked()
{
    this->text_edit_input1->clear();
    this->text_edit_input2->clear();
    if((text_edit_input1->text()==NULL)&&(text_edit_input2->text()==NULL))
        QMessageBox::information(this,"提示","输入清空成功！");
}

void BinaryTreeWindow::createBinaryTreeWindow()
{ 
    this->show();
}

BinaryTreeWindow::~BinaryTreeWindow(){}