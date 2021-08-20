//
// Created by 赵德金 on 2021/8/5.
//
#include "DataStruct/LinkListWindow.h"
#include "DataStruct/pushButton.h"
#include "DataStruct/ArrayWindow.h"
#include "Networks/HTTP.h"
#include <QDebug>
#include <QMenuBar>
#include <QMenu>
#include <QStatusBar>
#include "mainWindow.h"
#include <QPushButton>
#include <iostream>
#include <QMainWindow>

mainWindow::mainWindow(QWidget *parent) :
QWidget(parent),
pLableDataStruct(new QLabel(this)),
pGraphButton(new QPushButton(this)),
pBinaryTreeButton(new QPushButton(this)),
pBRTreeButton(new QPushButton(this)),
pStackButton(new QPushButton(this)),
pQueueButton(new QPushButton(this)),
pLinkLIstButton(new QPushButton(this)),
pLoopButton(new QPushButton(this)),
pBSTreeButton(new QPushButton(this)),
pArrayButton(new QPushButton(this)),
pLableAlgorithm(new QLabel(this)),
pLableNetwork(new QLabel(this)),
pLableOS(new QLabel(this))
{
    QString qlcd_style ="QLCDNumber{background-color:black;color: white;   border-radius: 10px;  border: 2px groove gray;border-style: outset;}";
    QString qlcd_style_blue = "QLCDNumber{"

                              "min-height:20;"

                              "border-style:solid;"

                              "border-top-left-radius:2px;"

                              "border-top-right-radius:2px;"

                              "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241), "

                              "stop: 0.2 rgb(233,242,247),"

                              "stop: 0.7 rgb(176,208,225),"

                              "stop: 0.8 rgb(176,208,225),"

                              "stop: 1 rgb(192,216,232));"

                              "}";
    QString widget_style="QWidget{background-color:black;color: white;   border-radius: 10px;  border: 2px groove gray;border-style: outset;}""QPushButton:hover{background-color:white; color: black;}";

    QString button_style="QPushButton{background-color:black;color: white;   border-radius: 10px;  border: 2px groove gray;border-style: outset;}""QPushButton:hover{background-color:white; color: black;}"

                         "QPushButton:pressed{background-color:rgb(85, 170, 255);border-style: inset; }";
    QString button_style_blue =  "QLabel{"

                                  "min-height:20;"

                                  "border-style:solid;"

                                  "border-top-left-radius:2px;"

                                  "border-top-right-radius:2px;"

                                  "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241), "

                                  "stop: 0.2 rgb(233,242,247),"

                                  "stop: 0.7 rgb(176,208,225),"

                                  "stop: 0.8 rgb(176,208,225),"

                                  "stop: 1 rgb(192,216,232));"

                                  "}";
    QString button_style_blue1 = "QPushButton{"

                               "min-height:20;"

                               "border-style:solid;"

                               "border-top-left-radius:2px;"

                               "border-top-right-radius:2px;"

                               "background: qlineargradient(x1: 0, y1: 0, x2: 0, y2: 1, stop:0 rgb(226,236,241), "

                               "stop: 0.2 rgb(233,242,247),"

                               "stop: 0.7 rgb(176,208,225),"

                               "stop: 0.8 rgb(176,208,225),"

                               "stop: 1 rgb(192,216,232));"

                               "}";
    for (int i = 0; i < 5; ++i) {
        pAlgorithmButton[i]=new QPushButton(this);
        pAlgorithmButton[i]->setStyleSheet(button_style);
        pAlgorithmButton[i]->setGeometry(220,150+i*50,150,40);
    }
    pAlgorithmButton[0]->setText("Sort");
    pAlgorithmButton[1]->setText("MinShortCut");
    pAlgorithmButton[2]->setText("Recursion");
    pAlgorithmButton[3]->setText("GAA");
    pAlgorithmButton[4]->setText("DAA");

    for (int i = 0; i < 8; ++i) {
        pNetWorkButton[i]=new QPushButton(this);
        pNetWorkButton[i]->setStyleSheet(button_style);
        pNetWorkButton[i]->setGeometry(400,150+i*50,150,40);
    }
    pNetWorkButton[0]->setText("HTTS");
    pNetWorkButton[1]->setText("DNS");
    pNetWorkButton[2]->setText("IPTables");
    pNetWorkButton[3]->setText("BGP");
    pNetWorkButton[4]->setText("TCP/IP");
    pNetWorkButton[5]->setText("UDP");
    pNetWorkButton[6]->setText("FTP");
    pNetWorkButton[7]->setText("STMP");

    for (int i = 0; i < 10; ++i) {
        pOSButton[i]=new QPushButton(this);
        pOSButton[i]->setStyleSheet(button_style);
        pOSButton[i]->setGeometry(600,150+i*50,150,40);
    }
    pOSButton[0]->setText("Process");
    pOSButton[1]->setText("Thread");
    pOSButton[2]->setText("DeadLock");
    pOSButton[3]->setText("LeafTable");
    pOSButton[4]->setText("VirtualTable");
    pOSButton[5]->setText("IO");
    pOSButton[6]->setText("BanKer");
    pOSButton[7]->setText("MessageShare");
    pOSButton[8]->setText("Inrrupt");
    pOSButton[9]->setText("Directory");

    this->resize(800,600);
    this->setStyleSheet(widget_style);

    pLableDataStruct->setGeometry(50,50,150,40);
    pLableDataStruct->setStyleSheet(button_style_blue);
    pLableDataStruct->setAlignment(Qt::AlignCenter);

    pLableAlgorithm->setGeometry(220,50,150,40);
    pLableAlgorithm->setStyleSheet(button_style_blue);
    pLableAlgorithm->setAlignment(Qt::AlignCenter);
    pLableAlgorithm->setText("Algorithm");

    pLableOS->setGeometry(400,50,150,40);
    pLableOS->setStyleSheet(button_style_blue);
    pLableOS->setAlignment(Qt::AlignCenter);
    pLableOS->setText("OS");

    pLableNetwork->setGeometry(600,50,150,40);
    pLableNetwork->setStyleSheet(button_style_blue);
    pLableNetwork->setAlignment(Qt::AlignCenter);
    pLableNetwork->setText("NetWorks");

    QLCDNumber *datetime = new QLCDNumber(this);
    datetime->setGeometry(50,90,700,50);
    QDateTime *dateTime = new QDateTime();
    QTimer *timer = new QTimer(this);
    timer->start();
    datetime->setAutoFillBackground(true);
    datetime->setDigitCount(20);
    datetime->setSmallDecimalPoint(true);
    connect(timer,&QTimer::timeout,[=](){
        datetime->setStyleSheet(qlcd_style_blue);
        timer->setInterval(1000);
        datetime->display(dateTime->currentDateTime().toString("yyyy-MM-dd hh:mm:ss"));
        datetime->setStyleSheet(qlcd_style);
    });

    pArrayButton->setGeometry(50,150,150,40);
    pArrayButton->setStyleSheet(button_style);
    pLinkLIstButton->setStyleSheet(button_style);
    pQueueButton->setStyleSheet(button_style);
    pStackButton->setStyleSheet(button_style);
    pLoopButton->setStyleSheet(button_style);
    pBSTreeButton->setStyleSheet(button_style);
    pBRTreeButton->setStyleSheet(button_style);
    pBinaryTreeButton->setStyleSheet(button_style);
    pGraphButton->setStyleSheet(button_style);

    pLinkLIstButton->setGeometry(50,200,150,40);
    pQueueButton->setGeometry(50,250,150,40);
    pStackButton->setGeometry(50,300,150,40);
    pLoopButton->setGeometry(50,350,150,40);
    pBSTreeButton->setGeometry(50,400,150,40);
    pBRTreeButton->setGeometry(50,450,150,40);
    pBinaryTreeButton->setGeometry(50,500,150,40);
    pGraphButton->setGeometry(50,550,150,40);

    pLableDataStruct->setText("DataStruct");
    pArrayButton->setText("Array");
    pLinkLIstButton->setText("LinkList");
    pLoopButton->setText("LoopList");
    pQueueButton->setText("Queue");
    pStackButton->setText("Stack");
    pBSTreeButton->setText("BSTree");
    pBRTreeButton->setText("BSTree");
    pBinaryTreeButton->setText("BinaryTree");
    pGraphButton->setText("Graph");
    /*   pAlgorithmButton->setText("算法导论");
    pNetworkButton->setText("计算机网络");
    pOSButton->setText("操作系统");

    pDataStructButton->setGeometry(40,20,80,20);
    pAlgorithmButton->setGeometry(40,45,80,20);
    pNetworkButton->setGeometry(40,70,80,20);
    pOSButton->setGeometry(40,95,80,20);

    this->setWindowTitle("数据实现");
    if(pDataStructButton->isChecked()){
        qDebug()<<pDataStructButton->isChecked()<<endl;*/
    TCPWindow *tcpWindow = new TCPWindow();
    HTTP *https = new HTTP;
    connect(this->pNetWorkButton[0], SIGNAL(clicked(bool)),https, SLOT(createHTTP()));
    connect(this->pNetWorkButton[4], SIGNAL(clicked()),tcpWindow, SLOT(createTcpWindow()));
    connect(this->pArrayButton, SIGNAL(clicked()),this, SLOT(createArray()));
    connect(this->pLinkLIstButton, SIGNAL(clicked()),this, SLOT(createLinkList()));





}
mainWindow::~mainWindow(){
}

void mainWindow::createArray() {
    ArrayWindow *arrayWindow;
    arrayWindow =new ArrayWindow(this);
    qDebug()<<"test"<<endl;
    arrayWindow->createArrayWindow();
    //this->hide();


}

void mainWindow::createLinkList() {
    LinkListWindow *linklistWindow;
    linklistWindow =new LinkListWindow(this);
    qDebug()<<"test"<<endl;
    linklistWindow->createLinkListWindow();

}


