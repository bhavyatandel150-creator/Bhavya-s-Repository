
#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()


{


    string e,s,b;
    int se;
    long long m;
    char ch;
do{


        cout << "************************************************"<<endl<<
             "        STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
             "************************************************"<<endl;
        cout<<"\n";
        cout<<"\n";
        cout<<"Student Registration";
        cout<<"\n";
        cout<<"\n";





//Taking input from user about student record........
        cout<< "Enter Enrollment Number"<<setw(3)<<":"<<"  ";
        cin>>e;
        cin.ignore();
        cout<<"Enter Student Name"<<setw(8)<<":"<<"  ";
        getline(cin,s);
        cout<< "Enter Branch"<<setw(14)<<":"<<"  ";
        cin>>b;
        cout<< "Enter Semester"<<setw(12)<< ":"<< "  ";
        cin>>se;
        cout<<"Enter Mobile Number"<<setw(7)<<":"<<"  ";
        cin>>m;


        cout<<"\nEnrollment Number"<<setw(9)<<":"<<"  "<<e;
        cout<<"\nStudent Name"<<setw(14)<<":"<<"  "<<s;
        cout<<"\nBranch"<<setw(20)<<":"<<"  "<<b;
        cout<<"\nSemester"<<setw(18)<<":"<<"  "<<se;
        cout<<"\nMobile Number"<<setw(13)<<":"<<"  "<<m;
        cout<<endl;
        cout<<endl;


        cout<<"Student Registered Successfully";


//Asking user if he/she wants to register another student or not......

        cout<<"\nRegister Another Student (Y/N):";
        cin>>ch;
        cout<<endl;
        cout<<endl;
    }
    while(ch=='Y'|| ch=='y');

    cout<<"Returning back to main menu......."<<endl;
    cout<<endl;

    if(ch=='N' || ch=='n')
    {
        cout<<"Thanks for your response....."<<endl;
    }


    return 0;
}
