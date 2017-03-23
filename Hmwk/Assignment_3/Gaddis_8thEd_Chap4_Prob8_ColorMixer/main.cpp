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
    string color, color2, blue, yellow, red, mixture;
    
    cout << "Enter two colors of either blue, red, or yellow \n "
            << "then hit enter after each color input: " << endl;
    cin >> color; cin >> color2;     
    color = blue, yellow, red;
    color2 = blue, yellow, red;
    mixture = color + color2 ;
    
     if (mixture == blue + yellow)
      {    cout << "The mixture is: green" << endl;
}
     else if (mixture == red + yellow)
    {  
        cout << "The mixture is: orange" << endl;
    }       
     else if (mixture == blue + red)
     {
         cout << "The mixture is: purple." << endl;
     }
    
     else if ( mixture != color)
     { cout << "Not the right input." << endl;
     }
   
    return 0;
    
}