#include<iostream>
using namespace std;
int main()

{
    //this program prints bottom right triangle of numbers starting from 1......

    int i,j,n;
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
            cout<<j;
        }
        cout<<endl;
    }

    return 0;

}
