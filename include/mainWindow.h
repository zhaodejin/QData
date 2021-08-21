//
// Created by 赵德金 on 2021/8/5.
//

#ifndef QDATA_MAINWINDOW_H
#define QDATA_MAINWINDOW_H
#include "DataStruct/LinkListWindow.h"
#include <QWidget>
#include <QSettings>
#include <QPushButton>
#include <QLineEdit>
#include <QLabel>
#include <QTimer>
#include <QDateTime>
#include <QDebug>
#include "DataStruct/ArrayWindow.h"
#include "Networks/TCPWindow.h"
#include <QLCDNumber>
#include <QDateTime>
#include <QTimer>
class mainWindow:public QWidget{
    Q_OBJECT
public:
    mainWindow(QWidget *parent=NULL);
    ~mainWindow();

signals:
    void dataButtonClick(bool);
    void alButtonClick();
    void networkButtonClick();
    void osButtonCLick();

private slots:
    void createArray();
    void createLinkList();

/*private slots:
    void menuBarTimeDisplat();*/
private:
    QLabel *pLableDataStruct;
    QLabel *pLableAlgorithm;
    QLabel *pLableNetwork;
    QLabel *pLableOS;
    QPushButton *pArrayButton;
    QPushButton *pLinkLIstButton;
    QPushButton *pQueueButton;
    QPushButton *pStackButton;
    QPushButton *pLoopButton;
    QPushButton *pBinaryTreeButton;
    QPushButton *pBSTreeButton;
    QPushButton *pBRTreeButton;
    QPushButton *pGraphButton;

    QPushButton *pAlgorithmButton[5];
    QPushButton *pNetWorkButton[8];
    QPushButton *pOSButton[10];
   // QPushButton *pNetworkButton;
  //  QPushButton *pOSButton;
};

//class mainWindow {


#endif //QDATA_MAINWINDOW_H
