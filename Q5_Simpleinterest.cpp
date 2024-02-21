/*
TSDL ASSIGNMENT 
practice Q5
C++ Program For Calculate A Simple Interest
Merwin Pinto
202100102
Div D , D1 batch
*/
#include<iostream>
using namespace std;

int main()
{
    int principal;
    float rate;
    int time;
    float Simple_interest;
    cout << "Welcome to the Simple interest Calculator" <<endl;
    cout << "Kindly Enter the following details  "<< endl;
    cout << "Principal Amount" << endl <<"Rate of Interest "<<endl << "Time Interval" <<endl;
    cout << endl;
    cout << "Enter principal amount : ";
    cin >> principal ;
    cout << "Enter rate of interest : ";
    cin >> rate ;
    cout << "Enter Time interval ( in years ) : ";
    cin >> time ;
    cout << endl;
    cout << "The formula for Simple interest =  Principal x Rate x Time / 100 " << endl;
    Simple_interest =principal*rate*time/ 100;
    cout << "The Simple interest calculated is " << Simple_interest <<endl; 
    return 0;
}

