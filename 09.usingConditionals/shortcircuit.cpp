#include <iostream>

using namespace std;

int main(){

	double points_possible = 10;
	
	double points_earned = 0;
	cout<<"Enter points erned from 0 to 10:"<<endl;
	cin>> points_earned;
	while(points_earned < 0 || points_earned > 10){
		cout<<"Enter a correct # of points";
		cin>> points_earned;
	}


	if(points_possible > 0 && points_earned / points_possible >= 0.5){
		cout<< "You pass";
	}
	else{
		cout<<"You fail";
	}
	return 0;
}
