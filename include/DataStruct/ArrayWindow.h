//
// Created by 赵德金 on 2021/8/7.
//

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.14.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef QDATA_ARRAYWINDOW_H
#define QDATA_ARRAYWINDOW_H
#include <QWidget>
#include <QObject>
#include <QDebug>
#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "../DataStruct/ArrayList.h"

QT_BEGIN_NAMESPACE
//
class ArrayWindow:public QWidget{
    Q_OBJECT
public:

    ArrayWindow(QWidget *parent=NULL);
    void createArrayWindow();
    ~ArrayWindow();
    //ArrayList<int> *Array = new ArrayList<int>(10);
    QPushButton *pAddDataButton;
    QPushButton *pDeleteDataButton;
    QPushButton *pSearchDataButton;
    QPushButton *pReserveArrayButton;
    QTextEdit *textEditAddData;
    QTextEdit *textEditDeleteButton;
    QTextEdit *textEditSearchButton;
    QTextEdit *textEditAddPositon;
    QPushButton *pSavaDataButton;
    QTextEdit *textSearchReturn;
    QTableWidget *tableCurrentArray;
    QTableWidget *tableHistoryArray;
    QLabel *labelHistoryData;
    QLineEdit *lineEditCurentTIme;
    //ArrayList<int> L = ArrayList<int>(50);


    void retranslateUi(QMainWindow *MainWindow);


public slots:
    void insert();
    //void find();
    //void Delete();
    //void sava();
    //void reserve();

};
// namespace Ui

QT_END_NAMESPACE

#endif // QDATA_ARRAYWINDOW_H



