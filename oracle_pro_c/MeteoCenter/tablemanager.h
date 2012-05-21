#ifndef TABLEMANAGER_H
#define TABLEMANAGER_H

#include <QtGui>
#include <rsmc.h>
#include <rsmcDao.h>
#include <wind.h>
#include <windDao.h>
#include <iostream>
//#include "mainwindow.h"

namespace spc {
  int sub_main();
  int open();
  int close();
}

namespace Ui {
class MainWindow;
}

using namespace nwd;

using namespace std;

class TableManager : public QObject
{
    Q_OBJECT

public:
    TableManager();
    explicit TableManager(int index, QTableWidget *tw);
    //~TableManager();
    void setTableWidget(QTableWidget *tw);
    QTableWidget *getTableWidget();
private slots:
    void setIndex(int index);
    void repaint();
    void setClose();
private:
    int colNum;
    int rowNum;
    int index;
    void *data;
    int sizeData;
    QStringList lst;
    QTableWidget *tw;
    Ui::MainWindow *ui;
};

#endif // TABLEMANAGER_H
