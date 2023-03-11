#include <iostream>
#include <bits/stdc++.h>
#include <unistd.h>
#include <fstream>
#include <iomanip>
#include <windows.h>
using namespace std;
void menu();

class ManageMenu{
  protected:
  string userName;//hide adimin name
  public:
   ManageMenu(){
    system("color 0E");
    cout<<"\n\n\n\n\n\n\n\n\n\t Enter Your Name to Continue as an Admin: ";
    cin>>userName;
    system("CLS");
    menu();
   }
   ~ManageMenu(){}
};
class Customers
{
public:
    string name, gender, address;
    int age, mobile;
    static int custID;
    char all[999];

    void getdetails()
    {
        ofstream out("old-customer.txt", ios::app);
        {
            cout << "Enter Cutomer ID: ";
            cin >> custID;
            cout << "Enter Name: ";
            cin >> name;
            cout << "Enter Cutomer Age: ";
            cin >> age;
            cout << "Enter Mobile Number: ";
            cin >> mobile;
            cout << "Enter Address: ";
            cin >> address;
            cout << "Enter Gender: ";
            cin >> gender;
        }

        out << "\nCustomerID: " << custID << "\nName: " << name << "\nAge: " << age << "\nMobile Numer: " << mobile << "\nAddress: " << address << "\nGender: " << gender << endl;
        out.close();
        cout << "\nDATA SAVED: we saves your data for future references\n"
             << endl;
    }

    void displaydetail()
    {
        ifstream in("old-customer.txt");
        {
            if (!in)
            {
                cout << "File Error!" << endl;
            }
            while (!(in.eof()))
            {
                in.getline(all, 999);
                cout << all << endl;
            }
            in.close();
        }
    }
};

int Customers::custID;
class Cabs
{
public:
    int cabchoice, kilometer;
    float cabcost;
    static float lastcabcost;

