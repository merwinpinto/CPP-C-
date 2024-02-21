/*
TSDL ASSIGNMENT 
practice Q14
C++ Program To Read Integer (N) And Print First Three Powers (N^1, N^2, N^3)
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
#include<conio.h>
#include<math.h>
using namespace std;
int main()
{
    int number,p,q,r;
    cout <<"Priting first 3 'N' powers "<<endl;
    cout << "Using power operator Pow(variable,n) where n is number of times multiplied" <<endl;
    cout << "Enter a number :";
    cin  >> number;
    p = pow(number,1);   // N =  pow(number,1)
    q = pow(number,2);   // N*N = pow(number,2)
    r = pow(number,3);   //N*N*N = pow(number,3)
    cout << " ( N , N*N , N*N*N )" <<endl;
    //cout << "( " << number <<" , " << number*number <<" , " << number*number*number << " )" <<endl;
    cout << " ( " << p <<" , " << q <<" , " << r << " )" <<endl; 
   
   return 0;
}
