/*
TSDL ASSIGNMENT 
practice Q15
//C++ Program To Swap Two Number Without Using Third Variable
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
using namespace std;
int main()
{
    int a,b;

    cout << "Swap the numbers without 3rd varibale !" <<endl;
    cout << "Enter a value for 'a' : ";
    cin >> a;
    cout << "the value of a = " <<a <<endl;
    cout <<endl;
    cout << "Enter a value for 'b' :";
    cin >> b;
    cout << "the value of b = " <<b <<endl;
    cout << endl;
    a=a+b;
    b=a-b;
    a=a-b;
    cout << endl;
    cout << "Elements swapped " <<endl;
    cout << "value of 'a' assigned sucessfully to 'b' "<<endl;
    cout << "value of 'b' sucessfully assigned to 'a' "<<endl;
    cout << "_________Output__________ " <<endl; 
    cout << "a = " << a <<endl;
    cout << "b = " << b ;
    return 0;
}