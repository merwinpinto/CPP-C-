#include<iostream>
#include<fstream>
using namespace std;

class librarian_info
{
    public :
    char name[20];
    char qualification[10];
    char experience[40];
};

class student_info 
{
    public :
    char student_name[20];
    char department[30];
    int  Class;
    char division[10];
};

class book_info 
{
    public :
    char book_name[20];
    char author[20];
    char publication[20];
    int copies;
}book_info[10]; 

class book_issue : public book_info , public student_info 
{
  public :
  char book_issued_date[20];
  char book_returned_date[20];
  int damage;
  char Damage_to_book[10];
};

class library_info : public book_issue , public librarian_info 
{
}library[10];

int main()
{
    int i,j,books;
    ofstream data;
    data.open("Library_Data_information.txt");
    cout<<"Enter no of books student issued :";
    cin >> books;

    for(i=0;i<1;i++)
    {
    cout <<"____Library Info___"<<endl;
    cout << "Enter name of librarian : " ;
    cin >> library[i].name;
    cout << "Enter qualification  of librarian : " ;
    cin >> library[i].qualification;
    cout << "Enter  experience  of librarian : " ;
    cin >> library[i].experience;
    cout << endl;
    cout << "___Student Info_____"<<endl;
    cout << "Enter name of student : " ;
    cin >> library[i].student_name;
    cout << "Enter department of student : ";
    cin >> library[i].department;
    cout << "Enter class of student  : ";
    cin >> library[i].Class;
    cout << "Enter  division of student : ";
    cin >> library[i].division;
    cout <<endl;

       for(j=0;j<books;j++)
       {
        cout <<"____Book Info____: " << j+1 << endl;
        cout << "Enter name of book : " ;
        cin >> book_info[j].book_name;
        cout << "Enter author of book : " ;
        cin >> book_info[j].author;
        cout << "Enter publication  of book : " ;
        cin >> book_info[j].publication;
        cout << endl ;
       } 
       
     cout << "___Book issue Info___"<<endl;
     cout << "book issued date : ";
     cin >> library[i].book_issued_date;
     cout<<endl;
     cout << "book returned date : ";
     cin  >> library[i].book_returned_date;
     cout<<endl;
     cout <<"Enter 1 for YES "<<endl;
     cout <<"Enter 2 for NO "<<endl;
     cout <<"option : ";
     cin >> library[i].damage;
     cout << "Damage to book : ";
     if(library[i].damage == 1)
     {
         cout<<"YES";
      }
     if(library[i].damage ==2)
     {
         cout <<"NO";
     }
    }
    
    for(i=0;i<1;i++)
    {
    data <<"____Library Info___"<<endl;
    data << "Enter name of librarian :" << library[i].name << endl;
    data << "Enter qualification  of librarian :" <<library[i].qualification << endl;
    data << "Enter  experience  of librarian :" << library[i].experience << endl;
    data << endl;
    data << "___Student info_____"<<endl;
    data << "Enter name of student :"<<  library[i].student_name <<endl;
    data << "Enter department of student :"<< library[i].department <<endl;
    data << "Enter class of student  :"<< library[i].Class <<endl;
    data << "Enter  division of student :"<< library[i].division <<endl;
    data << endl;
    
       for(j=0;j<books;j++)
       {
        data <<"____Book info :" << j+1 <<"____"<<endl;
        data << "Enter name of book :" << book_info[j].book_name << endl;
        data << "Enter author of book :" << book_info[j].author << endl;
        data << "Enter publication  of book :" << book_info[j].publication <<endl;
        data  << "\n \n";
       }
       
     data << "___Book issue Info_____"<<endl;
     data << "book issued date :" << library[i].book_issued_date <<endl;
     data << "book returned date :" << library[i].book_returned_date <<endl;
     data <<"Enter 1 for YES "<<endl;
     data <<"Enter 2 for NO "<<endl;
     data <<"option : ";
     data << library[i].damage;
     data << endl;
     data << "Damage to book : ";
     if(library[i].damage == 1)
     {
         data<<"YES ";
      }
     if(library[i].damage ==2)
     {
         data <<"NO ";
     }
    }
return 0;
}