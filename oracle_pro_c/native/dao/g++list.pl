#!/usr/bin/perl -w

chdir('/home/oracle/sources/c/oracle_pro_c/meteo/src/main/native/dao');
my $str;
foreach (`ls|grep -Pv '.*\.(sh|pl)\~?\$'`) {
    chomp;
    $str .= "dao/$_/$_.cpp dao/$_/${_}Dao.cpp ";
}

print $str;
