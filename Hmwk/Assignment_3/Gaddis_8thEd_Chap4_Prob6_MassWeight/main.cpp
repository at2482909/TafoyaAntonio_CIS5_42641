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
    float weight, mass;
    
    cout << "Enter the mass for the object in kilograms: " << endl;
    cin >> mass; 
    weight = (mass * 9.8);
    
    if (weight > 1000)
        cout << "Too heavy ! The weight is " << weight << " newtons." << endl;
    
    else if (weight < 10)
        cout << "Too light. The weight is " << weight << "  newtons." <<endl;
    
    else
        
        cout << "The weight is " << weight << "  newtons." << endl;
    return 0;
    
}