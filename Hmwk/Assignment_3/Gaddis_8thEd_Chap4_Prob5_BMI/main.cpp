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

int main() {
    float height, weight, BMI;

    cout << "This program calculates the user's paticular BMI\n"
            << "Please enter your weight in lbs:\n ";
    cin >> weight;
    cout << "Now, please enter your height in inches: \n";
    cin >> height;
    BMI = weight * 703 / (height * height);

    if ((BMI >= 18.5) || (BMI <= 25 )) {
        cout << "Weight is considered optimal\n";
        cout << "Your BMI is:  \n" << BMI << "." << endl;
    }
    else if (BMI > 18.5) {
        cout << "The index defines you as underweight, your BMI is:  \n";
        cout << BMI << endl;
    }
    else if (25 < BMI)
    {
        cout << " overweight";
        cout << BMI << endl;
    }
    return 0;

}