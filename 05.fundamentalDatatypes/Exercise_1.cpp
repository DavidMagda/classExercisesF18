#include <iostream>

using namespace std;

int main(){

	int age = 0;
	
	cout<< "Eneter your age in years: ";
	cin>>age;

	int days = age * 365;
	int hours = age * 8760;
	int minutes = age * 525600;
	int seconds = age * 31540000;

	cout<< "You are ... \n" << days << " days old, or \n" << hours << " hours old, or \n" << minutes << " minutes old, or \n" << seconds << " seconds old.\n";
		
	return 0;
	
}
