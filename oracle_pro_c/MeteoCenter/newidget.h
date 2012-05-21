#ifndef NEWIDGET_H
#define NEWIDGET_H

#include <QtGui>
#include "cmath"
#include <iostream>

using namespace std;

class NeWidget : public QWidget
{
    Q_OBJECT
public:
    explicit NeWidget(QWidget *parent = 0);
    QTableWidget *getTableWidget();
    void setTableWidget(QTableWidget *tw);
protected:
    //void mousePressEvent(QMouseEvent *event);
    //void mouseMoveEvent(QMouseEvent *event);
    //void mouseReleaseEvent(QMouseEvent *event);
    //void paintEvent(QPaintEvent *event);
    void resizeEvent(QResizeEvent *event);
private:
    QTableWidget *tw;
signals:
    
public slots:
    
};

#endif // NEWIDGET_H
