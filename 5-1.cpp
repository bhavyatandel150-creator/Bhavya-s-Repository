
#include<iostream>
#include<iomanip>
using namespace std;
int main()


{
    int i,n;
    long marks;
    float avg,per,total=0;

    cout << "************************************************"<<endl<<
         "        STUDENT RECORD MANAGEMENT SYSTEM"<<endl<<
         "************************************************"<<endl;
    cout<<"\n";
    cout<<"\n";

    cout<<"\nEnter Number Of Subjects"<<setw(5)<<":  ";
    cin>>n;
    while(n<=0)
    {
        cout<<"Number of subjects must be greater than 0"<<setw(5)<<":  ";
        cin>>n;
    }
    cout<<"\n";

    for(i=1; i<=n; i++)
    {
        cout<<"\nEnter marks of subject "<<i<<" out of 100 "<<setw(3)<<":"<<"  ";
        cin>>marks;
        while(marks<0 || marks>100)
        {
            cout<<"Marks must be between 0-100"<<setw(3)<<":"<<"  ";
            cin>>marks;
        }
        total = total+marks;
    }
    avg = total/n;
    per = total/n;
    cout << "------------------------------------------------";
    cout<<"\n"<<endl;
    cout<<"            Academic Result"<<endl;
    cout<<"\n";
    cout << "------------------------------------------------" << endl;
    cout<<"\nTotal marks"<<setw(18)<<":  "<<total;
    cout<<"\nAverage marks"<<setw(16)<<":  "<<avg;
    cout<<"\nPercentage"<<setw(19)<<":  "<<per;
    cout<<"\n";


    if(per>=40)
    {
        cout<<"\nRESULT"<<setw(27)<<":  PASS"<<endl;

        if(per>=90)
        {
            cout<<"CLASS"<<setw(25)<<":  O"<<endl;
            cout<<"PERFORMANCE"<<setw(18)<<":  "<<"Outstanding"<<endl;
        }
        else if(per>=80)
        {
            cout<<"CLASS"<<setw(25)<<":  A+"<<endl;
            cout<<"PERFORMANCE"<<setw(18)<<":  "<<"Excellent"<<endl;
        }
        else if(per>=70)
        {
            cout<<"CLASS"<<setw(25)<<":  A"<<endl;
            cout<<"PERFORMANCE"<<setw(18)<<":  "<<"VERY GOOD"<<endl;
        }
        else if(per>=60)
        {
            cout<<"CLASS"<<setw(25)<<":  B+"<<endl;
            cout<<"PERFORMANCE"<<setw(18)<<":  "<<"GOOD"<<endl;
        }
        else if(per>=50)
        {
            cout<<"CLASS"<<setw(25)<<":  B"<<endl;
            cout<<"PERFORMANCE"<<setw(18)<<":  "<<"SATISFACTORY"<<endl;
        }
        else
        {
            cout<<"CLASS"<<setw(25)<<":  C"<<endl;
            cout<<"PERFORMANCE"<<setw(18)<<":  "<<"NEEDS IMPROVEMENT"<<endl;
        }
    }
    else
    {
        cout<<"\nRESULT"<<setw(27)<<":  FAIL"<<endl;
    }
    cout<<"\n";
    cout <<"------------------------------------------------"<<endl;


    return 0;
}
