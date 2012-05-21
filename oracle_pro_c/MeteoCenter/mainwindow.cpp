#include "mainwindow.h"
#include "ui_meteoMainWindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    //oracle section
    cout << "oracle open" << endl;
    spc::open();
    ui->setupUi(this);
}

void MainWindow::setTableManager(TableManager *tm)
{
    this->tm = tm;
    tm->setTableWidget(ui->tableWidget);
   // QObject::connect(ui->pushButton_1, SIGNAL(clicked()), SLOT(buttonReceiver()));
    //QObject::connect(ui->pushButton_2, SIGNAL(clicked()), SLOT(buttonReceiver()));
    //print data to the TableWidget
    QObject::connect(ui->pushButton_3, SIGNAL(clicked()), SLOT(buttonReceiver()));
    QObject::connect(ui->pushButton_4, SIGNAL(clicked()), SLOT(buttonReceiver()));
    QObject::connect(ui->pushButton_5, SIGNAL(clicked()), SLOT(buttonReceiver()));
    QObject::connect(ui->pushButton_6, SIGNAL(clicked()), SLOT(buttonReceiver()));
    QObject::connect(ui->pushButton_7, SIGNAL(clicked()), SLOT(buttonReceiver()));
    QObject::connect(ui->pushButton_8, SIGNAL(clicked()), SLOT(buttonReceiver()));
    QObject::connect(ui->pushButton_9, SIGNAL(clicked()), SLOT(buttonReceiver()));
    //QObject::connect(ui->pushButton_10, SIGNAL(clicked()), SLOT(buttonReceiver()));
    //transition node
    QObject::connect(this, SIGNAL(sendButtonIndex(int)), tm, SLOT(setIndex(int)));
    //close signal
    QObject::connect(this, SIGNAL(cl()), tm, SLOT(setClose()));
    //resize MainWindow
    //QObject::connect(ui->centralwidget, SIGNAL())
}

MainWindow::~MainWindow()
{
    //oracle section
    spc::close();

    sendCl();
    delete ui;
}

void MainWindow::sendCl()
{
    emit cl();
}

void MainWindow::close()
{
    sendCl();
}

void MainWindow::buttonReceiver()
{
    int recv = 0;
    QString str = sender()->objectName();
    QRegExp rxlen("\\w+\\_(\\d+)");
    int pos = rxlen.indexIn(str);
    if (pos > -1) {
         recv = rxlen.cap(1).toInt();
    }

    cout << "receive index = " << recv << endl;

    emit sendButtonIndex(recv);
}
