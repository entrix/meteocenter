#!/bin/bash

proc include=../.. iname=windDao.pcpp oname=windDao.cpp lname=../../../../../../log/windDao.log code=cpp
# proc include=../.. iname=windDao-test.pcpp oname=windDao-test.cpp lname=../../../../../log/windDao-test.log code=cpp
g++ -fPIC -g -c -fpermissive  wind.cpp windDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh -Wno-warn
