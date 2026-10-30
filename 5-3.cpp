//This program is to print Bottom Left Triangle of Numbers starting from 1 //
#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"Enter Number of Lines  : ";
    cin>>n;


    for(int i=1; i<=n; i=i+1)
    {
        for(int j=1; j<=i; j=j+1)
        {
            cout<<j;
        }
        cout<<"\n";
    }



    return 0;
}
