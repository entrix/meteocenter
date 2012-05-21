#!/bin/bash

proc include=../.. iname=pressureDao.pcpp oname=pressureDao.cpp lname=../../../../../../log/pressureDao.log code=cpp
# proc include=../.. iname=pressureDao-test.pcpp oname=pressureDao-test.cpp lname=../../../../../log/pressureDao-test.log code=cpp
g++ -c -fpermissive  pressure.cpp pressureDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
