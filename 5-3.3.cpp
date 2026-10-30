//This program is to print Bottom Left Triangle of alphabet starting from a  //
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
            cout<<char(j+96);
        }
        cout<<"\n";
    }



    return 0;
}