    void cabdetails()
    {
        cout << "we provide services with collaboration of various organizations" << endl;
        cout << ".............BOOK A CAB............." << endl;
        cout << "1. Book Normal Ride At Just Rs. 15 for 1 KM" << endl;
        cout << "2. Book Luxury Ride At Just Rs. 25 for 1 KM" << endl;

        cout << "\nTo Calculate the Your Ride cost" << endl;
        cout << "choose any one Ride Type given Above" << endl;
        cin >> cabchoice;
        cout << "Enter Distance of your Ride (KM)" << endl;
        cin >> kilometer;

        int hirecab;
        if (cabchoice == 1)
        {
            cabcost = kilometer * 15;
            cout << "\n Your Ride Wil Cost " << cabcost << "Rs for Normal Cab" << endl;
            cout << "press 1 to Book this Cab: or";
            cout << "Press 2 To select another: ";
            cin >> hirecab;
            system("CLS");

            if (hirecab == 1)
            {
                lastcabcost = cabcost;
                cout << "\nSuccesfylly Booked a Standard Cab" << endl;
                cout << "Goto Home and Take Recipt" << endl;
            }
            else if (hirecab == 2)
            {
                cabdetails();
            }

            else
            {
                cout << "Invalid Choice!\n Please wait!" << endl;
                Sleep(999);
                system("CLS");
                cabdetails();
            }
        }
        else if (cabchoice == 2)
        {
            cabcost = kilometer * 25;
            cout << "\n Your Ride Wil Cost " << cabcost << "Rs for luxury Cab" << endl;
            cout << "press 1 to Book this Cab: or";
            cout << "Press 2 To select another: ";
            cin >> hirecab;
            system("CLS");

            if (hirecab == 1)
            {
                lastcabcost = cabcost;
                cout << "\nSuccesfylly Booked a luxury Cab" << endl;
                cout << "Goto Home and Take Recipt" << endl;
            }
            else if (hirecab == 2)
            {
                cabdetails();
            }

            else
            {
                cout << "Invalid Choice!\n Please wait!" << endl;
                sleep(1100);
                system("CLS");
                cabdetails();
            }
        }
        else
        {
            cout << "Invalid Choice! Redirecting to Main Menu \n Please Wait!" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to Redirect to Main Menu: ";
        cin >> hirecab;
        system("CLS");
        if (hirecab == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
};

float Cabs::lastcabcost;
class Booking
{
public:
    int choicehotel, packchoice;
    static float hotelcost;

    void hotels()
    {
        string hotelNo[] = {"Avendra", "Choiceview", "galxystar"};
        for (int i = 0; i < 3; i++)
        {
            cout << (i + 1) << ". Hotel" << hotelNo[i] << endl;
        }
        cout << "\n Currently We have above Mentiond Hotels Available" << endl;
        cout << "Press your Choice of your Hotel(NUMBER)" << endl;
        cin >> choicehotel;

        system("CLS");

        if (choicehotel == 1)
        {
            cout << "..............WELCOME TO AVENDRA............." << endl;
            cout << "Enjoy Garden, Food and Drinks. get to see Awesome mauntain View" << endl;
            cout << "Available Packges:\n"
                 << endl;
            cout << "1. Basic Pack" << endl;
            cout << "Includes All Basic facilities you need at Just: Rs.5000.00" << endl;
            cout << "2. Get Premium at Just: Rs.10000.00" << endl;
            cout << "3. Get Luxury at Starting From Just: Rs.15000.00" << endl;

            cout << "\nPress another key to back or \n Enter Package number to book: " << endl;
            cin >> packchoice;

            if (packchoice == 1)
            {
                hotelcost = 5000.00;
                cout << "\nSuccessfully Booked Basic Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else if (packchoice == 2)
            {
                hotelcost = 10000.00;
                cout << "\nSuccessfully Booked Premium Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else if (packchoice == 3)
            {
                hotelcost = 15000.00;
                cout << "\nSuccessfully Booked Luxury Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else
            {
                cout << "Invalid choice! Redirecting to Previous Menu\nPlease wait" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotoMenu;
            cout << "\nPress 1 to go to main menu" << endl;
            cin >> gotoMenu;
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choicehotel == 2)
        {
            cout << "..............WELCOME TO CHOICEVIEW............." << endl;
            cout << "Enjoy Garden, Food and Drinks. get to see Awesome mauntain View" << endl;
            cout << "Available Packges:\n"
                 << endl;
            cout << "1. Basic Pack" << endl;
            cout << "/tIncludes All Basic facilities you need at Just: Rs.5000.00" << endl;
            cout << "/t 2. Get Premium at Just: Rs.10000.00" << endl;
            cout << "/t3. Get Luxury at Starting From Just: Rs.15000.00" << endl;

            cout << "\nPress another key to back or \n Enter Package number to book: " << endl;
            cin >> packchoice;

            if (packchoice == 1)
            {
                hotelcost = 5000.00;
                cout << "\nSuccessfully Booked Basic Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else if (packchoice == 2)
            {
                hotelcost = 10000.00;
                cout << "\nSuccessfully Booked Premium Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else if (packchoice == 3)
            {
                hotelcost = 15000.00;
                cout << "\nSuccessfully Booked Luxury Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else
            {
                cout << "Invalid choice! Redirecting to Previous Menu\nPlease wait" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotoMenu;

            cout << "\nPress 1 to go to main menu" << endl;
            cin >> gotoMenu;
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else if (choicehotel == 3)
        {
            cout << "..............WELCOME TO GALAXYSTAR............." << endl;
            cout << "Enjoy Garden, Food and Drinks. get to see Awesome mauntain View" << endl;
            cout << "Available Packges:\n"
                 << endl;
            cout << "1. Basic Pack" << endl;
            cout << "/tIncludes All Basic facilities you need at Just: Rs.5000.00" << endl;
            cout << "/t 2. Get Premium at Just: Rs.10000.00" << endl;
            cout << "/t3. Get Luxury at Starting From Just: Rs.15000.00" << endl;

            cout << "\nPress another key to back or \n Enter Package number to book: " << endl;
            cin >> packchoice;

            if (packchoice == 1)
            {
                hotelcost = 5000.00;
                cout << "\nSuccessfully Booked Basic Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else if (packchoice == 2)
            {
                hotelcost = 10000.00;
                cout << "\nSuccessfully Booked Premium Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else if (packchoice == 3)
            {
                hotelcost = 15000.00;
                cout << "\nSuccessfully Booked Luxury Pack at Avender" << endl;
                cout << "Goto Menu and take Recipt" << endl;
            }
            else
            {
                cout << "Invalid choice! Redirecting to Previous Menu\nPlease wait" << endl;
                Sleep(1100);
                system("CLS");
                hotels();
            }
            int gotoMenu;

            cout << "\nPress 1 to go to main menu" << endl;
            cin >> gotoMenu;
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            cout << "Invalid choice! Redirecting to Previous Menu\nPlease wait" << endl;
            sleep(1100);
            system("CLS");
            hotels();
        }
    }
};

float Booking::hotelcost;

class Charges : public Booking, Cabs, Customers
{
public:
    void printBill()
    {
        ofstream outf("receipt.txt");
        {
            outf << "........PANKAJ SOLANKI TRAVEL AGENCY......." << endl;
            outf << "........Receipt........" << endl;
            outf << "-----------------------" << endl;

            outf << "Customer ID: " << Customers::custID << endl
                 << endl;
            outf << "Description\t\t Total" << endl;
            outf << "Hotel cost:\t\t " << fixed << setprecision(2) << Booking::hotelcost << endl;
            outf << "Travel (cab) cost:\t" << fixed << setprecision(2) << Cabs::lastcabcost << endl;

            outf << "-----------------------" << endl;
            outf << "Total Charges:\t\t" << fixed << setprecision(2) << Booking::hotelcost + Cabs::lastcabcost << endl;
            outf << "-----------------------" << endl;
            outf << "........THANKYOU........" << endl;
        }
        outf.close();
    }
    void showbill()
    {
        ifstream inf("receipt.txt");
        {
            if (!inf)
            {
                cout << "File opening Error!" << endl;
            }
            while (!(inf.eof()))
            {
                inf.getline(all, 999);
                cout << all << endl;
            }
        }
        inf.close();
    }
};

void menu()
{
    int mainchoice;
    int inchoice;
    int gotoMenu;

    cout << "\t\t     *PANKAJ SOLANKI TRAVEL AGENCY*\n"
         << endl;
    cout << "\t.............MAIN MENU............." << endl;
    cout << "\t-----------------------------------------" << endl;
    cout << "\t|\t\t\t\t\t|\t" << endl;
    cout << "\t|\tCustomer Management -> 1\t|\t" << endl;
    cout << "\t|\tCabs Management -> 2\t\t|" << endl;
    cout << "\t|\tBookings Management -> 3\t|\t" << endl;
    cout << "\t|\tCharges & Bills -> 4\t\t|" << endl;
    cout << "\t|\tEXIT -> 5\t\t\t|" << endl;
    cout << "\t|\t\t\t\t\t|\t" << endl;
    cout << "\t-----------------------------------------" << endl;

    cout << "\nEnter your choice: ";
    cin >> mainchoice;
    system("CLS");

    Customers a2;
    Cabs a3;
    Booking a4;
    Charges a5;

    if (mainchoice == 1)
    {
        cout << "------Customer------" << endl;
        cout << "1. Enter New Customer" << endl;
        cout << "2. See Old Customer" << endl;

        cout << "\nEntrer Choice: ";
        cin >> inchoice;

        system("CLS");
        if (inchoice == 1)
        {
            a2.getdetails();
        }
        else if (inchoice == 2)
        {
            a2.displaydetail();
        }
        else
        {
            cout << "Invalid Choice! Redirecting to main menu\n please wait" << endl;
            Sleep(1100);
            system("CLS");
            menu();
        }
        cout << "\nPress 1 to Go to main menu: ";
        cin >> gotoMenu;
        system("CLS");
        if (gotoMenu == 1)
        {
            menu();
        }
        else
        {
            menu();
        }
    }
    else if (mainchoice == 2)
    {
        a3.cabdetails();
    }
    else if (mainchoice == 3)
    {
        cout << "-->Booking a Luxury using the system<--" << endl;
        a4.hotels();
    }
    else if (mainchoice == 4)
    {
        cout << "-->Get your receipt<--" << endl;
        a5.printBill();

        cout << "Your receipt is already printed you can get it from file path\n"
             << endl;
        cout << "To display your receipt in the screen,, Enter 1: or Enter another key to back to main menu: ";

        cin >> gotoMenu;
        if (gotoMenu == 1)
        {
            system("CLS");
            a5.showbill();
            cout << "\nPress 1 to go to main menu: ";
            cin >> gotoMenu;
            system("CLS");
            if (gotoMenu == 1)
            {
                menu();
            }
            else
            {
                menu();
            }
        }
        else
        {
            system("CLS");
            menu();
        }
    }

    else if (mainchoice == 5)
    {
        cout << "-->THANYOU FOR USING<--" << endl;
        Sleep(999);
        system("CLS");
        menu();
    }
    else
    {
        cout << "Invalid Choice! Redirecting to main menu\n please wait" << endl;
        Sleep(1100);
        system("CLS");
        menu();
    }
}
int main()
{
    ManageMenu startObj;
    return 0;
}
