#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>



using namespace std;
int main()
{
    int n,i,j,sc[10],temp;
    string id[10],sn[10],nid,tmp;
    bool found=false;



    cout<<"************************************************"<<endl;
    cout<<" SPORTS EVENT ANALYSIS"<<endl;
    cout<<"************************************************"<<endl;


    cout<<"Enter Number of participants  : ";
    cin>>n;
    while(n<1 || n>10)
    {
        cout<<"Enter a number from 1 to 10   : ";
        cin>>n;
    }
    cout<<endl;

    for(i=0; i<n; i=i+1)
    {
        cout<<"Enter Participant Id          : ";
        cin>> id[i];
        cout<<endl;

        cin.ignore();
        cout<<"Enter Participant Name        : ";
        getline(cin, sn[i]);

        cout<<endl;
        cout<<"Enter Participant Score       : ";
        cin>> sc[i];
        cout<<endl;

    }


    cout<<endl;
    cout<<"Enter Participant ID you want to search : ";
    cin>>nid;

    for(i=0; i<=n-1; i++)
    {
        if(nid==id[i])
        {
            cout<<"ID     : "<<id[i]<<endl;
            cout<<"Name   : "<<sn[i]<<endl;
            cout<<"Score  : "<<sc[i]<<endl;
            found=true;
        }
    }
    if(!found)
    {
        cout<<"Participant with this ID is not found...."<<endl;
    }
cout<<endl;
cout<<endl;
    cout << "------------------------------------------------" << endl;
    cout<<"               RANKING LIST"<<endl;
    cout << "------------------------------------------------" << endl;

    cout<<"RANK"<<setw(7)<<"NAME"<<setw(7)<<"SCORE"<<endl;
    cout<<endl;
    for(i=0; i<n-1; i++)
    {
        for(j=i+1; j<n; j++)
        {
            if(sc[i]<sc[j])
            {
                temp=sc[i];
                sc[i]=sc[j];
                sc[j]=temp;

                tmp=sn[i];
                sn[i]=sn[j];
                sn[j]=tmp;

                tmp=id[i];
                id[i]=id[j];
                id[j]=tmp;
            }
        }
    }
    for(i=0; i<n; i++)
    {
        cout<<i+1<<setw(7)<<sn[i]<<setw(7)<<sc[i]<<endl;
    }
    cout << "------------------------------------------------" << endl;
    cout<<"        TOP THREE PERFORMERS"<<endl;
    cout << "------------------------------------------------" << endl;

    for(i=0; i<n && i<3; i++)
    {
        cout<<i+1<<setw(7)<<sn[i]<<setw(7)<<sc[i]<<endl;
    }
    cout<<endl;


    cout<<  "________________________________________________";

    return 0;
}
