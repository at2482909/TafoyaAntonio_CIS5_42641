/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony
 *
 
 */

/* 
 * File:   main.cpp
 * Author: Antonio Tafoya
 * Hmwk Project #5
 * 
 * Directions:Write a C++ program that reads in two integers and then outputs both
their sum and their product. One way to proceed is to start with the program
in Display 1.8 and to then modify that program to produce the program
for this project. Be certain to type the first line of your program
exactly the same as the first line in Display 1.8. In particular, be sure that
the first line begins at the left-hand end of the line with no space before or
after the # symbol. Also, be certain to add the symbols \n to the last output
statement in your program. For example, the last output statement
might be the following:
cout << "This is the end of the program.\n";
 *
 *  Created on February 26, 2017, 4:47 PM
 * 
 */

#include <iostream>
 using namespace std;
 int main( )
 {
 int number_of_pods, peas_per_pod, total_peas, extra_peas, sum_extra_peas;
 cout << "Hello\n";
cout << "Press hit return after entering a number.\n";
 cout << "Enter the number of pods:\n";
 cin >> number_of_pods;
 cout << "Enter the number of peas in a pod:\n";
 cin >> peas_per_pod;
 total_peas = number_of_pods * peas_per_pod;
 cout << "If you have ";
 cout << number_of_pods;
 cout << " pea pods\n";
 cout << "and ";
 cout << peas_per_pod;
 cout << " peas in each pod, then\n";
 cout << "you have ";
 cout << total_peas;
 cout << " peas in all the pods.\n";
 cout << "Found extra peas ? then enter here to add on:\n";
 cin >> extra_peas;
 sum_extra_peas = extra_peas + total_peas;
 cout << "then you have ";
 cout << sum_extra_peas;
 cout << " on top of that.\n";
         
       
 cout << "Good-bye\n";
 return 0;
 }


