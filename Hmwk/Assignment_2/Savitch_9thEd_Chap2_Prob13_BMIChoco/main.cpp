/* 
Antonio Tafoya
 * CSC-5 42641
 * Problem 13
 * Created: 3/13/2017 20:14
 * Directions: Write a program
that allows the user to input his or her weight in pounds, height in
inches, age in years, and the character M for male and F for female. The
program should then output the number of chocolate bars that should
be consumed to maintain one’s weight for the appropriate sex of the
specified weight, height, and age.
 */

#include <string>
#include <iostream>
using namespace std;
int main() {

    const float CHOCOBAR = 230;
    float Height_Inches, Weight_Pounds, AgeYears, BMR_M, BMR_F, NumBars;
    char Gender, M, F;
    
    cout << "This program calculates your BMR, and will tell you how much \n"
            << "chocolate can fit in your BMR to keep your current weight.\n";
    cout << "Please enter your age (in years):" << endl;
    cin >> AgeYears;
    cout << "Please enter your height in inches:\n";
    cin >> Height_Inches;
    cout << "Please accurately enter your weight in lbs: \n";
            
    cin >> Weight_Pounds;
    
    cout << "Are you male or female? Press M for male or F for female, then press"
            <<" enter\n"; 
    cin >> Gender;
    
            
        if ( Gender == 'M')
        {
            BMR_M = 66 + (6.3 * Weight_Pounds) + (12.9 * Height_Inches) -
(6.8 * AgeYears);
    cout << "Your BMR is: " << BMR_M << endl;
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
    
    NumBars = BMR_M/CHOCOBAR;
    
    cout << "So that means " << NumBars << " chocolate bars can sustain your current weight!.\n";
    
        }
    
        else
    {
            
     BMR_F = 655 + (4.3 * Weight_Pounds ) + (4.7 * Height_Inches) -
            (4.7 * AgeYears); 
   cout << "Your BMR is: " << BMR_F << endl;
            cout.setf(ios::fixed);
            cout.setf(ios::showpoint);
            cout.precision(2);
   
   NumBars = BMR_F/CHOCOBAR;          
     
    cout << "So that means " << NumBars << " chocolate bars can sustain your current weight!.\n";
           
    }

return 0;
}

