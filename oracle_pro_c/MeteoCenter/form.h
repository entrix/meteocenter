#ifndef FORM_H
#define FORM_H

#include <QtGui>
#include <wind.h>
#include <windDao.h>
#include <iostream>

namespace spc {
  int sub_main();
  int open();
  int close();
}

using namespace nwd;

using namespace std;

class Form : public QWidget
{
    Q_OBJECT
    
public:
    explicit Form(QWidget *parent = 0);
    explicit Form(int index, QWidget *parent = 0);
    ~Form();
    
public slots:
    void setClose();

private slots:
    void setIndex(int index);
    void repaint();

private:
    int colNum;
    int rowNum;
    int index;
    void *data;
    int sizeData;
    QStringList lst;
    QTableWidget *tw;
};

#endif // FORM_H
