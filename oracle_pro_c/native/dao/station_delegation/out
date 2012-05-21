#!/bin/bash

proc include=../.. iname=station_delegationDao.pcpp oname=station_delegationDao.cpp lname=../../../../../../log/station_delegationDao.log code=cpp
# proc include=../.. iname=station_delegationDao-test.pcpp oname=station_delegationDao-test.cpp lname=../../../../../log/station_delegationDao-test.log code=cpp
g++ -fPIC -g -c -fpermissive   station_delegation.cpp station_delegationDao.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
