use strict;
use diagnostics;
use warnings;

my $cats = 2;
my $jobs = 3;
my $reservations = 4;

my $dollars = $cats * $jobs;
if ($reservations == $dollars) {
    $jobs = $cats / 5;
};
