/*
 
 Antonio Tafoya
 *
 *Class: Dr.Lehr, CSC-5 42641
 * 3/19/2017
 * 
 * Directions: 
 
 
 */
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    int Month, Day, Year;
    
    cout << "Enter your desired (numerical)month: \n";
            cin >> Month;
     cout << "Enter the day: \n" ;
     cin >> Day;
     cout << "Enter the two-digit year: \n";
     cin >> Year;
    
        if (Year == (Month*Day))
    {
        cout << "The date is magic~* !\n";
    }
    else
      
        cout << "Sorry the date is not enchanted enough.";
   
    return 0;
    
}