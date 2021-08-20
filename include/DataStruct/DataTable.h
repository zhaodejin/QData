//
// Created by 赵德金 on 2021/8/6.
//

#ifndef QDATA_DATATABLE_H
#define QDATA_DATATABLE_H
#include <QTableWidget>

class DataTable :public QTableWidget{
    DataTable();
    void createTable();
    void modifyTable(const int& row,const int& col);
    ~DataTable() override;


};


#endif //QDATA_DATATABLE_H
