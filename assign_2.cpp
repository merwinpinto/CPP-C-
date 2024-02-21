#include <iostream>
#include <string>
#include <fstream>
using namespace std;

class Comp
{
private:
    string type, procc, ram, hdd, usb, hdmi, batt;

public:
    void set_tp(string tp)
    {
        type = tp;
    }

    void set_pro(string pro)
    {
        procc = pro;
    }

    void set_ram(string RAM)
    {
        ram = RAM;
    }

    void set_hdd(string hd)
    {
        hdd = hd;
    }

    void set_usb(string USB)
    {
        usb = USB;
    }

    void set_hdmi(string HDMI)
    {
        hdmi = HDMI;
    }

    void set_bat(string bat)
    {
        batt = bat;
    }

    string get_tp()
    {
        return type;
    }

    string get_pro()
    {
        return procc;
    }

    string get_ram()
    {
        return ram;
    }

    string get_hdd()
    {
        return hdd;
    }

    string get_usb()
    {
        return usb;
    }

    string get_hdmi()
    {
        return hdmi;
    }

    string get_bat()
    {
        return batt;
    }
};

class Details : public Comp
{
private:
    string name, mobile, email, date, quantity;

public:
    void set_name(string Name)
    {
        name = Name;
    }

    void set_mobile(string Num)
    {
        mobile = Num;
    }

    void set_email(string mail)
    {
        email = mail;
    }

    void set_date(string Date)
    {
        date = Date;
    }

    void set_quan(string quan)
    {
        quantity = quan;
    }

    string get_name()
    {
        return name;
    }

    string get_mobile()
    {
        return mobile;
    }

    string get_email()
    {
        return email;
    }

    string get_date()
    {
        return date;
    }

    string get_quan()
    {
        return quantity;
    }
};

void read()
{
    ifstream file;
    file.open("Computer_Details.txt");
    file.seekg(0, ios::beg);
    string line;

    while (getline(file, line))
    {
        cout << line << endl;
    }
}

