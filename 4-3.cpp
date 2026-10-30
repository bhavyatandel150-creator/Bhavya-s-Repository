#include <iostream>
#include <iomanip>
#include <string>
using namespace std;
int main()
{
    short int ch;
    string e1;
    string s1;
    string b1;
    int s2;
    long long m1;
    int m2;
    int p2;
    int c3;
    int total;
    float avg;
    float per;


    cout << "************************************************" << endl
         << "         STUDENT RECORD MANAGEMENT SYSTEM" << endl
         << "************************************************" << endl;
    cout << endl;
    cout << endl;

    bool marksEntered = false;
    bool registered = false;

    cout << "--------------------Main Menu-------------------" << endl;

M:
    cout << "\n1:Register New Student \n2:Display Student Record \n3:Enter Student Marks \n4:Display Academic Result \n5:Exit";
    cout<<endl;
    cout << "\nEnter Your Choice        :  ";
    cin >> ch;
    cout<<endl;

    switch (ch)
    {
    case 1:
        cout << "------------------------------------------------" << endl
             << "              STUDENT REGISTRATION" << endl
             << "------------------------------------------------" << endl;
        cout << endl;

        cout << endl;

        cout << "\nEnter Enrollment Number" << setw(3) << ":" << "  ";
        cin >> e1;
        cin.ignore();
        cout << "Enter Student Name" << setw(8) << ":" << "  ";

        getline(cin,s1);
        cout << "Enter Branch" << setw(14) << ":" << "  ";
        cin >> b1;
        cout << "Enter Semester" << setw(12) << ":" << "  ";
        cin >> s2;
        cout << "Enter Mobile Number" << setw(7) << ":" << "  ";
        cin >> m1;
        registered = true;
        marksEntered = false;
        cout << endl;


        cout << endl;
        cout << endl;

        cout << "         Student Registered Successfully" << endl;
        cout << "------------------------------------------------" << endl;
        cout << endl;

        cout << endl;

        goto M;
    case 2:
        if (!registered) {
            cout << "Register a student first using option 1." << endl;
            goto M;
        }
        cout << "------------------------------------------------" << endl
             << "              STUDENT INFORMATION" << endl
             << "------------------------------------------------" << endl;

        cout << endl;

        cout << endl;

        cout << "Enrollment Number" << setw(11) << ":  " << e1 << endl;
        cout << "Student Name" << setw(16) << ":  " << s1 << endl;
        cout << "Branch" << setw(22) << ":  " << b1 << endl;
        cout << "Semester" << setw(20) << ":  " << s2 << endl;
        cout << "Mobile Number" << setw(15) << ":  " << m1 << endl;
        cout << endl;

        goto M;

    case 3:

        if (!registered) {
            cout << "Register a student first using option 1." << endl;
            goto M;
        }

        cout << "------------------------------------------------" << endl;
        cout << endl;

        cout << endl;

        cout << "Enter Mathematics Marks" <<setw(5)<<":  " ;
        cin >> m2;
        cout << "Enter Physics Marks" <<setw(9)<<":  " ;
        cin >> p2;
        cout << "Enter C.P.F Marks" <<setw(11)<<":  " ;
        cin >> c3;
        cout << endl;
        if (m2 < 0 || m2 > 100 || p2 < 0 || p2 > 100 || c3 < 0 || c3 > 100)
        {
            cout << "ERROR : Each subject's marks must be between 0-100" << endl;
            goto M;
        }
        total=m2+p2+c3;
        avg=total/3.0f;
        per=total/3.0f;
        marksEntered = true;



        cout << endl;

        cout << "------------------------------------------------" << endl;
        cout << endl;


        cout << "Entered Marks Successfully" << endl;


        cout << endl;
        cout << "------------------------------------------------" << endl;
        goto M;

    case 4:

        if (!registered) {
            cout << "Register a student first using option 1." << endl;
            goto M;
        }

        if (!marksEntered) {
            cout << "Enter marks first using option 3." << endl;
            goto M;
        }

        cout<<"\nTotal Marks"<<setw(17)<<":  "<<total<<endl;
        cout<<"Average Marks"<<setw(15)<<":  "<<avg<<endl;
        cout<<"Percentage"<<setw(18)<<":  "<<per<<"%"<<endl;
        cout<<"\n";
        cout<<"\n";


        if(per>=40)
        {
            cout<<"Result"<<setw(26)<<":  PASS"<<endl;

            if(per>=90)
            {
                cout<<"CLASS"<<setw(24)<<":  O"<<endl;
                cout<<"PERFORMANCE"<<setw(17)<<":  "<<"Outstanding"<<endl;
            }
            else if(per>=80)
            {
                cout<<"CLASS"<<setw(24)<<":  A+"<<endl;
                cout<<"PERFORMANCE"<<setw(17)<<":  "<<"Excellent"<<endl;
            }
            else if(per>=70)
            {
                cout<<"CLASS"<<setw(24)<<":  A"<<endl;
                cout<<"PERFORMANCE"<<setw(17)<<":  "<<"VERY GOOD"<<endl;
            }
            else if(per>=60)
            {
                cout<<"CLASS"<<setw(24)<<":  B+"<<endl;
                cout<<"PERFORMANCE"<<setw(17)<<":  "<<"GOOD"<<endl;
            }
            else if(per>=50)
            {
                cout<<"CLASS"<<setw(24)<<":  B"<<endl;
                cout<<"PERFORMANCE"<<setw(17)<<":  "<<"SATISFACTORY"<<endl;
            }
            else
            {
                cout<<"CLASS"<<setw(24)<<":  C"<<endl;
                cout<<"PERFORMANCE"<<setw(17)<<":  "<<"NEEDS IMPROVEMENT"<<endl;
            }
        }
        else
        {
            cout<<"Result"<<setw(26)<<":  FAIL"<<endl;
        }
        cout<<endl;
        goto M;

    case 5:
        cout << "Thank you for using the system....." << endl;
        break;

    default:
        cout << "Invalid choice. Please enter a number from 1 to 5." << endl;
        goto M;
    }
    cout <<"************************************************"<<endl;

    return 0;
}
