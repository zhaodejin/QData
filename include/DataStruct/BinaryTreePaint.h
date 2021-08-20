#ifndef BINARY_TREE_PAINT_H
#define BINARY_TREE_PAINT_H
#include <QPaintEvent>
#include <QPainter>
#include <QWidget>
#include "DataStruct/BinTreeNode.h"
class BinaryTreePaint:public QWidget{
    Q_OBJECT
public:
    explicit BinaryTreePaint(QWidget *parent=NULL);
    bool SetInput(QString input1,QString input2);
protected:
    void paintEvent(QPaintEvent *);
    void draw(BinTreeNode *node,int x,int y,int angle,bool isLeft,int depth,QPainter *painter);
    BinTreeNode *test();
private: //
    BinaryTree* myTree;
    const int rootLength = 160;
    const double PI = 3.14159265;
  
};
#endif //BINARYTREE_PAINT_H