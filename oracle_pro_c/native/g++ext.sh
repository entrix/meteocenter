#!/bin/bash

g++  ext.cpp  `dao/g++list.pl` main.o  -I/u01/app/oracle/product/11.2.0/dbhome_1/precomp/public -L $ORACLE_HOME/lib -l clntsh
