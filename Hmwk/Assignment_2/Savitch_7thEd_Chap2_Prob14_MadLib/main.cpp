/* 
Antonio Tafoya
 * CSC-5 42641
 * Problem 10
 * Created: 3/14/2017 
 * Directions: Write a program that plays the game of Mad Lib.
 */
#include <string>
#include <iostream>
using namespace std;
int main() {

    string ProfName, UserName, Adj, Color, Animal;
    int Number100_120;
            
    cout << "This the Mad-Lib game program. \n";
    cout << "Type the first or last-name of your professor then hit enter:\n";
    cin >> ProfName;
    cout << "Type in your name:\n";
    cin >> UserName;
    cout << "Put in a number from 100 - 120:\n";
    cin >> Number100_120;
    cout << "Insert an adjective then hit enter: \n";
    cin >> Adj;
    cout << "Type in a Color:\n";
    cin >> Color;
    cout << "Type in an Animal name: \n";
            cin >> Animal; 
    cout << "Here is the story:\n" << " \n";
    
    cout << "Dear Instructor " << ProfName << ",\n" << " \n";
cout << "I am sorry that I am unable to turn in my homework at this time.\n";
cout << "First, I ate a rotten." << Animal << " which made me turn " << Color << "and "
            "extremely ill.\n"; 
cout << "I came down with a fever of " << Number100_120 << "." << endl;
cout << " Next, my pet " << Animal << "must have smelled the remains\n";
cout << "of the " << Animal << " on my homework, because he ate it. I am currently\n";
cout << "rewriting my homework and hope you will accept it late.\n" <<
    "\n";
cout << "Sincerely,\n" << "\n";
     

cout << UserName << endl;
            
    
   

return 0;

}
