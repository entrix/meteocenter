#!/bin/bash

arr=`ls|grep -Pv 'rsmc|crpt.*|clean.*'`
for a in $arr; do
    cat rsmc/rsmc.h >"$a"/"$a".h;
    cat rsmc/rsmc.cpp >"$a"/"$a".cpp;
    cat rsmc/rsmcDao.h >"$a"/"$a"Dao.h;
    cat rsmc/rsmcDao.pcpp >"$a"/"$a"Dao.pcpp;
    cat rsmc/rsmcDao-test.pcpp >"$a"/"$a"Dao-test.pcpp;
done;
