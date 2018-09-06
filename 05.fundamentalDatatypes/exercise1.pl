use strict;
use diagnostics;
use warnings;

print("Hello, Enter your age in years?\n");
my $age = <>;
chomp($age);
my $days = $age * 365;
chomp($days);
my $hours = $days * 24;
chomp($hours);
my $minutes = $hours * 60;
chomp($minutes);
my $seconds = $minutes * 60;
chomp($seconds);
print("So you are $age years old, or\n$days days old, or\n$hours hours old, or\n$minutes minutes old, or\n$seconds seconds old.\n")