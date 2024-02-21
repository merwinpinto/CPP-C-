/*
TSDL ASSIGNMENT 
practice Q3
C++ Program To calculate area of a triangle
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
using namespace std;
int main()
{
    float base , height ;

    cout << "Welcome to Triangle Area Calculator " << endl;
    cout << "please enter base and height measurements "<< endl;
    
    cout << "Enter base measurement (cm) :";
    cin  >>  base;

    cout << "Enter height measurement (cm)  :";
    cin  >> height;
    
    cout << endl;
    cout << "the formula for calculating area of triangle is  " << endl;
    cout << "triangle area = 1/2 x base x height " << endl;
    
    cout << "the area of triangle is : "<< 0.5 * base * height;
    
    return 0;
}
