#!/bin/bash

proc include=../.. iname=temperatureDao.pcpp oname=temperatureDao.cpp lname=../../../../../../log/temperatureDao.log code=cpp
# proc include=../.. iname=temperatureDao-test.pcpp oname=temperatureDao-test.cpp lname=../../../../../log/temperatureDao-test.log code=cpp
g++ -c -fpermissive  temperature.cpp temperatureDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
