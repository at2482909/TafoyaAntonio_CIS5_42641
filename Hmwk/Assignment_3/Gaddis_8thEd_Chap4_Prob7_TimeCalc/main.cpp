/*
 
 Antonio Tafoya
 *
 *Class: Dr.Lehr, CSC-5 42641
 * 3/19/2017
 * 
 * Directions: 
 
 
 */

#include <iostream>
using namespace std;

int main() 
{
    float secs, day, hrs, min;
    
    cout << "Enter the number of seconds: " << endl;
    cin >> secs;
    
    if ( 60 <= secs && secs < 3600 && secs < 8600 )
    {   min = secs/60;
    cout << min << " minute(s)" << endl;
    }
    else if (secs >= 3600 && secs < 8600 )
    {
                hrs = secs/3600;
                cout << hrs << " hour(s)" << endl;
    }
    else if (secs >= 8600)
            {
                day = secs/8600;
                cout << day << " day(s)" << endl;
            }
    else if ( secs < 60)
    { 
                cout << secs << " seconds." << endl;
    }       
    return 0;
    
}