void modify(Details d[], int num, int pur)
{
    string type, procc, ram, hdd, usb, hdmi, batt;
    string name, mobile, email, date, quantity;
    int i, r, n;

    cout << "Record number to modify: ";
    cin >> r;
    cout << "\nTYPE (1)\nPROCESSOR (2)\nRAM (3)\nHARD DISK SIZE (4)\nUSB PORTS (5)\nHDMI PORTS (6)\nBATTERY LIFE (7)\nNAME (8)\nMOBILE NUMBER (9)\nEMAIL ID (10)\nDATE OF PURCHASE(11)\nQUANTITY (12)\nEnter your responce: ";
    cin >> n;

    if (pur == 1)
    {
        switch (n)
        {
        case 1:
            cout << "Enter new type: ";
            cin >> type;
            d[(r - 1)].set_tp(type);
            break;

        case 2:
            cout << "Enter new processor: ";
            cin >> procc;
            d[(r - 1)].set_pro(procc);
            break;

        case 3:
            cout << "Enter new RAM: ";
            cin >> ram;
            d[(r - 1)].set_ram(ram);
            break;

        case 4:
            cout << "Enter new hard disk size: ";
            cin >> hdd;
            d[(r - 1)].set_hdd(hdd);
            break;

        case 5:
            cout << "Enter new USB ports: ";
            cin >> usb;
            d[(r - 1)].set_usb(usb);
            break;

        case 6:
            cout << "Enter new HDMI ports: ";
            cin >> hdmi;
            d[(r - 1)].set_hdmi(hdmi);
            break;

        case 7:
            cout << "Enter new battery life: ";
            cin >> batt;
            d[(r - 1)].set_bat(batt);
            break;

        case 8:
            cout << "Enter new name: ";
            cin >> name;
            d[(r - 1)].set_name(name);
            break;

        case 9:
            cout << "Enter new mobile number: ";
            cin >> mobile;
            d[(r - 1)].set_mobile(mobile);
            break;

        case 10:
            cout << "Enter new emial ID: ";
            cin >> email;
            d[(r - 1)].set_email(email);
            break;

        case 11:
            cout << "Enter new date of purchase: ";
            cin >> date;
            d[(r - 1)].set_date(date);
            break;

        case 12:
            cout << "Enter new quantity: ";
            cin >> quantity;
            d[(r - 1)].set_quan(quantity);
            break;

        default:
            break;
        }

        ofstream temp;
        temp.open("temp.txt");

        for (i = 0; i < num; i++)
        {
            temp << "\n===== RECORD NUMBER " << i + 1 << " =====\n";
            temp << "Type of computer: " << d[i].get_tp() << endl;
            temp << "Processor of computer: " << d[i].get_pro() << endl;
            temp << "RAM of computer: " << d[i].get_ram() << " GB" << endl;
            temp << "Hard Disk capacity of computer: " << d[i].get_hdd() << " GB" << endl;
            temp << "Number of USB ports: " << d[i].get_usb() << endl;
            temp << "Number of HDMI ports: " << d[i].get_hdmi() << endl;
            temp << "Battery life: " << d[i].get_bat() << " Hours" << endl;
            temp << "Name of preson: " << d[i].get_name() << endl;
            temp << "Mobile number of person: " << d[i].get_mobile() << endl;
            temp << "Email Id of person: " << d[i].get_email() << endl;
            temp << "Purchase date: " << d[i].get_date() << endl;
            temp << "Quantity: " << d[i].get_quan() << endl;
        }
        temp.close();
        remove("Computer_Details.txt");
        rename("temp.txt", "Computer_Details.txt");
    }

    else if (pur == 2)
    {
        switch (n)
        {
        case 1:
            cout << "Enter new type: ";
            cin >> type;
            d[(r - 1)].set_tp(type);
            break;

        case 2:
            cout << "Enter new processor: ";
            cin >> procc;
            d[(r - 1)].set_pro(procc);
            break;

        case 3:
            cout << "Enter new RAM: ";
            cin >> ram;
            d[(r - 1)].set_ram(ram);
            break;

        case 4:
            cout << "Enter new hard disk size: ";
            cin >> hdd;
            d[(r - 1)].set_hdd(hdd);
            break;

        case 5:
            cout << "Enter new USB ports: ";
            cin >> usb;
            d[(r - 1)].set_usb(usb);
            break;

        case 6:
            cout << "Enter new HDMI ports: ";
            cin >> hdmi;
            d[(r - 1)].set_hdmi(hdmi);
            break;

        case 7:
            cout << "Enter new battery life: ";
            cin >> batt;
            d[(r - 1)].set_bat(batt);
            break;

        case 8:
            cout << "Enter new name: ";
            cin >> name;
            d[(r - 1)].set_name(name);
            break;

        case 9:
            cout << "Enter new mobile number: ";
            cin >> mobile;
            d[(r - 1)].set_mobile(mobile);
            break;

        case 10:
            cout << "Enter new emial ID: ";
            cin >> email;
            d[(r - 1)].set_email(email);
            break;

        case 11:
            cout << "Enter new date of purchase: ";
            cin >> date;
            d[(r - 1)].set_date(date);
            break;

        case 12:
            cout << "Enter new quantity: ";
            cin >> quantity;
            d[(r - 1)].set_quan(quantity);
            break;

        default:
            break;
        }

        ofstream temp;
        temp.open("temp.txt");

        for (i = 0; i < num; i++)
        {
            temp << "\n===== RECORD NUMBER " << i + 1 << " =====\n";
            temp << "Type of computer: " << d[i].get_tp() << endl;
            temp << "Processor of computer: " << d[i].get_pro() << endl;
            temp << "RAM of computer: " << d[i].get_ram() << " GB" << endl;
            temp << "Hard Disk capacity of computer: " << d[i].get_hdd() << " GB" << endl;
            temp << "Number of USB ports: " << d[i].get_usb() << endl;
            temp << "Number of HDMI ports: " << d[i].get_hdmi() << endl;
            temp << "Battery life: " << d[i].get_bat() << " Hours" << endl;
            temp << "Name of company: " << d[i].get_name() << endl;
            temp << "Mobile number of company: " << d[i].get_mobile() << endl;
            temp << "Email Id of company: " << d[i].get_email() << endl;
            temp << "Purchase date: " << d[i].get_date() << endl;
            temp << "Quantity: " << d[i].get_quan() << endl;
        }
        temp.close();
        remove("Computer_Details.txt");
        rename("temp.txt", "Computer_Details.txt");
    }
}

