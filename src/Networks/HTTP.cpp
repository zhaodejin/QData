//
// Created by 赵德金 on 2021/8/20.
//
#include "Networks/HTTP.h"

HTTP::HTTP(QWidget *parent):
QWidget(parent),
textBrowser(new QTextEdit(this))
{
    this->resize(800,600);
    textBrowser->setGeometry(50,50,700,500);
    manager = new QNetworkAccessManager(this);
    connect(manager, SIGNAL(finished(QNetworkReply *)),this, SLOT(replyFinished(QNetworkReply *)));
    url ="https://www.baidu.com";
    reply = manager->get(QNetworkRequest(url));
    qDebug()<<reply->size()<<endl;
    connect(reply, SIGNAL(finished()),this, SLOT(http));
    manager->get(QNetworkRequest(QUrl(url)));
}

void HTTP::replyFinished(QNetworkReply *) {
    //QTextCodec *codec = QTextCodec::codecForName("utf8");
    auto all = reply->readAll();
    reply->waitForBytesWritten(100);
    qDebug()<<"master..."<<all;
    this->textBrowser->setText(QString::fromUtf8(all));

}

void HTTP::createHTTP() {
    this->show();
}
