#include <iostream>
#include <fstream>
#include <string>
using namespace std;

fstream myfile("myfile1.txt");

int search(int id)
{
    string x, id2, temp2;
    int pos2 = 0;
    int temp = 0;

    myfile.seekg(0, ios::beg);
    getline(myfile, x, '\n');
    pos2 = myfile.tellg();
    id2 = to_string(id);

    while (!myfile.eof())
    {

        pos2 = myfile.tellg();
        getline(myfile, temp2, ',');

        if (temp2 == id2)
        {
            return pos2;
        }

        getline(myfile, x, '\n');
    }
    return 0;
}

class vehicleinfo
{

    int cc, mil;
    string name, type, cname;

public:
    int getCC()
    {
        return cc;
    }
    void setCC(int c)
    {
        cc = c;
    }
    void setname(string x)
    {
        cin.ignore();
        getline(cin, x);

        name = x;
        if (name == "ab")
            exit(0);
    }

    string getname()
    {
        return name;
    }
    void settype(string x)
    {
        getline(cin, x);

        type = x;
    }

    string gettype()
    {
        return type;
    }
    void setcname(string x)
    {
        getline(cin, x);

        cname = x;
    }

    string getcname()
    {
        return cname;
    }

    void setcc(int x)
    {

        cc = x;
    }

    int getcc()
    {
        return cc;
    }
    void setmil(int x)
    {

        mil = x;
    }

    int getmil()
    {
        return mil;
    }
};

void error2()
{
    cout << "No Data found";
}

void modify(int id)
{
    int pos, pos2;
    int sr, temp = 0;

    myfile.seekg(0, ios::end);
    int tell;
    tell = myfile.tellg();

    if (tell == 0)
        error2();

    else
    {
        cout << "\nMODIFY DATA\n";
        cout << "Enter ID : ";
        cin >> id;
        temp = search(id);
        if (temp == 0)
            cout << "INVALID ID";
        else
        {
            string n1, n2, n3, i1, i2, i3;
            myfile.seekg(temp);
            getline(myfile, i1, ',');
            getline(myfile, n1, ',');
            getline(myfile, n2, ',');
            getline(myfile, n3, ',');
            getline(myfile, i2, ',');
            getline(myfile, i3, '\n');
            
            cout << "Press 1 to modify Name\n";
            cout << "Press 2 to modify Type\n";
            cout << "Press 3 to modify Company Name\n";
            cout << "Press 4 to modify CC\n";
            cout << "Press 5 to modify Milage\n";
            cout << "=> ";
            cin >> sr;
            switch (sr)
            {
            case 1:
                cout << "Name: ";
                cin >> n1;
                break;

            case 2:
                cout << "Type: ";
                cin >> n2;
                break;

            case 3:
                cout << "Company Name: ";
                cin >> n3;
                break;

            case 4:
                cout << "Capacity in CC: ";
                cin >> i2;
                break;

            case 5:
                cout << "Milage: ";
                cin >> i3;
                break;
            }

            myfile.seekg(temp);
            myfile << "#";

            myfile.seekg(0, ios::end);
            myfile << i1 << "," << n1 << "," << n2 << "," << n3 << "," << i2 << "," << i3 << "\n";

            temp = 0;

            cout << "\nData Modified Successfully\n";
        }
    }
}

void insert(int id)
{
    vehicleinfo b;

    string a;
    int bo;
    int tell;

    myfile.seekg(0, ios::end);
    tell = myfile.tellg();
    if (tell == 0)
    {
        id = 1;
        myfile.seekg(0, ios::beg);
        myfile << "1"
               << "\n";
    }
    else
    {
        myfile.seekg(0, ios::beg);
        myfile >> id;
        id++;
        myfile.seekg(0, ios::beg);
        myfile << id;
    }

    myfile.seekg(0, ios::end);

    cout << "Enter the information of your vehicle\n ";

    cout << "id : " << id;
    myfile << id << ",";
    cout << "\nName: ";
    b.setname(a);
    myfile << "\nName: "<< b.getname();
    myfile << ",";

    cout << "Type: ";
    b.settype(a);
    myfile << "Type: "<< b.gettype();
    myfile << ",";

    cout << "Company Name: ";
    b.setcname(a);
    myfile << "Company Name: "<< b.getcname();
    myfile << ",";

    cout << "Capacity in CC: ";
    cin >> bo;
    b.setcc(bo);
    myfile  << "Capacity in CC: "<< b.getcc();

    cout << "Milage: ";
    myfile << "Milage: " << ",";
    cin >> bo;
    b.setmil(bo);

    myfile << b.getmil();
    myfile << "\n";
}

void view(int id)
{
    int pos, temp = 0, pos2;
    string n1, n2, n3, i1, i2, i3;
    myfile.seekg(0, ios::end);
    int tell;
    tell = myfile.tellg();

    if (tell == 0)
        error2();

    else
    {
        cout << "\nVIEW DATA\n";
        cout << "Enter ID : ";
        cin >> id;

        temp = search(id);

        if (temp == 0)
            cout << "INVALID ID";

        else
        {

            myfile.seekg(temp);

            getline(myfile, i1, ',');
            getline(myfile, n1, ',');
            getline(myfile, n2, ',');
            getline(myfile, n3, ',');
            getline(myfile, i2, ',');
            getline(myfile, i3, '\n');

            cout << "Name : " << n1 << "\n";
            cout << "Type : " << n2 << "\n";
            cout << "Company Name : " << n3 << "\n";
            cout << "Capacity in CC : " << i2 << "\n";
            cout << "Milage : " << i3 << "\n\n";
        }
    }
}

void del(int id)
{
    int pos2, temp;

    myfile.seekg(0, ios::end);

    int tell;
    tell = myfile.tellg();

    if (tell == 0)
        error2();

    else
    {

        cout << "\nDELETE DATA\n";
        cout << "Enter ID : ";
        cin >> id;

        temp = search(id);

        if (temp == 0)
            cout << "INVALID ID";

        else
        {

            myfile.seekg(temp);
            myfile << "#";
            cout << "\nData Deleted\n";
        }
    }
}

int main()
{

    myfile.open("myfile1.txt", ios::out);
    myfile.close();

    myfile.open("myfile1.txt", ios::out | ios::in);

    myfile.seekg(0, ios::end);
    int tell;
    tell = myfile.tellg();

    int home = 0;
    vehicleinfo b;
    string a, x;
    int bo;
    int pos, pos2;

    string temp2, id2;
    int id, sr, temp = 0;

    while (home != 5)
    {
        cout << "\nHOME\n";

        cout << "press 1 to insert data";
        cout << "\npress 2 to modify data";
        cout << "\npress 3 to delete data";
        cout << "\npress 4 to view data";
        cout << "\npress 5 to exit";
        cout << "\n\nOption : ";
        cin >> home;

        if (home == 1)
        {
            cout << "\nINSERT DATA\n";
            insert(id);
        }
        else if (home == 2)
        {
            modify(id);
        }
        else if (home == 3)
        {
            del(id);
        }
        else if (home == 4)
        {
            view(id);
        }
    }

    cout << "\nEND OF PROGRAM\n";

    myfile.close();
    return 0;
}