void add(Details d[], int *num, int pur)
{

    string type, procc, ram, hdd, usb, hdmi, batt;
    string name, mobile, email, date, quantity;

    if (pur == 1)
    {
        cout << "\nRECORD NUMBER " << (*num + 1) << endl;
        cout << "Enter computer type: ";
        cin >> type;
        cout << "Enter processor: ";
        cin >> procc;
        cout << "Enter RAM in GB: ";
        cin >> ram;
        cout << "Enter Hard Disk capacity in GB: ";
        cin >> hdd;
        cout << "Enter total number of USB ports: ";
        cin >> usb;
        cout << "Enter total number of HDMI ports: ";
        cin >> hdmi;
        if (type == "Laptop" || type == "laptop")
        {
            cout << "Enter battery life in hours: ";
            cin >> batt;
        }
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the mobile number: ";
        cin >> mobile;
        cout << "Enter the email ID: ";
        cin >> email;
        cout << "Enter the date of purchase: ";
        cin >> date;
        cout << "Enter the quantity: ";
        cin >> quantity;

        d[*num].set_tp(type);
        d[*num].set_pro(procc);
        d[*num].set_ram(ram);
        d[*num].set_hdd(hdd);
        d[*num].set_usb(usb);
        d[*num].set_hdmi(hdmi);
        if (type == "Laptop" || type == "laptop")
        {
            d[*num].set_bat(batt);
        }
        d[*num].set_name(name);
        d[*num].set_mobile(mobile);
        d[*num].set_email(email);
        d[*num].set_date(date);
        d[*num].set_quan(quantity);

        fstream file;
        file.open("Computer_Details.txt", ios::app);

        file << "\n===== RECORD NUMBER " << (*num + 1) << " =====\n";
        file << "Type of computer: " << d[*num].get_tp() << endl;
        file << "Processor of computer: " << d[*num].get_pro() << endl;
        file << "RAM of computer: " << d[*num].get_ram() << " GB" << endl;
        file << "Hard Disk capacity of computer: " << d[*num].get_hdd() << " GB" << endl;
        file << "Number of USB ports: " << d[*num].get_usb() << endl;
        file << "Number of HDMI ports: " << d[*num].get_hdmi() << endl;
        if (type == "Laptop" || type == "laptop")
        {
            file << "Battery life: " << d[*num].get_bat() << " Hours" << endl;
        }
        file << "Name of person: " << d[*num].get_name() << endl;
        file << "Mobile number of person: " << d[*num].get_mobile() << endl;
        file << "Email Id of person: " << d[*num].get_email() << endl;
        file << "Purchase date: " << d[*num].get_date() << endl;
        file << "Quantity: " << d[*num].get_quan() << endl;

        file.close();

        *num = *num + 1;
    }

    else if (pur == 2)
    {
        cout << "\nRECORD NUMBER " << (*num + 1) << endl;
        cout << "Enter computer type: ";
        cin >> type;
        cout << "Enter processor: ";
        cin >> procc;
        cout << "Enter RAM in GB: ";
        cin >> ram;
        cout << "Enter Hard Disk capacity in GB: ";
        cin >> hdd;
        cout << "Enter total number of USB ports: ";
        cin >> usb;
        cout << "Enter total number of HDMI ports: ";
        cin >> hdmi;
        if (type == "Laptop" || type == "laptop")
        {
            cout << "Enter battery life in hours: ";
            cin >> batt;
        }
        cout << "Enter the name: ";
        cin >> name;
        cout << "Enter the mobile number: ";
        cin >> mobile;
        cout << "Enter the email ID: ";
        cin >> email;
        cout << "Enter the date of purchase: ";
        cin >> date;
        cout << "Enter the quantity: ";
        cin >> quantity;

        d[*num].set_tp(type);
        d[*num].set_pro(procc);
        d[*num].set_ram(ram);
        d[*num].set_hdd(hdd);
        d[*num].set_usb(usb);
        d[*num].set_hdmi(hdmi);
        if (type == "Laptop" || type == "laptop")
        {
            d[*num].set_bat(batt);
        }
        d[*num].set_name(name);
        d[*num].set_mobile(mobile);
        d[*num].set_email(email);
        d[*num].set_date(date);
        d[*num].set_quan(quantity);

        fstream file;
        file.open("Computer_Details.txt", ios::app);

        file << "\n===== RECORD NUMBER " << (*num + 1) << " =====\n";
        file << "Type of computer: " << d[*num].get_tp() << endl;
        file << "Processor of computer: " << d[*num].get_pro() << endl;
        file << "RAM of computer: " << d[*num].get_ram() << " GB" << endl;
        file << "Hard Disk capacity of computer: " << d[*num].get_hdd() << " GB" << endl;
        file << "Number of USB ports: " << d[*num].get_usb() << endl;
        file << "Number of HDMI ports: " << d[*num].get_hdmi() << endl;
        if (type == "Laptop" || type == "laptop")
        {
            file << "Battery life: " << d[*num].get_bat() << " Hours" << endl;
        }
        file << "Name of company: " << d[*num].get_name() << endl;
        file << "Mobile number of company: " << d[*num].get_mobile() << endl;
        file << "Email Id of company: " << d[*num].get_email() << endl;
        file << "Purchase date: " << d[*num].get_date() << endl;
        file << "Quantity: " << d[*num].get_quan() << endl;

        file.close();

        *num = *num + 1;
    }
}

