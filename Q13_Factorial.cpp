/*
TSDL ASSIGNMENT 
practice Q13
//C++ Program To Calculate Factorial Of A Given Number
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
using namespace std;
int main()
{
    int i=1,factorial =1,num;
    //i = 0 because factorial never ends in 0
    cout << "Hi Welcome To factorial calculator machine ! " <<endl;
    cout << "Enter a positive Integer : ";
    cin >> num;
    for (i=1 ;i<= num ;i++)
    {
        factorial = factorial * i;      
    }
    cout << "The  number is = " << num <<endl;
    cout << "its factorial is given below " <<endl;
    cout << num <<" ! " << " = "<< factorial <<endl ;
 return 0;
}