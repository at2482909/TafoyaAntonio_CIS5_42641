/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antonio Tafoya
 * Class CSC-5 Section:42641
 *
 * Main Project directions: Write a program that takes an employee’s previous annual
salary as input, and outputs the amount of retroactive pay due the employee,
the new annual salary, and the new monthly salary.
 * 
 * Created on March 11, 2017, 5:51 PM
 */

#include <iostream>
 using namespace std;
 int main( )
 {
 const float PercentageIncrease = .076;  
    float LastYear_Salary,NewYear_Salary, 
             NewMonth_Salary; 
 
cout << "This program will calculate an employee's owed retroactive pay\n"
           "from the company.\n";
cout << "\n"; //Spacing for the User
cout << "Input your previous annual salary then hit enter\n";
   
   cin >> LastYear_Salary;
   NewYear_Salary = (LastYear_Salary * PercentageIncrease)/6 + (LastYear_Salary);
   
   cout << "Next year's salary owed to the employee is $" << NewYear_Salary << endl;
   NewMonth_Salary = NewYear_Salary / 12;
           cout << "The employee should earn $" << NewMonth_Salary << 
                   " a month for the fiscal year.\n";
 
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);

 return 0;
 }

