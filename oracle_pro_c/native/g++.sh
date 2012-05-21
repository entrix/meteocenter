#!/bin/bash

proc `dao/includelist.pl` iname=file.pcpp oname=file.cpp lname=../../../../log/file.log code=cpp
arr=`ls dao|grep -Pv '.*\.(sh|pl)\~?$'`
pwd=`pwd`
for a in $arr; do
    cd dao/"$a"
    echo ">>>>>>>>>>>>>>>>>>>>>> $a <<<<<<<<<<<<<<<<<<<<<<<<<<"
    . g++.sh
    cd ../..
done;
g++ -c -fpermissive `dao/g++list.pl` file.cpp  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
g++ -fpermissive -shared -Wl,-soname,libmeteo.so \
-o libmeteo.so.1.0.1 `dao/g++list.pl` file.o -lc  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
