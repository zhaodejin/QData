//
// Created by 赵德金 on 2021/8/13.
//

//
// Created by 赵德金 on 2021/8/13.
//

#ifndef QDATA_LINKLISTWINDOW_H
#define QDATA_LINKLISTWINDOW_H
#include <QLabel>
#include <QWidget>
#include <QCoreApplication>
#include <QDebug>
#include <QTableWidgetItem>
#include <QTableWidget>
#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>
class LinkListWindow:public QWidget{
    Q_OBJECT
public:
    LinkListWindow(QWidget *parent=NULL);
    void createLinkListWindow();
    ~LinkListWindow();
    QPushButton *pAddDataButton;
    QPushButton *pDeleteDataButton;
    QPushButton *pSearchDataButton;
    QPushButton *pReserveArrayButton;
    QLineEdit *textEditAddData;
    QLineEdit *textEditDeleteButton;
    QLineEdit *textEditSearchButton;
    QLineEdit *textEditAddPositon;
    QPushButton *pSavaDataButton;
    QLineEdit *textSearchReturn;
    QTableWidget *tableCurrentArray;
    QTableWidget *tableHistoryArray;
    QLabel *labelHistoryData;
    QLineEdit *lineEditCurentTIme;
    //ArrayList<int> L = ArrayList<int>(50);
    QResizeEvent *e;


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
#endif //QDATA_LINKLISTWINDOW_H


