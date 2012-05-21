#!/bin/bash

proc include=../.. iname=humidityDao.pcpp oname=humidityDao.cpp lname=../../../../../../log/humidityDao.log code=cpp
# proc include=../.. iname=humidityDao-test.pcpp oname=humidityDao-test.cpp lname=../../../../../log/humidityDao-test.log code=cpp
g++ -c -fpermissive  humidity.cpp humidityDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
