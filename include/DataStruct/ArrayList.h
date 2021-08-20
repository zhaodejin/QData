//
// Created by 赵德金 on 2021/8/8.
//

#ifndef QDATA_ARRAYLIST_H
#define QDATA_ARRAYLIST_H
#include <iostream>
#include <QDebug>
template <typename T>
class ArrayList: public QObject{
protected:
    static const int MAXSIZE;
    T *data;
    T length;
public:
    ArrayList();
    ArrayList(const int n);
    void ArrayInsert(const int&,const T&);
    void ArrayErase(const int&);
    T& ArrayGetItem(const int &) const;
    T& ArrayFind(const T&) const;
    void ArrayShow() const;
    ~ArrayList();
};

#endif //QDATA_ARRAYLIST_H
