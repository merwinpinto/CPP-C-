/*
TSDL ASSIGNMENT 
practice Q11
C++ Program To Check Number Is Positive Or Negative
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
using namespace std;
int main()
{
    int number;

    cout <<"Welcome to Postive - negative number detecting Algorithm"<< endl;
    cout <<"Enter an Integer : ";
    cin >> number;

    if (number >= 0)
    {
        cout << "the Entered number is postive ";
    }
    else
    {
        cout << "The Entered number is negative ";
    }
    return 0;
}

