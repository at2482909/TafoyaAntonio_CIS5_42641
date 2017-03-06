/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony
 * Problem #6
 *  Comment: I wrote down the typical error messages from the Compiler & logic
 *               at the bottom of the source-code page.
 * 
 * --------------------------------------------------------------
 * Directions: The purpose of this exercise is to produce a catalog of typical syntax errors
and error messages that will be encountered by a beginner, and to continue
acquainting you with the programming environment. This exercise
should leave you with a knowledge of what error to look for when given
any of a number of common error messages.
Your instructor may have a program for you to use for this exercise. If not,
you should use a program from one of the previous Programming
Projects.
Deliberately introduce errors to the program, compile, record the error and the
error message, fix the error, compile again (to be sure you have the program
corrected), then introduce another error. Keep the catalog of errors and add
program errors and messages to it as you continue through this course.
The sequence of suggested errors to introduce is:
a. Put an extra space between the < and the iostream file name.
b. Omit one of the < or > symbols in the include directive.
c. Omit the int from int main().
d. Omit or misspell the word main.
e. Omit one of the (), then omit both the ().
f. Continue in this fashion, deliberately misspelling identifiers (cout,
cin, and so on). Omit one or both of the << in the cout statement;
leave off the ending curly brace }.
 * 
 * 
 * Created on February 26, 2017, 5:47 PM
 */

 #include <iostream>
 using namespace std;
 int main ()
 {
 int number_of_pods, peas_per_pod, total_peas;
 cout << "Hello\n";
cout << "Press return after entering a number.\n";
 cout << "Enter the number of pods:\n";
 cin >> number_of_pods;
 cout << "Enter the number of peas in a pod:\n";
 cin >> peas_per_pod;
 total_peas = number_of_pods + peas_per_pod;
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
/*                          The Typical Beginner's Encounters
 * 
 * 1.main.cpp:38:22: fatal error: iostream : No such file or directory
 * 2. Omitting a "<" leaves out the statement
 * 3. Remvoving the "int" caused an incorrect calculation. 
 * 4. Failed. The compiler could not find the error.
 * 5. main.cpp:43:11: error: expected initializer before ')' token
 * - main.cpp:44:2: warning: extended initializer lists only available with -std=c++11 or -std=gnu++11
 * 6. main.cpp:47:1: error: 'cot' was not declared in this scope
 *-main.cpp:46:8: error: expected ';' before string constant
  cout  "Hello\n";
 * main.cpp:63:10: error: expected '}' at end of input
  return 0;
 * 
 

 
 
 */