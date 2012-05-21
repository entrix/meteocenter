#!/bin/bash

proc include=../.. iname=raw_paramDao.pcpp oname=raw_paramDao.cpp lname=../../../../../../log/raw_paramDao.log code=cpp
# proc include=../.. iname=raw_paramDao-test.pcpp oname=raw_paramDao-test.cpp lname=../../../../../log/raw_paramDao-test.log code=cpp
g++ -c -fpermissive  raw_param.cpp raw_paramDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
