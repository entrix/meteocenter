#!/bin/bash

arr=`ls|grep -Pv 'rsmc|crpt.*|clean.*'`
for a in $arr; do
    rm "$a"/*;
done;
