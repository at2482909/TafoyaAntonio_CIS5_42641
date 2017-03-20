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
    float width1, width2, height1, height2, Area1, Area2;
   
    cout << "Insert the weight of the first rectangle: \n";
            cin >> width1;
    cout << "Enter the second width of the other rectangle: ";
            cin >> width2;
    cout << "Enter the height of the first rectangle:\n";
            cin >> height1;
    cout << "Enter the second height of the other rectangle: \n";
            cin >> height2;
    
    Area1= width1*height1; Area2= width2*height2;
 
    if ( Area1 > Area2) 
        cout << "Rectangle 1 is the largest\n";
   
         else if (Area2 > Area1)
     
            cout << "Rectangle 2 is the largest\n"; 
    
    
    else
        cout << "They have the same area." << endl;
    return 0;
    
}