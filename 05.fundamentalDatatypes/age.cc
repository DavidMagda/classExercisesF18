#include <iostream>
using namespace std;

int main()
{
    int age = 0;
    
    cout << "Enter your age in years: ";
    cin >> age; 
    
    int days = age * 365;
    int hours = age * 8760;
    unsigned long int minutes = age * 525600;
    unsigned long long int seconds = age * 31536000;
	
	cout << "You are ...\n" << days << " days old, or\n" << hours << " hours old, or\n" << minutes << " minutes old, or\n" << seconds << " seconds old.";
	return 0;
	
	
}	