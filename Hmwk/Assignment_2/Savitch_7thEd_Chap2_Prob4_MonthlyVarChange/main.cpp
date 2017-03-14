
/* File:   main.cpp
 * Author: Antonio Tafoya
 * Class CSC-5 Section:42641
 *
 *Directions: Modify your program from Programming Project 3 so that it calculates the
retroactive salary for a worker for any number of months, instead of just
six months. The number of months is entered by the user.
 * 
 * Created on March 11, 2017, 5:51 PM
 */

#include <iostream>
 using namespace std;
 int main( )
 {
 const float PercentageIncrease = .076;  
    float LastYear_Salary,NewYear_Salary, Retro_Months, 
             NewMonth_Salary; 
 
cout << "This program will calculate an employee's owed retroactive pay\n"
           "from the company.\n";
cout << "Enter the number of retroactive months." << endl;
        cin >> Retro_Months;
cout << "Input your previous annual salary then hit enter\n";
   
   cin >> LastYear_Salary;
   NewYear_Salary = (LastYear_Salary * PercentageIncrease)/ Retro_Months + (LastYear_Salary);
   
   cout << "Next year's salary owed to the employee is $" << NewYear_Salary << endl;
   NewMonth_Salary = NewYear_Salary / 12;
           cout << "The employee should earn $" << NewMonth_Salary << 
                   " a month for the fiscal year.\n";
 
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);

 return 0;
 }


