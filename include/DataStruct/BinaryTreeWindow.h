#ifndef BINARY_TREE_Windows_H
#define BINARY_TREE_Windows_H
#include <QWidget>
#include <QPushButton>
#include <QLineEdit>
class BinaryTreeWindow:public QWidget {
    Q_OBJECT
public: 
    explicit BinaryTreeWindow(QWidget *parent=0);
    ~BinaryTreeWindow();
public slots:
    void on_btnCreate_clicked();
    void on_btnClear_clicked();
    void createBinaryTreeWindow();
private:
    BinaryTreeWindow *binaryTreeWindow;
    QPushButton *btnCreate;
    QPushButton *btnClear;
    QLineEdit *text_edit_input1;
    QLineEdit *text_edit_input2;
};
#endif //BINARY_TREE_WINDOW_H