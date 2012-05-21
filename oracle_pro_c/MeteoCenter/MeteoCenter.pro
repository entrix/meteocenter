#-------------------------------------------------
#
# Project created by QtCreator 2012-05-09T19:31:19
#
#-------------------------------------------------

QT       += core gui

TARGET = MeteoCenter
TEMPLATE = app

SOURCES += main.cpp\
    mainwindow.cpp \
    form.cpp \
    tablemanager.cpp \
    newidget.cpp

HEADERS  += mainwindow.h \
    form.h \
    tablemanager.h \
    newidget.h

INCLUDEPATH += include\
    /u01/app/oracle/product/11.2.0/dbhome_1/precomp/public

#LIBS +=/home/oracle/projects/qt/creator/MeteoCenter/lib/file.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/rsmc.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/rsmcDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/wind.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/windDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/precipitation.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/precipitationDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/pressure.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/pressureDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/temperature.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/temperatureDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/tropopause.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/tropopauseDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/raw_param.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/raw_paramDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/station_delegation.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/station_delegationDao.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/station_point.o\
#    /home/oracle/projects/qt/creator/MeteoCenter/lib/station_pointDao.o\
LIBS +=/home/oracle/lib/libmeteo.so\
       -L $ORACLE_HOME/lib -l clntsh

FORMS    +=\
    meteoMainWindow.ui \
    mainwindow1.ui
