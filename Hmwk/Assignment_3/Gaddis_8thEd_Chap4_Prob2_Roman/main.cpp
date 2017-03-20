/*
 
 Antonio Tafoya
 *
 *Class: Dr.Lehr, CSC-5 42641
 * 3/19/2017
 * 
 * Directions: Write a program that asks the user to enter a number within the range of 1 through
10. Use a switch statement to display the Roman numeral version of that number.
Input Validation: Do not accept a number less than 1 or greater than 10.
 
 
 */
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    char num;
  
   cout << "Enter any number 1- 10. Any number out of that range is invalid.\n";
    cin >> num;
    cout << "Your converted number to Roman numerals.\n";
    
    switch(num)
    {
            case '1':
                cout << "I" << endl;
                break;
            case '2':    
                cout << "II" << endl;
                break;   
                case '3':
                    cout << "III" << endl;
            case '4':
                cout << "IV" << endl;
                break;
            case '5':
                cout << "V" << endl;
                break;    
            case '6':
                cout << "VI" << endl;
                break;            
            case '7':
                cout << "VII" << endl;
                break;
            case '8':
                cout << "VIII" << endl;
            case '9':
                cout << "IX" << endl;
                break; 
            case '10':
                cout << "X" << endl;
                break;                     
                
        default: 
            cout << "Invalid number\n"; 
    }                   
    return 0;
    
}