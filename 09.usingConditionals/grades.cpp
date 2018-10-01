#include <iostream>


using namespace std;

int main(){
	
	double score = 0.0;

	cout<<"Enter your grade: "<<endl;
	cin>>score;


	while(score < 0 || score > 100 ){
		cout<<"Enter a valid grade between 0 and 100"<<endl;
		cin>>score;
		}
	

	if(score <= 64){
		cout<< "Your grade is an F";
	}
	else if(score <= 73){
		cout<< "Your grade is an D";
	}
	else if(score <= 82){
		cout<< "Your grade is an C";
	}
	else if(score <= 91){
		cout<< "Your grade is an B";
	}
	else{
		cout<< "Your grade is an A";
	}

	return 0;
}
