#include <iostream>
using namespace std;

int main()
{
   int cats = 2;
   int jobs = 3;
   int reservations = 4;

   int dollars = cats * jobs;
if (reservations == dollars) 
{

    jobs = cats / 5;
  
}
    cout << cats << "\n" << jobs << "\n" << reservations << "\n" << dollars;
   return 0;
}
