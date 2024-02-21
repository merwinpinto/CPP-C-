
//Merwin Pinto
//202100102
//Div D : D1 batch
#include<iostream>
#include<conio.h>
#include<string>
#include<fstream>

using namespace std;

class vehicle_information
{
    private :
    string name;
    string type;
    string company;
    unsigned int capacity;
    float mileage;

    public :
    void getdata()
    {
        name = a.name;
    }
}a[5];

int main()
{
    int i,j;
    ofstream data_file;
    data_file.open("Vehicle_data.txt");
    data_file << "Saving to file called Vehicle_data" << endl;
    cout << "Enter No of vehicles :";
    cin >> j ;
    cout<< endl;
    
for(i=0 ; i<j ; i++)
{
    cout << "Enter car name : ";
    cin  >> a[i].name;
    
    cout << "Enter car type :";
    cin  >> a[i].type;
    
    cout << "Enter car comapany name : ";
    cin  >> a[i].company;
    
    cout << "Enter car capacity in cc : ";
    cin  >> a[i].capacity;
    
    cout << "Enter car mileage :";
    cin  >> a[i].mileage;
    cout << endl;
}

for(i=0 ; i<j ; i++)
{
    data_file << endl;
    data_file << "Data Available " <<endl;
    data_file << "Car name is :" << a[i].name << endl;
    data_file << "Car type is :" << a[i].type << endl  ;
    data_file << "Car comapany name is :" << a[i].company << endl;
    data_file << "Car capacity in cc :" << a[i].capacity << endl;
    data_file << "Car mileage is :" << a[i].mileage << endl;
}

data_file << endl << "Data successfully saved";

    return 0;
}


 
