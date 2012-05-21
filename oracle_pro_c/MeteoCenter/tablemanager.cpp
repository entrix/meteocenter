#include "tablemanager.h"

TableManager::TableManager()
{
}

TableManager::TableManager(int index, QTableWidget *tw)
{
    this->tw = tw;
    setIndex(index);
    repaint();
}


QTableWidget *TableManager::getTableWidget()
{
    return tw;
}

void TableManager::setTableWidget(QTableWidget *tw)
{
    this->tw = tw;
    //setIndex(index);
    //repaint();
}

void TableManager::setIndex(int index)
{
    rowNum = 100;
    //cout << "index here " << index << endl;
    this->index = index;
    lst.clear();

    switch(index) {
    case 0:
        //rsmc
        colNum = 3;
        lst << "rsmc_id" << "rsmc_name" << "rsmc_type";
        break;
    case 1:
        //station_delegation
        colNum = 3;
        lst << "delegation_id" << "rsmc_id" << "point_id";
        break;
    case 2:
        //staion_point
        colNum = 4;
        lst << "point_id" << "latitude" << "longitude" << "sea_hight";
        break;
    case 3:
        //humidity
        colNum = 7;
        lst << "humidity_id" << "point_id" << "datetime" << "prediction"
            << "absolute"    << "relative" << "specific";
        break;
    case 4:
        //precipitation
        colNum = 7;
        lst << "precipitation_id" << "type"     << "point_id" << "datetime"
            << "prediction"       << "quantity" << "frequency";
        break;
    case 5:
        //pressure
        colNum = 5;
        lst << "pressure_id" << "point_id" << "datetime" << "prediction"
            << "value";
        break;
    case 6:
        //raw_param
        colNum = 5;
        lst << "raw_param_id" << "point_id" << "datetime" << "prediction"
            << "vorticity_advection";
        break;
    case 7:
        //temperature
        colNum = 6;
        lst << "temperature_id" << "point_id" << "type" << "datetime"
            << "prediction"  << "value";
        break;
    case 8:
        //tropopause
        colNum = 7;
        lst << "tropopause_id" << "point_id"  << "datetime" << "prediction"
            << "height"        << "thickness" << "vertical_wind_shear";
        break;
    case 9:
        //wind
        colNum = 7;
        lst << "wind_id" << "point_id" << "type" << "datetime"
            << "prediction" << "course" << "force";

    {
        //orace section
        windDao *wnd = new windDao();
        ull indices[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9 };
        wind *wns = wnd->findById(indices, 10);

        data = (void*) wns;
        sizeData = 10;

        for (int i = 0; i < 10; ++i)
            cout << ">>>> wind force: " << wns[i].getForce() << endl;
    }
        break;
    default:
        //for other
        colNum = 3;
        rowNum = 1;
        lst << "I donn't known" << "What it is" << " *crub* ";
        break;
    }

    repaint();
}

void TableManager::repaint()
{
    //tw = new QTableWidget(rowNum, colNum);
    tw->clear();
    //cout << "It's here!" << rowNum << " " << colNum << endl;
    tw->setRowCount(rowNum);
    tw->setColumnCount(colNum);

    cout << "index: " << index;
    switch(index) {
    case 9:
        //wind
    {
        wind *wns = (wind*) data;
        for (int i = 0; i < sizeData; ++i) {
            tw->setItem(i, 0, new QTableWidgetItem(QString::number(wns[i].getId())));
            tw->setItem(i, 1, new QTableWidgetItem(QString::number(wns[i].getPointId())));
            tw->setItem(i, 2, new QTableWidgetItem(QString::number(wns[i].getType())));
            tw->setItem(i, 3, new QTableWidgetItem(wns[i].getDateTime()));
            tw->setItem(i, 4, new QTableWidgetItem(QString::number(wns[i].getPrediction())));
            tw->setItem(i, 5, new QTableWidgetItem(QString::number(wns[i].getCourse())));
            tw->setItem(i, 6, new QTableWidgetItem(QString::number(wns[i].getForce())));
            //cout << wns[i].getForce() << endl;
        }
    }
        break;
    default:
        break;
    }

    tw->setHorizontalHeaderLabels(lst);
    tw->verticalHeader()->hide();
//    tw->clearSelection();
//    tw->adjustSize();
    //tw->resize(107 * colNum, 300);
    //this->resize(107 * colNum, 300);
    //this->setVisible(true);
}

void TableManager::setClose()
{
    //this->~TableManager();
}

//void TableManager::setClose()
//{
//    this->destroy();
//}
