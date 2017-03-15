/*Antonio Tafoya
 * CSC-5 42641
 * Problem 5
 * Created: 3/15/2017 0
 * Directions: Write a program that checks if a party satisfy the max capacity
 * regulation.

 */


#include <iostream>
using namespace std;
int main() {

    int Pop,Pop_Leave;
    
    cout << "This program checks if the attending party breaches max capacity.\n";
    cout << "Insert how many people are expected to attend the venue:\n";
    cin >> Pop;
   
            
        if (160 <Pop)
        {
            cout << "Unfortunately Max Capacity has been breached\n";
            Pop_Leave = Pop - 160;
            cout << "Please exclude: " << Pop_Leave << " person(s).\n";
          
    
        }
    
        else
    {
            
            cout << "The party capacity is valid." << endl;
           
    }

return 0;
}


