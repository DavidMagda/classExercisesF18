#include <iostream>
#include <string>
using namespace std;

int main(){
    
    int n = 1;
    cout<<n<<"\n"; // 1
    
    
    
    /*
    n = 1.1;
    cout<<n<<"\n"; // 1
    */
    float m = 1.1;
    cout<<m<<"\n";
    
    
    
    /*
    n = "hello";
    cout<<n<<"\n";  //error: invalid conversion from ‘const char*’ to ‘int’ [-fpermissive]
    */
    string b = "Hello";
    cout<<b<<"\n";
    
    
    return 0;
}