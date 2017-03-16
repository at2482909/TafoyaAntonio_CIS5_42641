/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony
 *
 * Created on March 15, 2017, 7:31 PM
 */

 #include <iostream>
 using namespace std;
 int main( )
 {
 double Bill = 1000;
 
 int count = 0;
 cout << "This program tells you how long it takes\n"
 << "to pay off $1,000 from the stereo, with\n"
 << "monthly payments of 50$ plus monthly interest.\n"
 << "Also tell how much was spent on interest"
 << "The interest rate is 1.5% per month.\n";
 while (Bill > 0)
 {
 Bill = (Bill) - 50 + (0.015 * Bill);
 
 count++;
 }
 cout << "After " << count << " months,\n";
 cout.setf(ios::fixed);
 cout.setf(ios::showpoint);
 cout.precision(2);
 cout << "your balance due will be paid off.\n"
 << count*0.015 << " $ was spent on interest." << endl;
 return 0;
 }