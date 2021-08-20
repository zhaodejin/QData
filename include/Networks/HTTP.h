//
// Created by 赵德金 on 2021/8/20.
//

#ifndef COMPUTERFORQT_HTTP_H
#define COMPUTERFORQT_HTTP_H
#include <QWidget>
#include <QtNetwork>
#include <QNetworkAccessManager>
#include <QUrl>
#include <QNetworkRequest>
#include <QTextCodec>
#include <QNetworkReply>
#include <QDebug>
#include <QFileInfo>
#include <QFile>
#include <QEvent>
#include <QHostInfo>
#include <QtWebEngineWidgets/QWebEnginePage>
#include <QByteArray>
#include <QTimer>
#include <QTextEdit>

class HTTP : public QWidget{
    Q_OBJECT
public:
    explicit HTTP(QWidget *parent = 0);
private:
    QNetworkAccessManager *manager;
    QNetworkReply *reply;
    QUrl url;
    QFile *file;
    QTextEdit *textBrowser;
public slots:
    void createHTTP();
    void replyFinished(QNetworkReply *);
};

#endif //COMPUTERFORQT_HTTP_H