#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
    int m;
    float m2;
    float p;


    cout <<"************************************************"<<endl<<
         "STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
         "************************************************"<<endl;
    cout<<"\n";
    cout<<"\n";

M :
    cout<<"Enter Your Total Marks out of 300"<<setw(4)<<":  ";
    cin>>m;
    cout<<"\n";
    cout<<"\n";

    m2=m/3.0f;
    p=m/3.0f;



    if(m<0 || m>300)
    {
        cout<<"ERROR"<<setw(17)<<":  Your Total Marks Must Be Between 0-300";
        cout<<"\n";
        cout<<"\n";
        goto M;
    }
    else
    {





        cout   <<"-------------------------------------------------"<<endl<<
               "          Academic Summary"<<endl<<
               "-------------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"\n";
        cout<<"\nTotal Marks"<<setw(15)<<":  "<<m<<endl;
        cout<<"Average Marks"<<setw(13)<<":  "<<m2<<endl;
        cout<<"Percentage"<<setw(16)<<":  "<<p<<"%"<<endl;
        cout<<"\n";
        cout<<"\n";



        cout   <<"-------------------------------------------------"<<endl<<
               "          Academic Result"<<endl<<
               "-------------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"\n";

        if(p>=40)
        {
            cout<<"Result"<<setw(20)<<":  PASS"<<endl;
            cout<<endl;
            cout<<"Congratulations You have Passed the exam";
            cout<<endl;
        }
        else
        {
            cout<<"Result"<<setw(20)<<":  FAIL"<<endl;
            cout<<endl;
            cout<<"Better Luck next time, You have Failed the exam";
            cout<<endl;
            cout<<endl;
        }



    }


    return 0;
}


