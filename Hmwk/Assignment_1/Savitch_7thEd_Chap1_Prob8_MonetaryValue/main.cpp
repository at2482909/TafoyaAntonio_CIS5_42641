/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony
 *Problem #8
 * 
 * Directions: Write a program that allows the user to enter a number of quarters, dimes,
and nickels and then outputs the monetary value of the coins in cents. For
example, if the user enters 2 for the number of quarters, 3 for the number
of dimes, and 1 for the number of nickels, then the program should output
that the coins are worth 85 cents.
 * 
 * 
 * Created on February 26, 2017, 7:55 PM
 */
#include <iostream>
using namespace std;

int main() {
    int value_of_quarters, value_of_dime, value_of_nickels,nQ,nD,nN,total_coins;
    value_of_quarters = 25;
    value_of_dime = 10;
    value_of_nickels = 5;
    //Here is where I establish values and variables.
    
  cout << "insert the number of quarters you have, then press enter.\n";
    cin >> nQ;
    cout << "insert the number dimes you have, press enter. \n";
    cin >> nD;
    cout << "insert the number of nickels you have, press enter. \n";
    cin >> nN;
    // Here is where the number of coins are accounted for.
    
    total_coins = (nQ * value_of_quarters) + (nD * value_of_dime) + (nN * value_of_nickels);
    
    cout << "you are, \n";
    cout << total_coins;
    cout << "cents richer";                  
    return 0;
}