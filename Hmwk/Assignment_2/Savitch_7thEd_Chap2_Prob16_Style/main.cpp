/* 
Antonio Tafoya
 * CSC-5 42641
 * Problem 16
 * Created: 3/13/2017 20:14
 * Directions: The following is a short program that computes the volume of a sphere
given the radius. It will compile and run, but it does not adhere to the
program style recommended in Section 2.5. Rewrite the program using
the style described in the chapter for indentation, adding comments, and
appropriately naming constants.
 */

#include <iostream>
using namespace std;
int main() {

    
    double radius, vm;

    cout << "Enter radius of a sphere." << endl; 
       
        cin >> radius;
        vm = (4.0 / 3.0) * 3.1415 * radius * radius * radius;
   
  
    cout << " The volume is " << vm << endl;


return 0;
}