void del(Details d[], int num, int pur)
{
    int i = 0;
    int rec;

    cout << "Enter record number to delete: ";
    cin >> rec;

    ofstream temp;
    temp.open("temp.txt");

    if (pur == 1)
    {
        while (i < num)
        {
            if (rec != (i + 1))
            {
                temp << "\n===== RECORD NUMBER " << i + 1 << " =====\n";
                temp << "Type of computer: " << d[i].get_tp() << endl;
                temp << "Processor of computer: " << d[i].get_pro() << endl;
                temp << "RAM of computer: " << d[i].get_ram() << " GB" << endl;
                temp << "Hard Disk capacity of computer: " << d[i].get_hdd() << " GB" << endl;
                temp << "Number of USB ports: " << d[i].get_usb() << endl;
                temp << "Number of HDMI ports: " << d[i].get_hdmi() << endl;
                temp << "Battery life: " << d[i].get_bat() << " Hours" << endl;
                temp << "Name of person: " << d[i].get_name() << endl;
                temp << "Mobile number of person: " << d[i].get_mobile() << endl;
                temp << "Email Id of person: " << d[i].get_email() << endl;
                temp << "Purchase date: " << d[i].get_date() << endl;
                temp << "Quantity: " << d[i].get_quan() << endl;
            }
            i++;
        }

        remove("Computer_Details.txt");
        rename("temp.txt", "Computer_Details.txt");
    }

    else if (pur == 2)
    {
        while (i < num)
        {
            if (rec != (i + 1))
            {
                temp << "\n===== RECORD NUMBER " << i + 1 << " =====\n";
                temp << "Type of computer: " << d[i].get_tp() << endl;
                temp << "Processor of computer: " << d[i].get_pro() << endl;
                temp << "RAM of computer: " << d[i].get_ram() << " GB" << endl;
                temp << "Hard Disk capacity of computer: " << d[i].get_hdd() << " GB" << endl;
                temp << "Number of USB ports: " << d[i].get_usb() << endl;
                temp << "Number of HDMI ports: " << d[i].get_hdmi() << endl;
                temp << "Battery life: " << d[i].get_bat() << " Hours" << endl;
                temp << "Name of company: " << d[i].get_name() << endl;
                temp << "Mobile number of company: " << d[i].get_mobile() << endl;
                temp << "Email Id of company: " << d[i].get_email() << endl;
                temp << "Purchase date: " << d[i].get_date() << endl;
                temp << "Quantity: " << d[i].get_quan() << endl;
            }
            i++;
        }

        remove("Computer_Details.txt");
        rename("temp.txt", "Computer_Details.txt");
    }
}

