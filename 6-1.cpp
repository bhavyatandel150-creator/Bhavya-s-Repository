#include<iostream>
#include<iomanip>
#include<string>
using namespace std;
int main()
{
    int n,i,j=0,sc[10],T=0,temp;
    float A;
    string id[10],sn[10];


    cout<<"************************************************"<<endl;
    cout<<"        SPORTS EVENT ANALYSIS"<<endl;
    cout<<"************************************************"<<endl;
    cout<<"\n";
    cout<<"\n";


    cout<<"Enter Number of participants  : ";
    cin>>n;
    while(n<1 || n>10)
    {
        cout<<"Enter a number from 1 to 10   : ";
        cin>>n;
    }
    cout<<endl;
    cout<<"\n";
    cout<<"\n";



    for(i=0; i<n; i=i+1)
    {
        cout<<"Enter Participant Id          : ";
        cin>> id[i];
        cout<<endl;
        cin.ignore();
        cout<<"Enter Participant Name        : ";
        getline(cin,sn[i]);

        cout<<endl;
        cout<<"Enter Participant Score       : ";
        cin>> sc[i];
        cout<<endl;

        T=T+sc[i];
    }
    A=(float)T/n;


    cout<<"************************************************"<<endl;
    cout<<"\n";
    cout<<" STUDENT PERFORMANCES"<<endl;
    cout<<"\n";


    cout<<"************************************************"<<endl;
    cout<<"ID"<<setw(7)<<"NAME"<<setw(7)<< "SCORE"<<endl;
    cout << "------------------------------------------------" << endl;

    for(i=0; i<=n-1; i++)
    {
        cout<<id[i]<<setw(7)<<sn[i]<<setw(7)<<sc[i]<<endl;

    }



    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(  sc[i]>sc[j])
            {
                temp=sc[i];
                sc[i]=sc[j];
                sc[j]=temp;
                string tempId=id[i];
                id[i]=id[j];
                id[j]=tempId;
                string tempName=sn[i];
                sn[i]=sn[j];
                sn[j]=tempName;
            }
        }
    }
    cout << "------------------------------------------------" << endl;
    cout<<"\n";
    cout<<"\n";
    cout<<"\n";

    cout<<"Total Score    : "<<T<<endl;
    cout<<"Average Score  : "<<A<<endl;
    cout<<"Highest score  : "<<sc[n-1]<<endl;
    cout<<"Lowest score   : "<<sc[0]<<endl;

    return 0;
}
