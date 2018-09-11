#Open Bash Terminal here, and enter "perl helloyourname.pl" to run.
use strict;
use diagnostics;
use warnings;

print("Hello, What is your name?\n");
my $name = <>;
chomp($name);
print("Ok, Welcome to Perl $name.");
