#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    int n1,n2,n3,n4,a[10][10],b[10][10],c[10][10],i,j,k;
    cout<<"\n*************************************************";
    cout<<"\n           Matrix-Multplication";
    cout<<"\n*************************************************";
    cout<<endl;
    cout<<endl;
    cout<<endl;

    cout<<"\nEnter Number of Rows of Matrix 1 : ";
    cin>>n1;
    cout<<endl;

    cout<<"\nEnter Number of coloumns of Matrix 1 : ";
    cin>>n2;
    cout<<endl;
    cout<<endl;

    cout<<"\nEnter Number of Rows of Matrix 2 : ";
    cin>>n3;
    cout<<endl;

    cout<<"\nEnter Number of coloumns of Matrix 2 : ";
    cin>>n4;
    cout<<endl;
    cout<<endl;

    if (n1 < 1 || n1 > 10 || n2 < 1 || n2 > 10 || n3 < 1 || n3 > 10 || n4 < 1 || n4 > 10 || n2 != n3) {
        cout << "Invalid dimensions: sizes must be 1-10 and matrix 1 columns must equal matrix 2 rows.\n";
        return 1;
    }

    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cout<<"\nEnter "<<i+1<<" Element of Matrix 1 : ";
                cin>>a[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
     for(i=0;i<n3;i++)
    {
        for(j=0;j<n4;j++)
        {
            cout<<"\nEnter "<<i+1<<" Element of Matrix 2 : ";
                cin>>b[i][j];
        }
        cout<<endl;
    }
    cout<<endl;


    //Printing Matrix....
    cout<<"\nFirst Matrix :";
    cout<<endl;

 for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<"\nSecond Matrix :";
    cout<<endl;
     for(i=0;i<n3;i++)
    {
        for(j=0;j<n4;j++)
        {
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    for(i=0;i<n1;i++)
    {
        for(j=0;j<n4;j++)
        {
            c[i][j]=0;
            for(k=0;k<n2;k++)
            {
            c[i][j] += a[i][k]*b[k][j];
            }
        }cout<<endl;
    }



        cout<<"\nMultiplied Matrix :";
    cout<<endl;
     for(i=0;i<n1;i++)
    {
        for(j=0;j<n4;j++)
        {
            cout<<c[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;


    return 0;
}
