/*
 Antonio Tafoya
 * CSC-5 42641
 * Problem 10
 * Created: 3/12/2017 17:17
 * Directions: Write a program that calculates both positive and negative 
 * numbers and outputs the 2 separate sums.The user entering the numbers should not enter negative or positive 
 * numbers separately.
 
 
 
 
 
 */

#include <iostream>
 using namespace std;
 int main( )
 
 {
 
     float Amount_Wanted, Amount_Wanted2, Duration, Interest, Actual_Loan, TotalLoan; 
 
 
 
     cout << "What is the amount needed for the loan? \n";
     cout << "Enter the amount, then hit enter:";
     cin >> Amount_Wanted;
     cout << "Confirm the amount:";
     cin >> Amount_Wanted2;
     cout << "What is the interest rate (put in decimal format) ?";
     cin >> Interest;
     cout << "What is the duration of the loan (in years) ?";
     cin >> Duration;
     
     Actual_Loan = (Amount_Wanted * Interest * Duration) + Amount_Wanted2;
     
     TotalLoan = Actual_Loan;
     
     cout << " ";
     cout << "The amount needed to borrow for discounted installment loan is:\n";
     cout << TotalLoan;
     
 
     
    return 0;
  
 }