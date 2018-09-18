#include <iostream>
using namespace std;


int main ()
{
    char name[10] = "";
    int age = 0;
    
    cout << "Enter your name: " ;
    cin >> name;
    
    cout << "Enter your age: " ;
    cin >> age;
    
    cout << "Hello, " << name <<"! How do you like being " << age <<" years old?";
    return 0;
    
    
}