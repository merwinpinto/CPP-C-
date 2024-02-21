/*
TSDL ASSIGNMENT 
practice Q1
Finding Area and circumference of a circle using C++
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
using namespace std;
int main()
{
    int area,circumference;
    int option;
    float radius;

    cout <<  " Welcome to Circle area , Circumference Calculator " << endl ;
    cout <<  "Enter Radius of circle ( cm ): ";
    cin  >>  radius ;
    cout <<  endl;
    cout <<  "Enter the options  for calculating AREA or Circumference of a Circle" << endl;
    cout <<  "Enter Option 1 for Area " <<endl;
    cout <<  "Enter Option 2 for Circumference" <<endl;
    cout <<  "Enter Option 3 for Both area and circumference"  <<endl;
    cout <<  endl;
    cout <<  "Enter Option :";
    cin  >>  option;
    cout <<  endl;

    if(option == 1)
    {
        cout << "Calculating Area of Circle" <<endl;
        cout << "Formula = 3.142 x r^2" <<endl;
        cout << "The Area of the circle is :" << 3.14*radius*radius;
    }

    if(option == 2)
    {
        cout << "Calculating Circumference of Circle" <<endl;
        cout << "Formula = 2 x 3.142 x r" <<endl;
        cout << "The Circumference of the circle is :" << 2*3.14*radius; 
    }

    if(option == 3)
    {
        cout << "Calculating Area of Circle "<<endl;
        cout << "Formula = 3.142 x r^2" <<endl;
        cout << "The Area of the circle is :" << 3.14*radius*radius;
        cout << "\n\n";
        cout << "Calculating Circumference of Circle" <<endl;
        cout << "Formula = 2 x 3.142 x r" <<endl;
        cout << "The Circumference of the circle is :" << 2*3.14*radius; 
    }
return 0;   
}