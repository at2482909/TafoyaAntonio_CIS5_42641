/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony
 * problem #9
 * 
 * Directions: Write a program that allows the user to enter a time in seconds and then
outputs how far an object would drop if it is in freefall for that length of
time. Assume that the object starts at rest, there is no friction or resistance
from air, and there is a constant acceleration of 32 feet per second due to
gravity. Use the equation:

 Distance = (acceleration X time^2) / 2
 * 
 * You should first compute the product and then divide the result by 2
(The reason for this will be discussed later in the book).
distance acceleration time2

 * 
 * Created on February 26, 2017, 10:12 PM
 */

#include <iostream>
using namespace std;

int main() {
    int distance, covered_distance, ntime, acceleration;
    //Here is where I establish variables.
   
    
    
  cout << "This program will calculate the distance covered from a free falling object.\n";
  cout << "To calculate how far it'll go depends on the entered time in seconds.\n";
  cout << "For Distance is acceleration times time-squared all divided by two.";
  cout << "Acceleration is already accounted for because of gravity.\n";       
  cout << "Put in a number, then hit enter, this number will account for seconds.\n";
  cin >> ntime;
  acceleration = 34 * ntime;
  distance = (acceleration) * (ntime * ntime);
  covered_distance = distance / 2;
  cout << "This is the distance in feet:";
  cout << covered_distance;
  cout << "ft.\n";
  
  
    // Here is where 
    
                    
    return 0;
}


