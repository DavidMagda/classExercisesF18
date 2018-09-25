use strict;
use diagnostics;
use warnings;

my $var = 1;
chomp($var);
print("$var\n");
$var = 1.1;
chomp($var);
print("$var\n");
$var = "hello";
chomp($var);
print("$var\n");

