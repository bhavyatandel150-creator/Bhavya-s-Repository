#include<iostream>
#include<iomanip>
using namespace std;
int main()

{
    int m;
    float m2;
    float per;

     cout <<"************************************************"<<endl<<
             "STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
             "************************************************"<<endl;
        cout<<"\n";
        cout<<"\n";

   M: cout<<"Enter Your Total Marks"<<setw(4)<<":  ";
    cin>>m;
    cout<<"\n";
    cout<<"\n";

    m2=m/3.0f;
    per=m/3.0f;



    if(m<0 || m>300)
    {
        cout<<"ERROR"<<setw(17)<<":  Your Total Marks Must Be Between 0-300";
        cout<<"\n";
        cout<<"\n";
        goto M;
    }
    else
    {





        cout<<"---------------------------------------------"<<endl;
         cout<<"Academic Summary"<<endl;
             cout<<"---------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"\n";
        cout<<"\nTotal Marks"<<setw(15)<<":  "<<m<<endl;
        cout<<"Average Marks"<<setw(13)<<":  "<<m2<<endl;
        cout<<"Percentage"<<setw(16)<<":  "<<per<<"%"<<endl;
        cout<<"\n";
        cout<<"\n";



        cout<<"---------------------------------------------"<<endl<<
             "Academic Result"<<endl;
             cout<<"---------------------------------------------"<<endl;
        cout<<"\n";
        cout<<"\n";


        if(per>=40)
        {
            cout<<"RESULT"<<setw(24)<<":  PASS"<<endl;



            if(per>=90)
            {
                cout<<"CLASS"<<setw(22)<<":  O"<<endl;
                cout<<"PERFORMANCE"<<setw(15)<<":  "<<"Outstanding"<<endl;
            }
            else if(per>=80)
            {
                cout<<"CLASS"<<setw(22)<<":  A+"<<endl;
                cout<<"PERFORMANCE"<<setw(15)<<":  "<<"Excellent"<<endl;
            }


            else if(per>=70)
            {
                cout<<"CLASS"<<setw(22)<<":  A"<<endl;
                cout<<"PERFORMANCE"<<setw(15)<<":  "<<"VERY GOOD"<<endl;
            }


            else if(per>=60)
            {
                cout<<"CLASS"<<setw(22)<<":  B+"<<endl;
                cout<<"PERFORMANCE"<<setw(15)<<":  "<<"GOOD"<<endl;
            }

            else if(per>=50)
            {
                cout<<"CLASS"<<setw(22)<<":  B"<<endl;
                cout<<"PERFORMANCE"<<setw(15)<<":  "<<"SATISFACTORY"<<endl;
            }


            else if(per>=40)
            {
                cout<<"CLASS"<<setw(22)<<":  C"<<endl;
                cout<<"PERFORMANCE"<<setw(15)<<":  "<<"NEEDS IMPROVEMENT"<<endl;
            }

        }
        else
        {
            cout<<"RESULT"<<setw(24)<<":  FAIL"<<endl;
        }
        cout<<endl;
        cout<<endl;
       cout<<"---------------------------------------------"<<endl;


    }


    return 0;
}



