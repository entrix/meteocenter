#!/usr/bin/perl -w

chdir('/home/oracle/sources/c/oracle_pro_c/meteo/src/main/native/dao');
my $str;
foreach (`ls|grep -Pv '.*\.(sh|pl)\~?\$'`) {
    chomp;
    $str .= "include=dao/$_ ";
}

print $str;
