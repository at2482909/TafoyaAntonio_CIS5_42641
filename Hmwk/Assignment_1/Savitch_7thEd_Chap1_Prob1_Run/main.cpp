/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Antonio Tafoya
 *Book: Savitch 7th ed.
 *Problem 1
 *Directions:
 *1. "Using your text editor, enter (that is, type in) the C++ program shown in
Display 1.8. Be certain to type the first line exactly as shown in Display
1.8. In particular, be sure that the first line begins at the left-hand end of
the line with no space before or after the # symbol. Compile and run the
program. If the compiler gives you an error message, correct the program
and recompile the program. Do this until the compiler gives no error messages.
Then run your program."
 
 * Created on February 26, 2017, 4:07 PM
 */

 #include <iostream>
 using namespace std;
 int main( )
 {
 int number_of_pods, peas_per_pod, total_peas;
 
cout << "Press return after entering a number.\n";
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

 return 0;
 }
