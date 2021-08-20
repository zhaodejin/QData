//
// Created by 赵德金 on 2021/8/6.
//

#include "DataStruct/pushButton.h"
#include <QPushButton>

pushButton::pushButton(const QString &TitleName, const int &x, const int &y, const int &Width, const int &Height)
:titleName(TitleName),
x_(x),
y_(y),
width_(Width),
height_(Height)
{
    this->setWindowTitle(TitleName);
    this->setGeometry(x,y,Width,Height);
    this->show();
}
pushButton::~pushButton(){

}


void pushButton::pushArrayButton(const int& buttonNumbers) {
    pushButton *buttonGroup[buttonNumbers];
    for(int i = 0;i<buttonNumbers;i++)
    {
        buttonGroup[i] = new pushButton(QString::number(i,10),10+i*10,10+i*10,40,30);
    }
}