int main()
{
    string type, procc, ram, hdd, usb, hdmi, batt;
    string name, mobile, email, date, quantity;
    int num, resp, pur;
    int i;
    int pa[10] = {0};

    Details D[10];

    cout << "\nHow many COMPUTER DETAILS you want to add: ";
    cin >> num;

    ofstream file;
    file.open("Computer_Details.txt");

    cout << "\nFor Individual (1)\nFor Company (2)\nEnter your responce: ";
    cin >> pur;

    for (i = 0; i < num; i++)
    {

        if (pur == 1)
        {
            cout << "\nRECORD NUMBER " << i + 1 << endl;
            cout << "Enter computer type: ";
            cin >> type;
            cout << "Enter processor: ";
            cin >> procc;
            cout << "Enter RAM in GB: ";
            cin >> ram;
            cout << "Enter Hard Disk capacity in GB: ";
            cin >> hdd;
            cout << "Enter total number of USB ports: ";
            cin >> usb;
            cout << "Enter total number of HDMI ports: ";
            cin >> hdmi;
            if (type == "Laptop" || type == "laptop")
            {
                cout << "Enter battery life in hours: ";
                cin >> batt;
            }
            cout << "Enter the name of person: ";
            cin >> name;
            cout << "Enter the mobile number of person: ";
            cin >> mobile;
            cout << "Enter the email ID of the person: ";
            cin >> email;
            cout << "Enter the date of purchase: ";
            cin >> date;
            cout << "Enter the quantity: ";
            cin >> quantity;

            D[i].set_tp(type);
            D[i].set_pro(procc);
            D[i].set_ram(ram);
            D[i].set_hdd(hdd);
            D[i].set_usb(usb);
            D[i].set_hdmi(hdmi);
            if (type == "Laptop" || type == "laptop")
            {
                D[i].set_bat(batt);
            }
            D[i].set_name(name);
            D[i].set_mobile(mobile);
            D[i].set_email(email);
            D[i].set_date(date);
            D[i].set_quan(quantity);

            file << "\n===== RECORD NUMBER " << i + 1 << " =====\n";
            file << "Type of computer: " << D[i].get_tp() << endl;
            file << "Processor of computer: " << D[i].get_pro() << endl;
            file << "RAM of computer: " << D[i].get_ram() << " GB" << endl;
            file << "Hard Disk capacity of computer: " << D[i].get_hdd() << " GB" << endl;
            file << "Number of USB ports: " << D[i].get_usb() << endl;
            file << "Number of HDMI ports: " << D[i].get_hdmi() << endl;
            if (type == "Laptop" || type == "laptop")
            {
                file << "Battery life: " << D[i].get_bat() << " Hours" << endl;
            }
            file << "Name of person: " << D[i].get_name() << endl;
            file << "Mobile number of person: " << D[i].get_mobile() << endl;
            file << "Email Id of person: " << D[i].get_email() << endl;
            file << "Purchase date: " << D[i].get_date() << endl;
            file << "Quantity: " << D[i].get_quan() << endl;
        }

        else if (pur == 2)
        {
            cout << "\nRECORD NUMBER " << i + 1 << endl;
            cout << "Enter computer type: ";
            cin >> type;
            cout << "Enter processor: ";
            cin >> procc;
            cout << "Enter RAM in GB: ";
            cin >> ram;
            cout << "Enter Hard Disk capacity in GB: ";
            cin >> hdd;
            cout << "Enter total number of USB ports: ";
            cin >> usb;
            cout << "Enter total number of HDMI ports: ";
            cin >> hdmi;
            if (type == "Laptop" || type == "laptop")
            {
                cout << "Enter battery life in hours: ";
                cin >> batt;
            }
            cout << "Enter the name of company: ";
            cin >> name;
            cout << "Enter the mobile number of company: ";
            cin >> mobile;
            cout << "Enter the email ID of the company: ";
            cin >> email;
            cout << "Enter the date of purchase: ";
            cin >> date;
            cout << "Enter the quantity: ";
            cin >> quantity;

            D[i].set_tp(type);
            D[i].set_pro(procc);
            D[i].set_ram(ram);
            D[i].set_hdd(hdd);
            D[i].set_usb(usb);
            D[i].set_hdmi(hdmi);
            if (type == "Laptop" || type == "laptop")
            {
                D[i].set_bat(batt);
            }
            D[i].set_name(name);
            D[i].set_mobile(mobile);
            D[i].set_email(email);
            D[i].set_date(date);
            D[i].set_quan(quantity);

            file << "\n===== RECORD NUMBER " << i + 1 << " =====\n";
            file << "Type of computer: " << D[i].get_tp() << endl;
            file << "Processor of computer: " << D[i].get_pro() << endl;
            file << "RAM of computer: " << D[i].get_ram() << " GB" << endl;
            file << "Hard Disk capacity of computer: " << D[i].get_hdd() << " GB" << endl;
            file << "Number of USB ports: " << D[i].get_usb() << endl;
            file << "Number of HDMI ports: " << D[i].get_hdmi() << endl;
            if (type == "Laptop" || type == "laptop")
            {
                file << "Battery life: " << D[i].get_bat() << " Hours" << endl;
            }
            file << "Name of company: " << D[i].get_name() << endl;
            file << "Mobile number of company: " << D[i].get_mobile() << endl;
            file << "Email ID of company: " << D[i].get_email() << endl;
            file << "Purchase date: " << D[i].get_date() << endl;
            file << "Quantity: " << D[i].get_quan() << endl;
        }
    }

    file.close();

    cout << "\nTo READ (1)\nTo MODIFY (2)\nTo ADD NEW DETAILS (3)\nTo EXIT (0)\nTo DELETE (4)\nEnter your responce: ";
    cin >> resp;

    while (resp != 0)
    {
        switch (resp)
        {
        case 1:
            read();
            cout << "\nTo READ (1)\nTo MODIFY (2)\nTo ADD NEW DETAILS (3)\nTo DELETE (4)\nTo EXIT (0)\nEnter your responce: ";
            cin >> resp;
            break;

        case 2:
            modify(D, num, pur);
            cout << "\nTo READ (1)\nTo MODIFY (2)\nTo ADD NEW DETAILS (3)\nTo DELETE (4)\nTo EXIT (0)\nEnter your responce: ";
            cin >> resp;
            break;

        case 3:
            add(D, &num, pur);
            cout << "\nTo READ (1)\nTo MODIFY (2)\nTo ADD NEW DETAILS (3)\nTo DELETE (4)\nTo EXIT (0)\nEnter your responce: ";
            cin >> resp;
            break;

        case 4:
            del(D, num, pur);
            cout << "\nTo READ (1)\nTo MODIFY (2)\nTo ADD NEW DETAILS (3)\nTo DELETE (4)\nTo EXIT (0)\nEnter your responce: ";
            cin >> resp;

        default:
            break;
        }
    }

    return 0;
}