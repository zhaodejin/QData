//
// Created by 赵德金 on 2021/8/18.
//
#define  MAXLENGTH 2048
#include "Networks/TCPWindow.h"
TCPWindow::TCPWindow(QWidget *parent):
QWidget(parent),
IPEdit(new QLineEdit(this)),
PortEdit(new QLineEdit(this)),
ServerText(new QTextEdit(this)),
ClientText(new QTextEdit(this)),
listenButton(new QPushButton(this)),
//disconnectButton(new QPushButton(this)),
clientSendButton(new QPushButton(this)),
connectButton(new QPushButton(this)),
serverSendEdit(new QTextEdit(this)),
clientSendEdit(new QTextEdit(this)),
serverSendButton(new QPushButton(this))
{

    this->resize(1000,800);
 //   this->setGeometry(10,10,500,600);
    QLabel *ipLabel = new QLabel(this);
    ipLabel->setGeometry(500,25,80,30);
    ipLabel->setText("IP:");
    ipLabel->setAlignment(Qt::AlignRight);

    QLabel *portLabel = new QLabel(this);
    portLabel->setGeometry(20,25,80,30);
    portLabel->setText("Port:");
    portLabel->setAlignment(Qt::AlignRight);

    IPEdit->setGeometry(600,20,100,30);
    IPEdit->setToolTip("请输入ip地址");
    IPEdit->setText("192.168.0.105");
    IPEdit->setAlignment(Qt::AlignCenter);

    PortEdit->setGeometry(100,20,100,30);
    PortEdit->setToolTip("请输入Port");
    PortEdit->setText("22");
    PortEdit->setAlignment(Qt::AlignCenter);

    ServerText->setGeometry(100,60,400,500);

    ClientText->setGeometry(600,60,400,500);

    serverSendEdit->setGeometry(100,600,400,30);

    clientSendEdit->setGeometry(600,600,400,30);

    listenButton->setGeometry(400,20,100,40);
    listenButton->setText("监听");

    /*disconnectButton->setGeometry(900,20,100,40);
    disconnectButton->setText("断开连接");*/

    connectButton->setGeometry(900,20,100,40);
    connectButton->setText("连接");

    clientSendButton->setGeometry(900,700,100,40);
    clientSendButton->setText("发送");

    serverSendButton->setGeometry(400,700,100,40);
    serverSendButton->setText("发送");

    tcpServer = new QTcpServer;
    connect(this->listenButton, SIGNAL(clicked(bool)),this,SLOT(ListenSocket()));
    connect(this->tcpServer, SIGNAL(newConnection()),this, SLOT(newConnectSlot()));
    connect(this->serverSendButton, SIGNAL(clicked(bool)),this, SLOT(sendMessage()));

    tcpSocket = new QTcpSocket;
    connect(this->connectButton, SIGNAL(clicked(bool)),this,SLOT(connectHostSlot()));
    connect(this->clientSendButton, SIGNAL(clicked(bool)),this,SLOT(sendTcpSlot()));
    connect(tcpSocket, SIGNAL(readyRead()),this,SLOT(receiveClientContenxt()));
    connect(tcpSocket, SIGNAL(disconnected()),this,SLOT(tcpDisconnect()));
}

TCPWindow::~TCPWindow() {
    tcpServer->close();
    tcpServer->deleteLater();
    delete this->tcpSocket;
}

void TCPWindow::createTcpWindow() {
    this->show();
}

void TCPWindow::ListenSocket() {
    if(this->listenButton->text() == "监听")
    {
        quint16 port = quint16(this->PortEdit->text().toInt());
        qDebug()<<"port:"<<endl;
        if(!tcpServer->listen(QHostAddress::Any,port))
        {
            QMessageBox::information(this,"提示","监听设置出错");
            return;
        }
        else
        {
            QMessageBox::information(this,"提示","开始监听");
            this->listenButton->setText("取消监听");
        }
    }
    else
    {
        if (tcpSocket->state()==QAbstractSocket::ConnectedState)
        {
            tcpSocket->disconnectFromHost();
        }
        tcpServer->close();
        this->listenButton->setText("监听");
    }
}

void TCPWindow::closeSocket() {
    this->listenButton->setText("监听");
    QMessageBox::information(this,"提示","TCP连接中断");
}

void TCPWindow::sendMessage() {
    //qDebug()<<"sendMessage"<<endl;
    QString sendContext = this->serverSendEdit->document()->toPlainText();
    tcpSocket->write((sendContext.toLatin1()));
    tcpSocket->flush();
    qDebug()<<tcpSocket->size()<<endl;

}

void TCPWindow::newConnectSlot() {
    tcpSocket=tcpServer->nextPendingConnection();
    connect(this->tcpSocket, SIGNAL(disconnected()),this, SLOT(closeSocket()));
    connect(this->tcpSocket, SIGNAL(readyRead()),this, SLOT(receiveServerContentxt()));
    QMessageBox::information(this,"提示","监听到连接");

}


void TCPWindow::connectHostSlot() {
    if(this->connectButton->text() == "连接")
    {
        QString hostip = this->IPEdit->text();
        quint16 hostport = quint16 (this->PortEdit->text().toUInt());
        tcpSocket->abort();
        tcpSocket->connectToHost(hostip,hostport);
        if (!tcpSocket->waitForConnected(3000))
        {
            QMessageBox::information(this,"提示","连接失败");
            return;
        }
        else
        {
            QMessageBox::information(this,"提示","连接成功");
            this->connectButton->setText("断开连接");
        }
    }
    else
    {
        tcpSocket->disconnectFromHost();
        this->connectButton->setText("连接");
    }
}

void TCPWindow::receiveServerContentxt() {
    //qDebug()<<"receiveTcpSlot"<<endl;
    QByteArray receiveData;
    QByteArray tmpData = tcpSocket->readAll();
    //qDebug()<<"recv:"<<tmpData.toHex();
    receiveData = tcpSocket->readAll();
    if (!receiveData.isEmpty())
    {
        QString str = this->ClientText->toPlainText();
        str += tr(receiveData);
        this->ClientText->setText(str);
    }
}

void TCPWindow::sendTcpSlot() {
    //qDebug()<<"sendTcpSlot"<<endl;
    tcpSocket->write(this->clientSendEdit->toPlainText().toLatin1());
    //int n = tcpSocket->write(sendContext,MAXLENGTH);
    //qDebug()<<n<<endl;
    //tcpSocket->waitForBytesWritten();
    tcpSocket->flush();
    qDebug()<<tcpSocket->size()<<endl;
    //qDebug()<<<<endl;
   // qDebug()<<sendContext<<endl;
}

void TCPWindow::tcpDisconnect() {
    this->connectButton->setText("连接");
    QMessageBox::information(this,"提示","TCP连接中断");
}

void TCPWindow::receiveClientContenxt() {
    QByteArray receiveData;
    //receiveData = tcpSocket->readAll();
    //ClientText->setText("test:::\n\n");
    //this->ClientText->append(QString::fromUtf8(receiveData));
    //qDebug()<<ClientText->toPlainText()<<endl;
    receiveData = tcpSocket->readAll();
    if (!receiveData.isEmpty())
    {
        QString str = this->ClientText->toPlainText();
        str += tr(receiveData);
        this->ClientText->setText(str);
    }
    
}
