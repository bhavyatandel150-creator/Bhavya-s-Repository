
#include<iostream>
using namespace std;
int main ()
{

     //this program prints a pyramid structure of lines given by user starting from A....





    int n,i,j;
    cout<<"Enter No. Of Lines :  ";
    cin>>n;


    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n-i; j++)
        {
            cout<<" ";
        }
        for(j=1; j<=i; j++)
        {
            cout<<char(j+64);
        }
        for(j=i-1; j>=1; j--)
        {
            cout<<char(j+64);
        }
        cout<<endl;

    }

    return 0;
}

