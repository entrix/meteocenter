#include "newidget.h"

NeWidget::NeWidget(QWidget *parent) :
    QWidget(parent)
{
}

QTableWidget *NeWidget::getTableWidget()
{
    return tw;
}

void NeWidget::setTableWidget(QTableWidget *tw)
{
        this->tw = tw;
}

void NeWidget::resizeEvent(QResizeEvent *event)
{
    QSize newSize = event->size();
    QSize oldSize = event->oldSize();
    int diffY = abs(newSize.height() - oldSize.height());
    int diffX = abs(newSize.width() - oldSize.width());

    cout << "deltaX = " << diffX << " deltaY = " << diffY << endl;
}
