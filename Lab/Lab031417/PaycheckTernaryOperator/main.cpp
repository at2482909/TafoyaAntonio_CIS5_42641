/* 
 * File:   main.cpp
 * Author: Antonio Tafoya
 * Created on March 22nd, 2017
 * Purpose:  Paycheck Dependent IF
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here

using namespace std;

int main(int argc, char** argv) {
    
   int hrswrkd;
    float PayRate, Paychk;
    
    cout << "The program calculates your paycheck based on your total hours." << endl;
    cout<<"Type in how many hours you have worked"<<endl;
    cin>>hrswrkd;
    cout <<"Type in your pay rate:" << endl;
    cin >> PayRate;
    
    Paychk = (hrswrkd <= 40)? PayRate * hrswrkd:(PayRate*40) + 2*PayRate*(hrswrkd-40);
           
    cout << "Your pay check is: " <<Paychk << endl;

    return 0;
}
