#!/bin/bash

proc include=../.. iname=tropopauseDao.pcpp oname=tropopauseDao.cpp lname=../../../../../../log/tropopauseDao.log code=cpp
# proc include=../.. iname=tropopauseDao-test.pcpp oname=tropopauseDao-test.cpp lname=../../../../../log/tropopauseDao-test.log code=cpp
g++ -c -fpermissive  tropopause.cpp tropopauseDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
