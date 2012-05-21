#include <QtGui/QApplication>
#include "form.h"
#include "form1.h"
#include "mainwindow.h"
#include <iostream>
#include <wind.h>
#include <windDao.h>
#include "tablemanager.h"

namespace spc {
  int sub_main();
  int open();
  int close();
}

using namespace nwd;

using namespace std;

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow *w = new MainWindow();
    TableManager *tm = new TableManager();
    //Form f(9);
    //w->setForm(&f);
    //f.move(100, 100);
    w->setTableManager(tm);
    w->move(500, 300);
    w->show();

    return a.exec();
}
