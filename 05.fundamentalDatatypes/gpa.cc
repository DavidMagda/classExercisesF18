#include <iostream>
using namespace std;

int main()
{
	
	double points = 0.0;
    double hours = 0.0;

	cout<< "Enter the number of quality points earned: ";
	cin>> points;
	cout<< "Enter the number of credit hours earned: ";
	cin>> hours;
while (hours == 0)
{
	cout << "your hours can not be 0.\n Enter the number of credit hours earned: ";
	cin >> hours;
}
	long double gpa = points / hours;
    cout<< "The grade point average is " << gpa;
	
	return 0;
}