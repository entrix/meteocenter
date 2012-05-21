#!/usr/bin/perl -w
my @ns = ();
my $source;
foreach (`ls |grep  -Pv '.*\.(sh|pl)\~?\$'`) {
    chomp;
    $source = `cat "$_"/"$_".h`;
    # /s f foreach so that the gaps were considered ordinary characters
    $source =~ /namespace (\w+)/s;
    push @ns, $1;}

print "using namespace $_;\n" foreach (@ns);
