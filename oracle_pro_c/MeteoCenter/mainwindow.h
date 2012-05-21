#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <wind.h>
#include <windDao.h>
#include <iostream>
#include "tablemanager.h"

namespace spc {
  int sub_main();
  int open();
  int close();
}

using namespace nwd;

using namespace std;

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    void setTableManager(TableManager *tm);
    ~MainWindow();
    
private:
    Ui::MainWindow *ui;
    TableManager *tm;

    void sendCl();

protected:
    void close();

public slots:
    void buttonReceiver();

signals:
    void cl();
    void sendButtonIndex(int);
};

#endif // MAINWINDOW_H
