#!/bin/bash

proc include=../.. iname=station_pointDao.pcpp oname=station_pointDao.cpp lname=../../../../../../log/station_pointDao.log code=cpp
# proc include=../.. iname=station_pointDao-test.pcpp oname=station_pointDao-test.cpp lname=../../../../../log/station_pointDao-test.log code=cpp
g++ -fPIC -g -c -fpermissive   station_point.cpp station_pointDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
