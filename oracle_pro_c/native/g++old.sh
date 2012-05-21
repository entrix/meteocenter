#!/bin/bash

proc `dao/includelist.pl` iname=main.pcpp oname=main.cpp lname=../../../../log/main.log code=cpp
arr=`ls dao|grep -Pv '.*\.(sh|pl)\~?$'`
pwd=`pwd`
for a in $arr; do
    cd dao/"$a"
    echo ">>>>>>>>>>>>>>>>>>>>>> $a <<<<<<<<<<<<<<<<<<<<<<<<<<"
    . g++.sh
    cd ../..
done;
g++ -c -fpermissive `dao/g++list.pl` main.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
