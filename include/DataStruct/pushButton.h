//
// Created by 赵德金 on 2021/8/6.
//
#ifndef QDATA_PUSHBUTTON_H
#define QDATA_PUSHBUTTON_H
#include <QPushButton>

class pushButton:public QPushButton{
public:
    pushButton(const QString& TitleName,const int& x,const int& y,const int& Width,const int& Height);
    void pushArrayButton(const int& buttonNumbers);
    ~pushButton();

private:
    QString titleName;
    const int x_;
    const int y_;
    const int width_;
    const int height_;
};

#endif //QDATA_PUSHBUTTON_H
