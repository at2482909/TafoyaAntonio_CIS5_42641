/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.cpp
 * Author: Anthony
 *Problem #7
 * 
 * Directions:Write a program that prints out C S ! in large block letters inside a border
of *s followed by two blank lines then the message Computer Science is
Cool Stuff. The output should look as follows:
*****************************************************
C C C S S S S !!
C C S S !!
C S !!
C S !!
C S S S S !!
C S !!
C S !!
C C S S
C C C S S S S OO
*****************************************************
Computer Science is Cool Stuff!!!
 * 
 * 
 * 
 * Created on February 26, 2017, 7:18 PM
 */



#include <iostream>
 using namespace std;
 int main( )
 {
    
   cout << "*****************************************************\n";         
cout << "               C   C   C         S  S  S  S            !!\n";
cout << "              C          C      S          S           !!\n"; 
cout<< "              C                 S                       !!\n";
cout<< "              C                 S                       !!\n";
cout << "             C                  S S S S                !!\n";   
cout << "              C                           S            !!\n";
cout << "               C                           S           !!\n";
cout << "                C          C      S          S\n";
cout << "                 C   C   C         S  S  S  S          OO\n";
cout << "*****************************************************\n";
cout << "Computer Science is Cool Stuff!!!\n";
return 0;
 }

