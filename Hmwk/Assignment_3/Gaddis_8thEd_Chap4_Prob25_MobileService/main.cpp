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
    char letter;
    int min, addMin;
    float bill;
  
    cout << "Enter the number on the menu according to the plan package\n "
            <<"you are under: \n"
            << "A. Package:A \n"
            << "B. Package:B \n"
            << "C. Package:C \n "
            << endl;
    cin >> letter;
    
    switch (letter)
    {    
           cout.setf(ios::fixed);
           cout.setf(ios::showpoint);
           cout.precision(2);
        
        case 'A':         
            cout << "How many minutes were used ? " << endl;
            cin >> min;
            cout << "Any additional min used? if not put zero" <<endl;
            cin >> addMin;
            bill = 39.99 + (addMin*.45);
            cout << "$" << bill << " is the amount due" << endl;
            
            break;
        case 'B':        
            
            cout << "How many minutes were used ? " << endl;
            cin >> min;
            cout << "Any additional min used? if not put zero" <<endl;
            cin >> addMin;
            bill = 59.99 + (addMin*.40);
            cout << "$" << bill << " is the amount due" << endl;

            break;
        case 'C':   
            cout << "$69.99 is your flat balance due. \n";
          
                    break;
      
        default: 
                    cout << "error" << endl;
         
    }
                    
    return 0;
    
}