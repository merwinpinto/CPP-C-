/*
TSDL ASSIGNMENT 
practice Q12
 C++ Program To Find Character Is Vowel Or Not
Merwin Pinto
202100102
Div D , D1 batch
*/

#include<iostream>
using namespace std;
int main()
{
    char character;

    cout << "Hi welcome to character Vowel checker !" <<endl;
    cout << "Enter a  Character (lower case)  : ";
    cin  >> character ; 
    if( character == 'a' || character == 'e' || character == 'i' || character == 'o'|| character == 'u')
    {
       cout << "The output character is a vowel " <<endl;
    }  
    else 
    {
        cout << "The output character is not a vowel" <<endl;
    }

}