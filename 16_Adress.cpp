 /*
TSDL ASSIGNMENT 
practice Q16
C++ Program To Find The Address Of Variable
Merwin Pinto
202100102
Div D , D1 batch
*/
#include <iostream>

using namespace std;
int main() 
{

   int x;
   int *ptr;

   cout << "Finding Address  of variable a" <<endl;
   x=50;
   ptr = &x;

    cout << "Address of x = " << x <<endl;      //the memory address  remain same as ptr = &x 
    cout << "Address of ptr = " << ptr <<endl;    // and x is stored in user
    cout << "Address of &ptr = " << &ptr <<endl;  //&ptr address is different because is is stored in user 
    cout << "Address of *ptr = " << *ptr <<endl; //*ptr directly goes to address x ie 50 as it is pointing to x value &x

   return 0;
}
 
