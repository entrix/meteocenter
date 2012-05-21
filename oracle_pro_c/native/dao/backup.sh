#!/bin/bash

# add files to achive

arr=`ls|grep -Pv 'crpt.*|clean.*|backup.*'`
for a in $arr; do
    if [ -f "$a"/"$a".a ]
    then
	ar q "$a"/"$a".a "$a"/"$a".h;
    else
	ar rc "$a"/"$a".a "$a"/"$a".h;
    fi

    if [ -f "$a"/"$a".a ]
    then
	ar q "$a"/"$a".a "$a"/"$a".cpp;
    else
	ar rc "$a"/"$a".a "$a"/"$a".cpp;
    fi

    if [ -f "$a"/"$a".a ]
    then
	ar q "$a"/"$a".a "$a"/"$a"Dao.h;
    else
	ar rc "$a"/"$a".a "$a"/"$a"Dao.h;
    fi
    if [ -f "$a"/"$a".a ]
    then
	ar q "$a"/"$a".a "$a"/"$a"Dao.pcpp;
    else
	ar rc "$a"/"$a".a "$a"/"$a"Dao.pcpp;
    fi
    if [ -f "$a"/"$a".a ]
    then
	ar q "$a"/"$a".a "$a"/"$a"Dao-test.pcpp;
    else
	ar rc "$a"/"$a".a "$a"/"$a"Dao-test.pcpp;
    fi
done;
