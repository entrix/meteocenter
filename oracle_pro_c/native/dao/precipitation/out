#!/bin/bash

proc include=../.. iname=precipitationDao.pcpp oname=precipitationDao.cpp lname=../../../../../../log/precipitationDao.log code=cpp
# proc include=../.. iname=precipitationDao-test.pcpp oname=precipitationDao-test.cpp lname=../../../../../log/precipitationDao-test.log code=cpp
g++ -fPIC -g -c -fpermissive   precipitation.cpp precipitationDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
