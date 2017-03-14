/*
 Antonio Tafoya
 * CSC-5 42641
 * Problem 5
 * Created: 3/12/2017 17:17
 * Directions: Write a program that will express the amount due for a discounted
 * loan for the amount desired. Then express how much the monthly costs will for
 * loan.
 
 
 
 
 
 */

#include <iostream>
 using namespace std;
 int main( )
 
 {
 
     float Amount_Wanted, Amount_Wanted2, Duration, Interest, Actual_Loan, TotalLoan,
             MonthlyPay; 
 
 
 
     cout << "What is the amount needed for the loan? \n";
     cout << "Enter the amount, then hit enter:\n";
     cin >> Amount_Wanted;
     cout << "Confirm the amount:\n";
     cin >> Amount_Wanted2;
     cout << "What is the interest rate (put in decimal format) ?\n";
     cin >> Interest;
     cout << "What is the duration of the loan (in years decimal format) ?\n";
     cin >> Duration;
     
     Actual_Loan = (Amount_Wanted * Interest * Duration) + Amount_Wanted2;
     
                       TotalLoan = Actual_Loan;
     
     cout << " ";
     cout << "The amount needed to borrow for discounted installment loan is:\n";
     
                        cout << TotalLoan;
     cout.setf(ios::fixed);
     cout.setf(ios::showpoint);
     cout.precision(2);
    
     cout << "The monthly payment of this loan will be: \n";
     MonthlyPay = Amount_Wanted2/ (Duration*12);
         cout << MonthlyPay << "a month \n";
     
     
     return 0;
  
 }