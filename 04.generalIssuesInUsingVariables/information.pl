use strict;
use warnings;
use diagnostics;

print("Hello, What is your name?\n");
my $name = <>;
chomp($name);

print("How old are you?\n");
my $age = <>;
chomp($age);

print("Hello, $name! How do you like being $age?\n");
