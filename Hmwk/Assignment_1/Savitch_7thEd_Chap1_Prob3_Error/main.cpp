

/* 
 * File:   main.cpp
 * Author: Antonio Tafoya
 * Hmwk Project #3
 * 
 * Directions:Further modify the C++ program that you already have modified in Programming
Project 2. Change the multiplication sign * in your C++ program
to a division sign /. Recompile the changed program. Run the program.
Enter a zero input for “number of peas in a pod.” Notice the run time error
message due to division by zero.
 * 
 *Created on February 26, 2017, 4:34 PM
 
 */

 #include <iostream>
 using namespace std;
 int main( )
 {
 int number_of_pods, peas_per_pod, total_peas;
 cout << "Hello\n";
cout << "Press return after entering a number.\n";
 cout << "Enter the number of pods:\n";
 cin >> number_of_pods;
 cout << "Enter the number of peas in a pod:\n";
 cin >> peas_per_pod;
 total_peas = number_of_pods / peas_per_pod;
 cout << "If you have ";
 cout << number_of_pods;
 cout << " pea pods\n";
 cout << "and ";
 cout << peas_per_pod;
 cout << " peas in each pod, then\n";
 cout << "you have ";
 cout << total_peas;
 cout << " peas in all the pods.\n"; 
 cout << "Good-bye\n";
 return 0;
 }

