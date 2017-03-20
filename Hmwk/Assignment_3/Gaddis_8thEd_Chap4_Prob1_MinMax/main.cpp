/*
 
 Antonio Tafoya
 *
 *Class: Dr.Lehr, CSC-5 42641
 * 3/19/2017
 * 
 * Directions: Write a program that asks the user to enter two numbers. The program should use the
conditional operator to determine which number is the smaller and which is the larger.
 
 
 */
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    int num1, num2;
  
    cout << "Enter two numbers\n";
    cin >> num1; cin >> num2;
    
    if (num1 > num2)
    
        cout << "This number is the largest out of the two: " << num1 << endl;
    else
        cout << "This number is the largest out of the two: " << num2 << endl;
    
    
    return 0;
    
}