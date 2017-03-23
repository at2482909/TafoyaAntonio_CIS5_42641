/*
 
 Antonio Tafoya
 *
 *Class: Dr.Lehr, CSC-5 42641
 * 3/19/2017
 * 
 * Directions: 
 
 
 */
#include <string>
#include <iostream>
using namespace std;

int main() 
{
    int shape;
    float AreaTri, AreaCir, AreaRec, radius, Length_R, Width_R, Tbase, Theight;
    cout << "Enter the number on the menu according to the shape\n "
            <<"you wish to find the area of: \n"
            << "1. Area of a Circle. \n"
            << "2. Area of a Rectangle \n"
            << "3. Area of a Triangle.\n "
            << "4. Quit \n" << endl;
    cin >> shape;
    
    switch (shape)
    {    case 1:         
            cout << "What is the radius of the circle?" << endl;
            cin >> radius;
            AreaCir = 3.14 * (radius*radius);
            cout << AreaCir << " units squared" << endl;             
            break;
        case 2:        
            cout << "What is the length of the rectangle ?" << endl;
            cin >> Length_R;
            cout << "What is the width of the rectangle ?" << endl;
            cin >> Width_R;
            AreaRec = Length_R * Width_R;
            cout << AreaRec << " units squared" << endl;
            break;
        case 3:    
            cout << "What is the base of the triangle \n?";
            cin >> Tbase;
            cout << "What is the height of the triangle ?";
            cin >> Theight;
            AreaTri = Tbase * Theight *.5;
                    cout << AreaTri << " units squared" << endl;
                    break;
        case 4: 
            cout << "Goodbye" << endl;
            break;
        default: 
                    cout << "error" << endl;
         
    }
                    
    return 0;
    
}