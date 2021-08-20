//
// Created by 赵德金 on 2021/8/5.
//
#include "mainWindow.h"
#include <QApplication>
#include <iostream>
#include <QApplication>
#include <QDesktopWidget>
#include <QDebug>
#include <DataStruct/ArrayList.h>
int main(int argc, char *argv[]){
    QApplication a(argc,argv);
    mainWindow *mainwindow = new mainWindow;
    mainwindow->show();
    return a.exec();

}