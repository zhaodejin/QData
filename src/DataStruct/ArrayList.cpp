//
// Created by 赵德金 on 2021/8/8.
//

#include "DataStruct/ArrayList.h"

template <typename T> const int ArrayList<T>::MAXSIZE = 50;

template<typename T>
ArrayList<T>::ArrayList(){
    data = new T[MAXSIZE]{0};
    if(data == NULL)
    {
        qDebug()<<"memory malloc is failed!"<<endl;
    }
    length = 0;
    qDebug()<<"successful to create a liner sheet"<<endl;
}
template <typename T>
ArrayList<T>::ArrayList(const int n) {
    data = new T[MAXSIZE]{0};
    if (data == NULL) {
        qDebug()<< "memory malloc is failed!" << endl;
    }
    for (int i = 0; i < n; i++)
        std::cin<<data[i];
    length = n;
}
template <typename T>
void ArrayList<T>::ArrayInsert(const int& i, const T& temp)  //在线性表的指定位置插入一个元素
{
    if (length == MAXSIZE)
    {
        qDebug() << "超过线性表的最大长度！指定位置插入元素失败！" << endl;
        return;
    }
    if (i < 1 || i > length + 1)
    {
        qDebug() << "位置越界！无法在指定位置插入元素！" << endl;
        return;
    }
    for (int k = length - 1; k >= i - 1; k--)
    {
        data[k + 1] = data[k];
    }
    data[i - 1] = temp;
    length++;
    return;
}

template <typename T>
void ArrayList<T>::ArrayErase(const int& i)  //在线性表的指定位置删除一个元素
{
    if (i < 1 || i > length)
    {
        qDebug() << "位置越界！无法在指定位置删除元素！" << endl;
        return;
    }
    for (int j = i; j <= length - 1; j++)
        data[j - 1] = data[j];
    length--;
    return;
}

template <typename T>
T& ArrayList<T>::ArrayGetItem(const int& i)const  //返回指定位置所对应的元素
{
    if (i < 1 || i > length)
    {
        qDebug() << "位置越界！返回第一个元素！" << endl;
        return data[0];
    }
    return data[i - 1];
}

template <typename T>
T& ArrayList<T>::ArrayFind(const T &num)const  //查找指定元素对应的位置
{
    for(int i = 0; i < length; i++)
    {
        if(data[i] == num)
            return data[i];
    }
    qDebug() << "未找到元素！返回第一个元素！" << endl;
    return data[0];
}

template <typename T>
void ArrayList<T>::ArrayShow()const
{
    if(length == 0)
    {
        qDebug() << "没有元素！" << endl;
        return ;
    }
    for(int i = 0; i < length; i++)
        qDebug()<< data [i] << ' ';
    qDebug() << endl;
}
template <typename T>
ArrayList<T>::~ArrayList(){

}