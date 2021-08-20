//
// Created by 赵德金 on 2021/8/7.
//

#include <QDebug>
#include <iostream>
#include "DataStruct/ArrayWindow.h"
using namespace std;

ArrayWindow::~ArrayWindow() {
}


void ArrayWindow::retranslateUi(QMainWindow *MainWindow) {

    MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
    pAddDataButton->setText(QCoreApplication::translate("MainWindow", "\346\267\273\345\212\240", nullptr));
    pDeleteDataButton->setText(QCoreApplication::translate("MainWindow", "\345\210\240\351\231\244", nullptr));
    pSearchDataButton->setText(QCoreApplication::translate("MainWindow", "\346\237\245\346\211\276", nullptr));
    pReserveArrayButton->setText(QCoreApplication::translate("MainWindow", "\345\217\215\350\275\254", nullptr));
    textEditAddData->setHtml(QCoreApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
                                                                       "<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
                                                                       "p, li { white-space: pre-wrap; }\n"
                                                                       "</style></head><body style=\" font-family:'.AppleSystemUIFont'; font-size:13pt; font-weight:400; font-style:normal;\">\n"
                                                                       "<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'.AppleSystemUIFont';\"><br /></p></body></html>", nullptr));
    pSavaDataButton->setText(QCoreApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
    QTableWidgetItem *___qtablewidgetitem = tableCurrentArray->horizontalHeaderItem(0);
    ___qtablewidgetitem->setText(QCoreApplication::translate("MainWindow", "\346\225\260\346\215\256", nullptr));
    QTableWidgetItem *___qtablewidgetitem1 = tableCurrentArray->verticalHeaderItem(0);
    ___qtablewidgetitem1->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    QTableWidgetItem *___qtablewidgetitem2 = tableCurrentArray->verticalHeaderItem(1);
    ___qtablewidgetitem2->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    QTableWidgetItem *___qtablewidgetitem3 = tableCurrentArray->verticalHeaderItem(2);
    ___qtablewidgetitem3->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    QTableWidgetItem *___qtablewidgetitem4 = tableCurrentArray->verticalHeaderItem(3);
    ___qtablewidgetitem4->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
    QTableWidgetItem *___qtablewidgetitem5 = tableCurrentArray->verticalHeaderItem(4);
    ___qtablewidgetitem5->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
    QTableWidgetItem *___qtablewidgetitem6 = tableCurrentArray->verticalHeaderItem(5);
    ___qtablewidgetitem6->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
    QTableWidgetItem *___qtablewidgetitem7 = tableCurrentArray->verticalHeaderItem(6);
    ___qtablewidgetitem7->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    QTableWidgetItem *___qtablewidgetitem8 = tableCurrentArray->verticalHeaderItem(7);
    ___qtablewidgetitem8->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
    QTableWidgetItem *___qtablewidgetitem9 = tableCurrentArray->verticalHeaderItem(8);
    ___qtablewidgetitem9->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
    QTableWidgetItem *___qtablewidgetitem10 = tableCurrentArray->verticalHeaderItem(9);
    ___qtablewidgetitem10->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
    QTableWidgetItem *___qtablewidgetitem11 = tableCurrentArray->verticalHeaderItem(10);
    ___qtablewidgetitem11->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
    QTableWidgetItem *___qtablewidgetitem12 = tableCurrentArray->verticalHeaderItem(11);
    ___qtablewidgetitem12->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
    QTableWidgetItem *___qtablewidgetitem13 = tableCurrentArray->verticalHeaderItem(12);
    ___qtablewidgetitem13->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
    QTableWidgetItem *___qtablewidgetitem14 = tableCurrentArray->verticalHeaderItem(13);
    ___qtablewidgetitem14->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
    QTableWidgetItem *___qtablewidgetitem15 = tableCurrentArray->verticalHeaderItem(14);
    ___qtablewidgetitem15->setText(QCoreApplication::translate("MainWindow", "15", nullptr));
    QTableWidgetItem *___qtablewidgetitem16 = tableCurrentArray->verticalHeaderItem(15);
    ___qtablewidgetitem16->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
    QTableWidgetItem *___qtablewidgetitem17 = tableCurrentArray->verticalHeaderItem(16);
    ___qtablewidgetitem17->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
    QTableWidgetItem *___qtablewidgetitem18 = tableCurrentArray->verticalHeaderItem(17);
    ___qtablewidgetitem18->setText(QCoreApplication::translate("MainWindow", "18", nullptr));
    QTableWidgetItem *___qtablewidgetitem19 = tableCurrentArray->verticalHeaderItem(18);
    ___qtablewidgetitem19->setText(QCoreApplication::translate("MainWindow", "19", nullptr));
    QTableWidgetItem *___qtablewidgetitem20 = tableCurrentArray->verticalHeaderItem(19);
    ___qtablewidgetitem20->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
    QTableWidgetItem *___qtablewidgetitem21 = tableCurrentArray->verticalHeaderItem(20);
    ___qtablewidgetitem21->setText(QCoreApplication::translate("MainWindow", "21", nullptr));
    QTableWidgetItem *___qtablewidgetitem22 = tableCurrentArray->verticalHeaderItem(21);
    ___qtablewidgetitem22->setText(QCoreApplication::translate("MainWindow", "22", nullptr));
    QTableWidgetItem *___qtablewidgetitem23 = tableCurrentArray->verticalHeaderItem(22);
    ___qtablewidgetitem23->setText(QCoreApplication::translate("MainWindow", "23", nullptr));
    QTableWidgetItem *___qtablewidgetitem24 = tableCurrentArray->verticalHeaderItem(23);
    ___qtablewidgetitem24->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
    QTableWidgetItem *___qtablewidgetitem25 = tableCurrentArray->verticalHeaderItem(24);
    ___qtablewidgetitem25->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
    QTableWidgetItem *___qtablewidgetitem26 = tableCurrentArray->verticalHeaderItem(25);
    ___qtablewidgetitem26->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
    QTableWidgetItem *___qtablewidgetitem27 = tableCurrentArray->verticalHeaderItem(26);
    ___qtablewidgetitem27->setText(QCoreApplication::translate("MainWindow", "27", nullptr));
    QTableWidgetItem *___qtablewidgetitem28 = tableCurrentArray->verticalHeaderItem(27);
    ___qtablewidgetitem28->setText(QCoreApplication::translate("MainWindow", "28", nullptr));
    QTableWidgetItem *___qtablewidgetitem29 = tableCurrentArray->verticalHeaderItem(28);
    ___qtablewidgetitem29->setText(QCoreApplication::translate("MainWindow", "29", nullptr));
    QTableWidgetItem *___qtablewidgetitem30 = tableCurrentArray->verticalHeaderItem(29);
    ___qtablewidgetitem30->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
    QTableWidgetItem *___qtablewidgetitem31 = tableCurrentArray->verticalHeaderItem(30);
    ___qtablewidgetitem31->setText(QCoreApplication::translate("MainWindow", "32", nullptr));
    QTableWidgetItem *___qtablewidgetitem32 = tableCurrentArray->verticalHeaderItem(31);
    ___qtablewidgetitem32->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    QTableWidgetItem *___qtablewidgetitem33 = tableCurrentArray->verticalHeaderItem(32);
    ___qtablewidgetitem33->setText(QCoreApplication::translate("MainWindow", "33", nullptr));
    QTableWidgetItem *___qtablewidgetitem34 = tableCurrentArray->verticalHeaderItem(33);
    ___qtablewidgetitem34->setText(QCoreApplication::translate("MainWindow", "34", nullptr));
    QTableWidgetItem *___qtablewidgetitem35 = tableCurrentArray->verticalHeaderItem(34);
    ___qtablewidgetitem35->setText(QCoreApplication::translate("MainWindow", "35", nullptr));
    QTableWidgetItem *___qtablewidgetitem36 = tableCurrentArray->verticalHeaderItem(35);
    ___qtablewidgetitem36->setText(QCoreApplication::translate("MainWindow", "36", nullptr));
    QTableWidgetItem *___qtablewidgetitem37 = tableCurrentArray->verticalHeaderItem(36);
    ___qtablewidgetitem37->setText(QCoreApplication::translate("MainWindow", "37", nullptr));
    QTableWidgetItem *___qtablewidgetitem38 = tableCurrentArray->verticalHeaderItem(37);
    ___qtablewidgetitem38->setText(QCoreApplication::translate("MainWindow", "38", nullptr));
    QTableWidgetItem *___qtablewidgetitem39 = tableCurrentArray->verticalHeaderItem(38);
    ___qtablewidgetitem39->setText(QCoreApplication::translate("MainWindow", "39", nullptr));
    QTableWidgetItem *___qtablewidgetitem40 = tableCurrentArray->verticalHeaderItem(39);
    ___qtablewidgetitem40->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
    QTableWidgetItem *___qtablewidgetitem41 = tableCurrentArray->verticalHeaderItem(40);
    ___qtablewidgetitem41->setText(QCoreApplication::translate("MainWindow", "41", nullptr));
    QTableWidgetItem *___qtablewidgetitem42 = tableCurrentArray->verticalHeaderItem(41);
    ___qtablewidgetitem42->setText(QCoreApplication::translate("MainWindow", "42", nullptr));
    QTableWidgetItem *___qtablewidgetitem43 = tableCurrentArray->verticalHeaderItem(42);
    ___qtablewidgetitem43->setText(QCoreApplication::translate("MainWindow", "43", nullptr));
    QTableWidgetItem *___qtablewidgetitem44 = tableCurrentArray->verticalHeaderItem(43);
    ___qtablewidgetitem44->setText(QCoreApplication::translate("MainWindow", "44", nullptr));
    QTableWidgetItem *___qtablewidgetitem45 = tableCurrentArray->verticalHeaderItem(44);
    ___qtablewidgetitem45->setText(QCoreApplication::translate("MainWindow", "45", nullptr));
    QTableWidgetItem *___qtablewidgetitem46 = tableCurrentArray->verticalHeaderItem(45);
    ___qtablewidgetitem46->setText(QCoreApplication::translate("MainWindow", "46", nullptr));
    QTableWidgetItem *___qtablewidgetitem47 = tableCurrentArray->verticalHeaderItem(46);
    ___qtablewidgetitem47->setText(QCoreApplication::translate("MainWindow", "47", nullptr));
    QTableWidgetItem *___qtablewidgetitem48 = tableCurrentArray->verticalHeaderItem(47);
    ___qtablewidgetitem48->setText(QCoreApplication::translate("MainWindow", "48", nullptr));
    QTableWidgetItem *___qtablewidgetitem49 = tableCurrentArray->verticalHeaderItem(48);
    ___qtablewidgetitem49->setText(QCoreApplication::translate("MainWindow", "49", nullptr));
    QTableWidgetItem *___qtablewidgetitem50 = tableHistoryArray->horizontalHeaderItem(0);
    ___qtablewidgetitem50->setText(QCoreApplication::translate("MainWindow", "\347\254\2540\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem51 = tableHistoryArray->horizontalHeaderItem(1);
    ___qtablewidgetitem51->setText(QCoreApplication::translate("MainWindow", "\347\254\2541\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem52 = tableHistoryArray->horizontalHeaderItem(2);
    ___qtablewidgetitem52->setText(QCoreApplication::translate("MainWindow", "\347\254\2542\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem53 = tableHistoryArray->horizontalHeaderItem(3);
    ___qtablewidgetitem53->setText(QCoreApplication::translate("MainWindow", "\347\254\2543\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem54 = tableHistoryArray->horizontalHeaderItem(4);
    ___qtablewidgetitem54->setText(QCoreApplication::translate("MainWindow", "\347\254\2544\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem55 = tableHistoryArray->horizontalHeaderItem(5);
    ___qtablewidgetitem55->setText(QCoreApplication::translate("MainWindow", "\347\254\2545\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem56 = tableHistoryArray->horizontalHeaderItem(6);
    ___qtablewidgetitem56->setText(QCoreApplication::translate("MainWindow", "\347\254\2546\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem57 = tableHistoryArray->horizontalHeaderItem(7);
    ___qtablewidgetitem57->setText(QCoreApplication::translate("MainWindow", "\347\254\2547\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem58 = tableHistoryArray->horizontalHeaderItem(8);
    ___qtablewidgetitem58->setText(QCoreApplication::translate("MainWindow", "\347\254\2548\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem59 = tableHistoryArray->horizontalHeaderItem(9);
    ___qtablewidgetitem59->setText(QCoreApplication::translate("MainWindow", "\347\254\2549\345\210\227", nullptr));
    QTableWidgetItem *___qtablewidgetitem60 = tableHistoryArray->verticalHeaderItem(0);
    ___qtablewidgetitem60->setText(QCoreApplication::translate("MainWindow", "0", nullptr));
    QTableWidgetItem *___qtablewidgetitem61 = tableHistoryArray->verticalHeaderItem(1);
    ___qtablewidgetitem61->setText(QCoreApplication::translate("MainWindow", "1", nullptr));
    QTableWidgetItem *___qtablewidgetitem62 = tableHistoryArray->verticalHeaderItem(2);
    ___qtablewidgetitem62->setText(QCoreApplication::translate("MainWindow", "2", nullptr));
    QTableWidgetItem *___qtablewidgetitem63 = tableHistoryArray->verticalHeaderItem(3);
    ___qtablewidgetitem63->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    QTableWidgetItem *___qtablewidgetitem64 = tableHistoryArray->verticalHeaderItem(4);
    ___qtablewidgetitem64->setText(QCoreApplication::translate("MainWindow", "4", nullptr));
    QTableWidgetItem *___qtablewidgetitem65 = tableHistoryArray->verticalHeaderItem(5);
    ___qtablewidgetitem65->setText(QCoreApplication::translate("MainWindow", "5", nullptr));
    QTableWidgetItem *___qtablewidgetitem66 = tableHistoryArray->verticalHeaderItem(6);
    ___qtablewidgetitem66->setText(QCoreApplication::translate("MainWindow", "6", nullptr));
    QTableWidgetItem *___qtablewidgetitem67 = tableHistoryArray->verticalHeaderItem(7);
    ___qtablewidgetitem67->setText(QCoreApplication::translate("MainWindow", "7", nullptr));
    QTableWidgetItem *___qtablewidgetitem68 = tableHistoryArray->verticalHeaderItem(8);
    ___qtablewidgetitem68->setText(QCoreApplication::translate("MainWindow", "8", nullptr));
    QTableWidgetItem *___qtablewidgetitem69 = tableHistoryArray->verticalHeaderItem(9);
    ___qtablewidgetitem69->setText(QCoreApplication::translate("MainWindow", "9", nullptr));
    QTableWidgetItem *___qtablewidgetitem70 = tableHistoryArray->verticalHeaderItem(10);
    ___qtablewidgetitem70->setText(QCoreApplication::translate("MainWindow", "10", nullptr));
    QTableWidgetItem *___qtablewidgetitem71 = tableHistoryArray->verticalHeaderItem(11);
    ___qtablewidgetitem71->setText(QCoreApplication::translate("MainWindow", "11", nullptr));
    QTableWidgetItem *___qtablewidgetitem72 = tableHistoryArray->verticalHeaderItem(12);
    ___qtablewidgetitem72->setText(QCoreApplication::translate("MainWindow", "12", nullptr));
    QTableWidgetItem *___qtablewidgetitem73 = tableHistoryArray->verticalHeaderItem(13);
    ___qtablewidgetitem73->setText(QCoreApplication::translate("MainWindow", "13", nullptr));
    QTableWidgetItem *___qtablewidgetitem74 = tableHistoryArray->verticalHeaderItem(14);
    ___qtablewidgetitem74->setText(QCoreApplication::translate("MainWindow", "14", nullptr));
    QTableWidgetItem *___qtablewidgetitem75 = tableHistoryArray->verticalHeaderItem(15);
    ___qtablewidgetitem75->setText(QCoreApplication::translate("MainWindow", "15", nullptr));
    QTableWidgetItem *___qtablewidgetitem76 = tableHistoryArray->verticalHeaderItem(16);
    ___qtablewidgetitem76->setText(QCoreApplication::translate("MainWindow", "16", nullptr));
    QTableWidgetItem *___qtablewidgetitem77 = tableHistoryArray->verticalHeaderItem(17);
    ___qtablewidgetitem77->setText(QCoreApplication::translate("MainWindow", "17", nullptr));
    QTableWidgetItem *___qtablewidgetitem78 = tableHistoryArray->verticalHeaderItem(18);
    ___qtablewidgetitem78->setText(QCoreApplication::translate("MainWindow", "18", nullptr));
    QTableWidgetItem *___qtablewidgetitem79 = tableHistoryArray->verticalHeaderItem(19);
    ___qtablewidgetitem79->setText(QCoreApplication::translate("MainWindow", "19", nullptr));
    QTableWidgetItem *___qtablewidgetitem80 = tableHistoryArray->verticalHeaderItem(20);
    ___qtablewidgetitem80->setText(QCoreApplication::translate("MainWindow", "20", nullptr));
    QTableWidgetItem *___qtablewidgetitem81 = tableHistoryArray->verticalHeaderItem(21);
    ___qtablewidgetitem81->setText(QCoreApplication::translate("MainWindow", "21", nullptr));
    QTableWidgetItem *___qtablewidgetitem82 = tableHistoryArray->verticalHeaderItem(22);
    ___qtablewidgetitem82->setText(QCoreApplication::translate("MainWindow", "22", nullptr));
    QTableWidgetItem *___qtablewidgetitem83 = tableHistoryArray->verticalHeaderItem(23);
    ___qtablewidgetitem83->setText(QCoreApplication::translate("MainWindow", "23", nullptr));
    QTableWidgetItem *___qtablewidgetitem84 = tableHistoryArray->verticalHeaderItem(24);
    ___qtablewidgetitem84->setText(QCoreApplication::translate("MainWindow", "24", nullptr));
    QTableWidgetItem *___qtablewidgetitem85 = tableHistoryArray->verticalHeaderItem(25);
    ___qtablewidgetitem85->setText(QCoreApplication::translate("MainWindow", "25", nullptr));
    QTableWidgetItem *___qtablewidgetitem86 = tableHistoryArray->verticalHeaderItem(26);
    ___qtablewidgetitem86->setText(QCoreApplication::translate("MainWindow", "26", nullptr));
    QTableWidgetItem *___qtablewidgetitem87 = tableHistoryArray->verticalHeaderItem(27);
    ___qtablewidgetitem87->setText(QCoreApplication::translate("MainWindow", "27", nullptr));
    QTableWidgetItem *___qtablewidgetitem88 = tableHistoryArray->verticalHeaderItem(28);
    ___qtablewidgetitem88->setText(QCoreApplication::translate("MainWindow", "28", nullptr));
    QTableWidgetItem *___qtablewidgetitem89 = tableHistoryArray->verticalHeaderItem(29);
    ___qtablewidgetitem89->setText(QCoreApplication::translate("MainWindow", "29", nullptr));
    QTableWidgetItem *___qtablewidgetitem90 = tableHistoryArray->verticalHeaderItem(30);
    ___qtablewidgetitem90->setText(QCoreApplication::translate("MainWindow", "30", nullptr));
    QTableWidgetItem *___qtablewidgetitem91 = tableHistoryArray->verticalHeaderItem(31);
    ___qtablewidgetitem91->setText(QCoreApplication::translate("MainWindow", "32", nullptr));
    QTableWidgetItem *___qtablewidgetitem92 = tableHistoryArray->verticalHeaderItem(32);
    ___qtablewidgetitem92->setText(QCoreApplication::translate("MainWindow", "3", nullptr));
    QTableWidgetItem *___qtablewidgetitem93 = tableHistoryArray->verticalHeaderItem(33);
    ___qtablewidgetitem93->setText(QCoreApplication::translate("MainWindow", "33", nullptr));
    QTableWidgetItem *___qtablewidgetitem94 = tableHistoryArray->verticalHeaderItem(34);
    ___qtablewidgetitem94->setText(QCoreApplication::translate("MainWindow", "34", nullptr));
    QTableWidgetItem *___qtablewidgetitem95 = tableHistoryArray->verticalHeaderItem(35);
    ___qtablewidgetitem95->setText(QCoreApplication::translate("MainWindow", "35", nullptr));
    QTableWidgetItem *___qtablewidgetitem96 = tableHistoryArray->verticalHeaderItem(36);
    ___qtablewidgetitem96->setText(QCoreApplication::translate("MainWindow", "36", nullptr));
    QTableWidgetItem *___qtablewidgetitem97 = tableHistoryArray->verticalHeaderItem(37);
    ___qtablewidgetitem97->setText(QCoreApplication::translate("MainWindow", "37", nullptr));
    QTableWidgetItem *___qtablewidgetitem98 = tableHistoryArray->verticalHeaderItem(38);
    ___qtablewidgetitem98->setText(QCoreApplication::translate("MainWindow", "38", nullptr));
    QTableWidgetItem *___qtablewidgetitem99 = tableHistoryArray->verticalHeaderItem(39);
    ___qtablewidgetitem99->setText(QCoreApplication::translate("MainWindow", "39", nullptr));
    QTableWidgetItem *___qtablewidgetitem100 = tableHistoryArray->verticalHeaderItem(40);
    ___qtablewidgetitem100->setText(QCoreApplication::translate("MainWindow", "40", nullptr));
    QTableWidgetItem *___qtablewidgetitem101 = tableHistoryArray->verticalHeaderItem(41);
    ___qtablewidgetitem101->setText(QCoreApplication::translate("MainWindow", "41", nullptr));
    QTableWidgetItem *___qtablewidgetitem102 = tableHistoryArray->verticalHeaderItem(42);
    ___qtablewidgetitem102->setText(QCoreApplication::translate("MainWindow", "42", nullptr));
    QTableWidgetItem *___qtablewidgetitem103 = tableHistoryArray->verticalHeaderItem(43);
    ___qtablewidgetitem103->setText(QCoreApplication::translate("MainWindow", "43", nullptr));
    QTableWidgetItem *___qtablewidgetitem104 = tableHistoryArray->verticalHeaderItem(44);
    ___qtablewidgetitem104->setText(QCoreApplication::translate("MainWindow", "44", nullptr));
    QTableWidgetItem *___qtablewidgetitem105 = tableHistoryArray->verticalHeaderItem(45);
    ___qtablewidgetitem105->setText(QCoreApplication::translate("MainWindow", "45", nullptr));
    QTableWidgetItem *___qtablewidgetitem106 = tableHistoryArray->verticalHeaderItem(46);
    ___qtablewidgetitem106->setText(QCoreApplication::translate("MainWindow", "46", nullptr));
    QTableWidgetItem *___qtablewidgetitem107 = tableHistoryArray->verticalHeaderItem(47);
    ___qtablewidgetitem107->setText(QCoreApplication::translate("MainWindow", "47", nullptr));
    QTableWidgetItem *___qtablewidgetitem108 = tableHistoryArray->verticalHeaderItem(48);
    ___qtablewidgetitem108->setText(QCoreApplication::translate("MainWindow", "49", nullptr));
    labelHistoryData->setText(QCoreApplication::translate("MainWindow", "\345\216\206\345\217\262\346\225\260\346\215\256", nullptr));
    qDebug()<<"retranslateUi"<<endl;
}
void ArrayWindow::createArrayWindow() {
    qDebug()<<"createArrayWindow"<<endl;
    this->show();
    qDebug()<<"createArrayWindow"<<endl;

}
void ArrayWindow::insert() {
    textEditAddData->setText("1");
    qDebug()<<"erswfsdga;oeurgfpwhglrrewrewrewrwerewrewrwerewrewrwerwerwerwerwerwerwerwerwerewrwerewwwerewwish"<<endl;
    textEditAddData->placeholderText().toInt();
    QString text = textEditAddData->placeholderText();
    QLabel *tableLabel[50][50];
    for(int i = 0;i<50;i++)
        for(int j =0;j<50;j++)
        {
            tableLabel[i][j]  = new QLabel(tableHistoryArray);
        }
    for(int i = 0;i<50;i++){
        for(int j = 0;j<50;j++){
            tableHistoryArray->setCellWidget(i,j,tableLabel[i][j]);
            tableLabel[i][j]->setText("fadfks;lgfjklsdg");
        }
        tableCurrentArray->setItem(i,0,new QTableWidgetItem("dsfasdf"));
    }
}
/*
void ArrayWindow::find() {
   // L.ArrayFind(textEditSearchButton->placeholderText().toInt());

}

void ArrayWindow::sava() {
    //L.ArrayShow();
}

void ArrayWindow::reserve() {
}

void ArrayWindow::Delete(){

}*/

ArrayWindow::ArrayWindow(QWidget *parent):
QWidget(parent),
pAddDataButton(new QPushButton(this)),
textEditDeleteButton(new QTextEdit(this))
{
    this->resize(800, 600);
    this->setFixedSize(800,600);
    //this->ratioWidget->SetRatio(800,600);
   // this->resizeEvent(e);

    pAddDataButton->setText("添加");
    pAddDataButton->setGeometry(10,10,140,40);
    pAddDataButton->setObjectName(QString::fromUtf8("pAddDataButton"));


    pDeleteDataButton = new QPushButton(this);
    pDeleteDataButton->setText("删除");
    pDeleteDataButton->setGeometry(170,10,140,40);
    pDeleteDataButton->setObjectName(QString::fromUtf8("pDeleteDataButton"));


    pSearchDataButton = new QPushButton(this);
    pSearchDataButton->setGeometry(350,10,140,40);
    pSearchDataButton->setText("查找");
    pSearchDataButton->setObjectName(QString::fromUtf8("pSearchDataButton"));


    textEditAddData = new QTextEdit(this);
    textEditAddData->setObjectName(QString::fromUtf8("textEditAddData"));
    textEditAddData->setGeometry(QRect(10, 50, 70, 31));
    textEditAddPositon = new QTextEdit(this);
    textEditAddPositon->setObjectName(QString::fromUtf8("textEditAddPositon"));
    textEditAddPositon->setGeometry(85,50,70,31);
    textEditDeleteButton->setObjectName(QString::fromUtf8("textEditDeleteButton"));
    textEditDeleteButton->setGeometry(QRect(170, 50, 140, 31));
    textEditSearchButton = new QTextEdit(this);
    textEditSearchButton->setObjectName(QString::fromUtf8("textEditSearchButton"));
    textEditSearchButton->setGeometry(QRect(350, 50, 140, 31));
    pSavaDataButton = new QPushButton(this);
    pSavaDataButton->setObjectName(QString::fromUtf8("pSavaDataButton"));
    pSavaDataButton->setGeometry(QRect(672, 30 ,140, 60));
    pSavaDataButton->setText("保存");
    textSearchReturn = new QTextEdit(this);
    textSearchReturn->setObjectName(QString::fromUtf8("textSearchReturn"));
    textSearchReturn->setGeometry(QRect(500, 50, 161, 31));
    tableCurrentArray = new QTableWidget(this);
    if (tableCurrentArray->columnCount() < 1)
        tableCurrentArray->setColumnCount(1);
    QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
    tableCurrentArray->setHorizontalHeaderItem(0, __qtablewidgetitem);
    if (tableCurrentArray->rowCount() < 49)
        tableCurrentArray->setRowCount(49);
    QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(0, __qtablewidgetitem1);
    QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(1, __qtablewidgetitem2);
    QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(2, __qtablewidgetitem3);
    QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(3, __qtablewidgetitem4);
    QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(4, __qtablewidgetitem5);
    QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(5, __qtablewidgetitem6);
    QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(6, __qtablewidgetitem7);
    QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(7, __qtablewidgetitem8);
    QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(8, __qtablewidgetitem9);
    QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(9, __qtablewidgetitem10);
    QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(10, __qtablewidgetitem11);
    QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(11, __qtablewidgetitem12);
    QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(12, __qtablewidgetitem13);
    QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(13, __qtablewidgetitem14);
    QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(14, __qtablewidgetitem15);
    QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(15, __qtablewidgetitem16);
    QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(16, __qtablewidgetitem17);
    QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(17, __qtablewidgetitem18);
    QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(18, __qtablewidgetitem19);
    QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(19, __qtablewidgetitem20);
    QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(20, __qtablewidgetitem21);
    QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(21, __qtablewidgetitem22);
    QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(22, __qtablewidgetitem23);
    QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(23, __qtablewidgetitem24);
    QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(24, __qtablewidgetitem25);
    QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(25, __qtablewidgetitem26);
    QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(26, __qtablewidgetitem27);
    QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(27, __qtablewidgetitem28);
    QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(28, __qtablewidgetitem29);
    QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(29, __qtablewidgetitem30);
    QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(30, __qtablewidgetitem31);
    QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(31, __qtablewidgetitem32);
    QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(32, __qtablewidgetitem33);
    QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(33, __qtablewidgetitem34);
    QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(34, __qtablewidgetitem35);
    QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(35, __qtablewidgetitem36);
    QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(36, __qtablewidgetitem37);
    QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(37, __qtablewidgetitem38);
    QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(38, __qtablewidgetitem39);
    QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(39, __qtablewidgetitem40);
    QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(40, __qtablewidgetitem41);
    QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(41, __qtablewidgetitem42);
    QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(42, __qtablewidgetitem43);
    QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(43, __qtablewidgetitem44);
    QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(44, __qtablewidgetitem45);
    QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(45, __qtablewidgetitem46);
    QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(46, __qtablewidgetitem47);
    QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(47, __qtablewidgetitem48);
    QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
    tableCurrentArray->setVerticalHeaderItem(48, __qtablewidgetitem49);
    tableCurrentArray->setObjectName(QString::fromUtf8("tableCurrentArray"));
    tableCurrentArray->setGeometry(QRect(10, 100, 141, 491));
    tableHistoryArray = new QTableWidget(this);
    if (tableHistoryArray->columnCount() < 10)
        tableHistoryArray->setColumnCount(10);
    QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(0, __qtablewidgetitem50);
    QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(1, __qtablewidgetitem51);
    QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(2, __qtablewidgetitem52);
    QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(3, __qtablewidgetitem53);
    QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(4, __qtablewidgetitem54);
    QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(5, __qtablewidgetitem55);
    QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(6, __qtablewidgetitem56);
    QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(7, __qtablewidgetitem57);
    QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(8, __qtablewidgetitem58);
    QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
    tableHistoryArray->setHorizontalHeaderItem(9, __qtablewidgetitem59);
    if (tableHistoryArray->rowCount() < 49)
        tableHistoryArray->setRowCount(49);
    QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(0, __qtablewidgetitem60);
    QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(1, __qtablewidgetitem61);
    QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(2, __qtablewidgetitem62);
    QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(3, __qtablewidgetitem63);
    QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(4, __qtablewidgetitem64);
    QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(5, __qtablewidgetitem65);
    QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(6, __qtablewidgetitem66);
    QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(7, __qtablewidgetitem67);
    QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(8, __qtablewidgetitem68);
    QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(9, __qtablewidgetitem69);
    QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(10, __qtablewidgetitem70);
    QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(11, __qtablewidgetitem71);
    QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(12, __qtablewidgetitem72);
    QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(13, __qtablewidgetitem73);
    QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(14, __qtablewidgetitem74);
    QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(15, __qtablewidgetitem75);
    QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(16, __qtablewidgetitem76);
    QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(17, __qtablewidgetitem77);
    QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(18, __qtablewidgetitem78);
    QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(19, __qtablewidgetitem79);
    QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(20, __qtablewidgetitem80);
    QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(21, __qtablewidgetitem81);
    QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(22, __qtablewidgetitem82);
    QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(23, __qtablewidgetitem83);
    QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(24, __qtablewidgetitem84);
    QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(25, __qtablewidgetitem85);
    QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(26, __qtablewidgetitem86);
    QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(27, __qtablewidgetitem87);
    QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(28, __qtablewidgetitem88);
    QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(29, __qtablewidgetitem89);
    QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(30, __qtablewidgetitem90);
    QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(31, __qtablewidgetitem91);
    QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(32, __qtablewidgetitem92);
    QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(33, __qtablewidgetitem93);
    QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(34, __qtablewidgetitem94);
    QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(35, __qtablewidgetitem95);
    QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(36, __qtablewidgetitem96);
    QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(37, __qtablewidgetitem97);
    QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(38, __qtablewidgetitem98);
    QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(39, __qtablewidgetitem99);
    QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(40, __qtablewidgetitem100);
    QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(41, __qtablewidgetitem101);
    QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(42, __qtablewidgetitem102);
    QTableWidgetItem *__qtablewidgetitem103 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(43, __qtablewidgetitem103);
    QTableWidgetItem *__qtablewidgetitem104 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(44, __qtablewidgetitem104);
    QTableWidgetItem *__qtablewidgetitem105 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(45, __qtablewidgetitem105);
    QTableWidgetItem *__qtablewidgetitem106 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(46, __qtablewidgetitem106);
    QTableWidgetItem *__qtablewidgetitem107 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(47, __qtablewidgetitem107);
    QTableWidgetItem *__qtablewidgetitem108 = new QTableWidgetItem();
    tableHistoryArray->setVerticalHeaderItem(48, __qtablewidgetitem108);
    tableHistoryArray->setObjectName(QString::fromUtf8("tableHistoryArray"));
    tableHistoryArray->setGeometry(QRect(150, 140, 631, 451));
    labelHistoryData = new QLabel(this);
    labelHistoryData->setObjectName(QString::fromUtf8("labelHistoryData"));
    labelHistoryData->setGeometry(QRect(160, 100, 251, 31));
    QFont font;
    font.setPointSize(15);
    font.setBold(true);
    font.setWeight(75);
    labelHistoryData->setFont(font);
    labelHistoryData->setAlignment(Qt::AlignCenter);

    qDebug()<<"setupUi"<<endl;
    qDebug()<<"testewrfwevfaege"<<endl;
    connect(this->pAddDataButton, SIGNAL(clicked()),this, SLOT(insert()));
    qDebug()<<"connect(this->pAddDataButton, SIGNAL(click()),this->tex, SLOT(insert()));"<<endl;
}
// retranslateUi





