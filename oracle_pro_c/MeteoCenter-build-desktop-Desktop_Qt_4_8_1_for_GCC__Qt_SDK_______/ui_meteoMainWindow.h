/********************************************************************************
** Form generated from reading UI file 'meteoMainWindow.ui'
**
** Created: Sat May 19 23:51:59 2012
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_METEOMAINWINDOW_H
#define UI_METEOMAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui>
#include <QRegExp>
#include "tablemanager.h"
#include "newidget.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
    //Q_OBJECT

public:
    QAction *actionPlot;
    NeWidget *centralwidget;
    QTableWidget *tableWidget;
    QPushButton *pushButton;
    QGroupBox *dsd;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QLabel *label_3;
    QGroupBox *groupBox;
    QLabel *label_4;
    QGroupBox *groupBox_2;
    QComboBox *comboBox_2;
    QGroupBox *groupBox_3;
    QComboBox *comboBox_3;
    QGroupBox *groupBox_4;
    QComboBox *comboBox_4;
    QGroupBox *groupBox_5;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *pushButton_11;
    QTextBrowser *textBrowser;
    //QLabel *label;
    QStatusBar *statusbar;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QSpacerItem *horizontalSpacer;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(906, 482);
        actionPlot = new QAction(MainWindow);
        actionPlot->setObjectName(QString::fromUtf8("actionPlot"));
        //actionPlot->viewport()->setProperty("click", QVariant(QCursor(Qt::ArrowCursor)));
        centralwidget = new NeWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tableWidget = new QTableWidget(gridLayoutWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(350, 30, 541, 301));
        centralwidget->setTableWidget(tableWidget);
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(350, 340, 151, 31));
        pushButton->setFixedSize(QSize(151, 31));
        dsd = new QGroupBox(gridLayoutWidget);
        dsd->setObjectName(QString::fromUtf8("dsd"));
        dsd->setGeometry(QRect(10, 30, 151, 351));
        dsd->setMinimumSize(QSize(151, 351));
        dsd->setFixedWidth(151);
        dsd->setStyleSheet(QString::fromUtf8("button {\n"
"qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255))\n"
"}"));
        pushButton_5 = new QPushButton(dsd);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(10, 60, 131, 31));
        pushButton_4 = new QPushButton(dsd);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(10, 140, 131, 31));
        pushButton_6 = new QPushButton(dsd);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(10, 180, 131, 31));
        pushButton_6->setStyleSheet(QString::fromUtf8("button {\n"
"qconicalgradient(cx:0.5, cy:0.5, angle:0, stop:0 rgba(35, 40, 3, 255), stop:0.16 rgba(136, 106, 22, 255), stop:0.225 rgba(166, 140, 41, 255), stop:0.285 rgba(204, 181, 74, 255), stop:0.345 rgba(235, 219, 102, 255), stop:0.415 rgba(245, 236, 112, 255), stop:0.52 rgba(209, 190, 76, 255), stop:0.57 rgba(187, 156, 51, 255), stop:0.635 rgba(168, 142, 42, 255), stop:0.695 rgba(202, 174, 68, 255), stop:0.75 rgba(218, 202, 86, 255), stop:0.815 rgba(208, 187, 73, 255), stop:0.88 rgba(187, 156, 51, 255), stop:0.935 rgba(137, 108, 26, 255), stop:1 rgba(35, 40, 3, 255))\n"
"}"));
        pushButton_7 = new QPushButton(dsd);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(10, 220, 131, 31));
        pushButton_8 = new QPushButton(dsd);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(10, 260, 131, 31));
        label_3 = new QLabel(dsd);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 10, 131, 41));
        pushButton_3 = new QPushButton(dsd);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(10, 100, 131, 31));
        pushButton_9 = new QPushButton(dsd);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(10, 300, 131, 31));
        pushButton_8->raise();
        pushButton_6->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_4->raise();
        label_3->raise();
        pushButton_5->raise();
        pushButton_9->raise();
        groupBox = new QGroupBox(gridLayoutWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(170, 30, 151, 351));
        groupBox->setMinimumSize(QSize(151, 351));
        groupBox->setFixedWidth(151);
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 10, 131, 21));
        groupBox_2 = new QGroupBox(groupBox);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(0, 40, 151, 61));
        comboBox_2 = new QComboBox(groupBox_2);
        comboBox_2->setObjectName(QString::fromUtf8("comboBox_2"));
        comboBox_2->setGeometry(QRect(10, 20, 131, 31));
        groupBox_3 = new QGroupBox(groupBox);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        groupBox_3->setGeometry(QRect(0, 120, 151, 61));
        comboBox_3 = new QComboBox(groupBox_3);
        comboBox_3->setObjectName(QString::fromUtf8("comboBox_3"));
        comboBox_3->setGeometry(QRect(10, 20, 131, 31));
        groupBox_4 = new QGroupBox(groupBox);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        groupBox_4->setGeometry(QRect(0, 200, 151, 61));
        comboBox_4 = new QComboBox(groupBox_4);
        comboBox_4->setObjectName(QString::fromUtf8("comboBox_4"));
        comboBox_4->setGeometry(QRect(10, 20, 131, 31));
        groupBox_5 = new QGroupBox(groupBox);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        groupBox_5->setGeometry(QRect(0, 280, 151, 61));
        dateTimeEdit = new QDateTimeEdit(groupBox_5);
        dateTimeEdit->setObjectName(QString::fromUtf8("dateTimeEdit"));
        dateTimeEdit->setGeometry(QRect(10, 20, 131, 31));
        pushButton_11 = new QPushButton(centralwidget);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(750, 340, 139, 31));
        pushButton_11->setFixedSize(QSize(139, 31));
        textBrowser = new QTextBrowser(gridLayoutWidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(10, 380, 881, 71));
        textBrowser->setFixedHeight(71);
//        label = new QLabel(centralwidget);
//        label->setObjectName(QString::fromUtf8("label"));
//        label->setGeometry(QRect(580, 340, 62, 15));
        MainWindow->setCentralWidget(centralwidget);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        //QList<QGroupBox> grlst = new QList()<QGroupBox>();
        //QHBoxLayout *bxl1 = new QHBoxLayout (centralwidget);
        //bxl1->addWidget(dsd);
        //bxl1->addWidget(groupBox);
        //QHBoxLayout *bxl2 = new QHBoxLayout (centralwidget);
        //bxl2->addWidget(tableWidget);
//        QGridLayout *grd = new QGridLayout(centralwidget);
//        grd->addWidget(dsd, 0, 0);
//        grd->addWidget(groupBox, 0, 1);
//        grd->addWidget(tableWidget, 0, 3);

        gridLayoutWidget = new QWidget(centralwidget);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(20, 10, 791, 231));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(10, 10, 10, 0);
        //tableWidget = new QTableWidget(gridLayoutWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));

        gridLayout->addWidget(tableWidget, 0, 2, 1, 3);

        //dsd = new QGroupBox(gridLayoutWidget);

        gridLayout->addWidget(dsd, 0, 0, 1, 1);

        //groupBox = new QGroupBox(gridLayoutWidget);

        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

        //textBrowser = new QTextBrowser(gridLayoutWidget);
        //gridLayout->addWidget(textBrowser, 1, 0, 1, 1);

        //horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(new QSpacerItem(80, 20, QSizePolicy::Expanding, QSizePolicy::Minimum), 1, 0, 1, 2);
        gridLayout->addItem(new QSpacerItem(40, 20), 1, 3, 1, 1);
        gridLayout->addWidget(pushButton, 1, 2, 1, 1);
        gridLayout->addWidget(pushButton_11, 1, 4, 1, 1);

        gridLayout->addWidget(textBrowser, 2, 0, 1, 5);
        centralwidget->setLayout(gridLayout);
        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);


        //QTableWidget *tw = tableWidget;

        //tw->clear();
        //tw->setRowCount(1);
        //tw->setColumnCount(3);

        //tw->setItem(0, 0, new QTableWidgetItem("1"));
        //tw->setItem(1, 2, new QTableWidgetItem("2"));
        //tw->setItem(1, 3, new QTableWidgetItem("3"));

        //tw->horizontalHeader()->hide();
        //tw->verticalHeader()->hide();
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Метео Центр", 0, QApplication::UnicodeUTF8));
        actionPlot->setText(QApplication::translate("MainWindow", "plot", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\320\223\321\200\320\260\321\204\320\270\320\272", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        dsd->setToolTip(QApplication::translate("MainWindow", "\321\213\321\201\321\213\320\262\320\260", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_WHATSTHIS
        dsd->setWhatsThis(QApplication::translate("MainWindow", "\321\213\321\217\320\262\321\217", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_WHATSTHIS
        dsd->setTitle(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\262\320\273\320\265\320\275\320\270\320\265", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_4->setToolTip(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"></p></body></html>", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_4->setText(QApplication::translate("MainWindow", "\320\236\321\201\320\260\320\264\320\272\320\270", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        pushButton_6->setToolTip(QApplication::translate("MainWindow", "ffffffffffffff", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        pushButton_6->setText(QApplication::translate("MainWindow", "\320\241\321\213\321\200\321\213\320\265 \320\264\320\260\320\275\320\275\321\213\320\265", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "\320\242\320\265\320\274\320\277\320\265\321\200\320\260\321\202\321\203\321\200\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "\320\242\321\200\320\276\320\277\320\276\320\277\320\260\321\203\320\267\320\260", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\237\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213</p>\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\241\321\202\320\260\320\275\321\206\320\270\320\270</p></body></html>", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "\320\222\320\273\320\260\320\266\320\275\320\276\321\201\321\202\321\214", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "\320\222\320\265\321\202\320\265\321\200", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">\320\232\321\200\320\270\321\202\320\265\321\200\320\270\320\270 \320\262\321\213\320\261\320\276\321\200\320\272\320\270</p></body></html>", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("MainWindow", "\320\240\320\241\320\234\320\246", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("MainWindow", "\320\241\321\202\320\260\320\275\321\206\320\270\321\217", 0, QApplication::UnicodeUTF8));
        groupBox_4->setTitle(QApplication::translate("MainWindow", "\320\237\321\200\320\276\320\263\320\275\320\276\320\267", 0, QApplication::UnicodeUTF8));
        groupBox_5->setTitle(QApplication::translate("MainWindow", "\320\224\320\260\321\202\320\260 \320\276\321\202\321\201\321\207\321\221\321\202\320\260", 0, QApplication::UnicodeUTF8));
        pushButton_11->setText(QApplication::translate("MainWindow", "\320\241\320\276\321\205\321\200\320\260\320\275\320\270\321\202\321\214", 0, QApplication::UnicodeUTF8));
        //label->setText(QApplication::translate("MainWindow", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_METEOMAINWINDOW_H
