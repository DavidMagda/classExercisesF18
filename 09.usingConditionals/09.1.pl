#Open Bash Terminal here, and enter "perl example.pl" to run.
use strict;
use diagnostics;
use warnings;

print("Hello, We are going to calculate your letter grade. Please input your grade:\n");

my $nG = <>; #Waits for user to input value (Nuemeric Grade)
chomp($nG);

#Checks for the points value to 
while ($nG == 0 or $nG < 0) {
    print("Sorry the value was not a valid input, please input a valid number.\n");
    $nG = <>;
    if($nG == 0 or $nG < 0) {
        redo;
    }
}

if ($nG >= 90) {
    print("Your letter grade is: A\n");
    exit;
}
if ($nG >= 80) {
    print("Your letter grade is: B\n");
    exit;
}
if ($nG >= 70) {
    print("Your letter grade is: C\n");
    exit;
}
if ($nG >= 60) {
    print("Your letter grade is: D\n");
    exit;
}
if ($nG < 60) {
    print("Your letter grade is: F\n");
}



