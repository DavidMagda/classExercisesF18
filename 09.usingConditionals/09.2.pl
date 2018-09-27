use strict;
use diagnostics;
use warnings;

my $pointsPossible = 0;
my $pointsEarned = 10;
my $result = 0;

if ($pointsPossible >= 0 || $pointsEarned / $pointsPossible >= 60) {
    $result = "You Pass!";
    print("$result");
    exit;
    
}
$result = "You Failed.";
print("$result");