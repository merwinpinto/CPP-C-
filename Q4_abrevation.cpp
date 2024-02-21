/*
TSDL ASSIGNMENT 
practice Q4
C++ Program to Convert a person's name in Abbreviated
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
using namespace std;
int main()
{
    char first_name[20];
    char middle_name[20];
    char last_name[20];
    cout<<"Enter First name , middle name and last name of person"<<endl;
    cout << "First name :";
    cin >> first_name;
    cout << "Middle name :";
    cin >> middle_name;
    cout << "Last name :";
    cin >> last_name;
    cout<<"Person's name in Abbreviated Form  ";
    //[0] is for the character to show only  Position 0 element in the array
cout<< "'  "<<first_name[0]<<"."<<" "<<middle_name[0]<<"."<<" "<<last_name[0]<< "  '"<<endl;     return 0;

}