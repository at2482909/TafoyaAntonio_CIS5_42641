

/* 
 * File:   main.cpp
 * Author: Antonio 
 * Directions: A metric ton is 35,273.92 ounces. Write a program that will read the
weight of a package of breakfast cereal in ounces and output the weight in
metric tons as well as the number of boxes needed to yield one metric ton
of cereal. Your program should allow the user to repeat this calculation as
often as the user wishes.
 *
 * Created on March 11, 2017, 4:21 PM
 */

#include <iostream>
using namespace std;
int main( )
{
        float Metric_Ton = 35273.92, OZ, Conversion_ANSW,Num_Boxes;    

    cout << "This program can tell you the conversion of your cereal box "
            << "weight from OZ to metric tons. Also the amount of cereal boxes it takes to"
            << " reach one ton." << endl;
    cout << "Enter the ounces of your cereal box then hit enter." << endl;
    cin >> OZ;
               
                    Conversion_ANSW = OZ / Metric_Ton;
    
    cout << "This is the conversion in " << Conversion_ANSW << " metric tons." 
            << endl;
    
                       Num_Boxes = Metric_Ton / OZ;
        
    cout << "The number of cereal boxes to reach one ton is:"<< Num_Boxes 
            << "boxes." << endl;
cout.setf(ios::fixed);
cout.setf(ios::showpoint);
cout.precision(2);
            
    
        
    
   
    

return 0;
}