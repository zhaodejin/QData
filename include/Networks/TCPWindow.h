//
// Created by 赵德金 on 2021/8/18.
//

#ifndef QDATA_TCPWINDOW_H
#define QDATA_TCPWINDOW_H
#include <QWidget>
#include <QPushButton>
#include <QDebug>
#include <QLineEdit>
#include <QTextEdit>
#include <QLabel>
#include <QTextCodec>
#include <QMessageBox>
#include <QtNetwork/QTcpServer>
#include <QtNetwork/QTcpSocket>
#include <QByteArray>
#include <QTimer>
#include <QBuffer>


class TCPWindow:public QWidget{
    Q_OBJECT
public:
    explicit TCPWindow(QWidget *parent = nullptr);
    ~TCPWindow();

public slots:
    void createTcpWindow();
    void ListenSocket();
    void closeSocket();
    void sendMessage();
    void newConnectSlot();
    void receiveClientContenxt();

    void connectHostSlot();
    void receiveServerContentxt();
    void sendTcpSlot();
    void tcpDisconnect();

private:
    QLineEdit *IPEdit;
    QLineEdit *PortEdit;
    QTextEdit *ServerText;
    QTextEdit *ClientText;

    QPushButton *listenButton;
    //QPushButton *disconnectButton;
    QPushButton *connectButton;
    QTcpServer *tcpServer;
    QTcpSocket *tcpSocket;
    QPushButton *clientSendButton;
    QPushButton *serverSendButton;
    QTextEdit *serverSendEdit;
    QTextEdit *clientSendEdit;


};


#endif //QDATA_TCPWINDOW_H
