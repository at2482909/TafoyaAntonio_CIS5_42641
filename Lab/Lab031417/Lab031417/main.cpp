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
int main(int argc, char** argv) {
    //Declare variables
    
    int hrswrkd;
    float PayRate, Paychk;
    
    //Input data
    cout<<"The program calculates your paycheck based on your total hours."<<endl;
    cout<<"Type in how many hours you have worked"<<endl;
    cin>>hrswrkd;
    cout <<"Type in your pay rate:" << endl;
    cin >> PayRate;
    
    if ( hrswrkd > 40)
    {
        Paychk = (PayRate*40) + 2*PayRate*(hrswrkd-40);
                cout << "Your paycheck is $" <<  Paychk << endl;
    } 
    else                
    
        Paychk = (PayRate*hrswrkd);
     cout << "Your paycheck is $" <<  Paychk << endl;
    //Exit stage right!
    return 0;
}