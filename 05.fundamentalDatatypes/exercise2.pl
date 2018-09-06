use strict;
use diagnostics;
use warnings;

print("Hello, We are going to calculate your gpa.\nHow many quality points have you earned?\n");

my $points = <>; #Waits for user to input value
chomp($points);

#Checks for the points value to 
while ($points == 0 or $points < 0) {
    print("Sorry the value was not a valid input, please input a valid number.\n");
    $points = <>;
    if($points == 0 or $points < 0) {
        redo;
    }
}

print("Ok, How many hours of credit have you earned?\n");

my $hours = <>;
chomp($hours);

while ($hours == 0 or $hours < 0) {
    print("Sorry the value was not a valid input, please input a valid number.\n");
    $hours = <>;
    if($hours == 0 or $hours < 0) {
        redo;
    }
}

my $gpa = $points/$hours;
chomp($gpa);

print("Your grade point average is $gpa\n");


