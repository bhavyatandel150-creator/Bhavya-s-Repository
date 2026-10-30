#include<iostream>
#include<iomanip>
#include<cstring>
#include<string>
using namespace std;
int main()
{
    int n,ch,i,iid;
    string id[10],sn[10],sg[10];
    float sp[10];
    cout << "************************************************" << endl
         << "         STUDENT RECORD MANAGEMENT SYSTEM" << endl
         << "************************************************" << endl;
    cout << endl;
    cout << endl;


    //Taking Input from users.......
    cout<<"Enter Number of Students : ";
    cin>>n;
    while (n < 1 || n > 10)
    {
        cout << "Enter a number from 1 to 10: ";
        cin >> n;
    }

    for(i=0; i<n; i++)
    {


        cout<<"Enter Student ID   :";
        cin>>id[i];
        cout<<"Enter Student Name   :";
        cin>>sn[i];
        cout<<"Enter Student Percentage   :";
        cin>>sp[i];
        while(sp[i]<0 || sp[i]>100)
        {
            cout<<"Percentage must be between 0 and 100. Enter again: ";
            cin>>sp[i];
        }
        if(sp[i]>=90) sg[i]="O";
        else if(sp[i]>=80) sg[i]="A+";
        else if(sp[i]>=70) sg[i]="A";
        else if(sp[i]>=60) sg[i]="B+";
        else if(sp[i]>=50) sg[i]="B";
        else if(sp[i]>=40) sg[i]="C";
        else sg[i]="F";

    }
    cout<<endl;


M :
    cout << "--------------------Main Menu-------------------" << endl;


    cout<<"\n1.Print Current Student Records   \n2.Insert a new Student  \n3.Update a new Student  \n4.Delete a Student Record  \n5.Exit  :";
    cin>>ch;
    cout<<endl;
    cout<<endl;

    switch(ch)
    {

    //Printing Current Student Student Record....
    case 1:
    {
        cout<<"\n-------------------------------------------------";

        cout<<"\nCurrent Student Records...";
        cout<<"\n-------------------------------------------------";
        cout<<endl;
        cout<<endl;
        cout<<"ID  "<<setw(6)<<"Name"<<setw(8)<<"percentage"<<setw(5)<<"Grade"<<endl;

        for(i=0; i<n; i++)
        {
            cout<<id[i]<<setw(6)<<sn[i]<<setw(8)<<sp[i]<<setw(5)<<sg[i]<<endl;
        }
        cout<<endl;
        cout<<endl;
        goto M;
    }
    //Inserting a new student....
    case 2:
    {
        cout<<"\n-------------------------------------------------";

        cout<<"\nInsert Student Records...";
        cout<<"\n-------------------------------------------------";
        cout<<endl;
        cout<<endl;
        if (n == 10)
        {
            cout << "Cannot insert: the record list is full.\n";
            goto M;
        }

        cout<<"Enter Position at which you want to enter a new Student details  : ";
        cin>>iid;
        if (iid < 1 || iid > n + 1)
        {
            cout << "Invalid position.\n";
            goto M;
        }
        iid = iid - 1;

        // Make space at iid by shifting records one place to the right.
        for(i=n; i>iid; i--)
        {
            id[i]=id[i-1];
            sn[i]=sn[i-1];
            sp[i]=sp[i-1];
            sg[i]=sg[i-1];
        }
        n++;

        cout<<"Enter ID of New student  :"<<endl;
        cin>>id[iid];
        cout<<"Enter student Name       :";
        cin>>sn[iid];
        cout<<"Enter student Percentage :";
        cin>>sp[iid];
        while(sp[iid]<0 || sp[iid]>100)
        {
            cout<<"Percentage must be between 0 and 100. Enter again: ";
            cin>>sp[iid];
        }
        if(sp[iid]>=90) sg[iid]="O";
        else if(sp[iid]>=80) sg[iid]="A+";
        else if(sp[iid]>=70) sg[iid]="A";
        else if(sp[iid]>=60) sg[iid]="B+";
        else if(sp[iid]>=50) sg[iid]="B";
        else if(sp[iid]>=40) sg[iid]="C";
        else sg[iid]="F";


        cout<<"ID  "<<setw(6)<<"Name"<<setw(8)<<"percentage"<<setw(5)<<"Grade"<<endl;

        for(i=0; i<n; i++)
        {
            cout<<id[i]<<setw(6)<<sn[i]<<setw(8)<<sp[i]<<setw(5)<<sg[i]<<endl;
        }
        cout<<endl;
        cout<<endl;
        goto M;
        //Updating existing student record....
    }
    case 3:

    {


        cout<<"\n-------------------------------------------------";

        cout<<"\nUpdate Student Records...";
        cout<<"\n-------------------------------------------------";
        cout<<endl;
        cout<<endl;
        string updateId;
        cout<<"Enter ID of Student you want to update  :";
        cin>>updateId;
        int found=-1;
        for(i=0; i<n; i++)
        {
            if (id[i] == updateId)
            {
                found=i;
                break;
            }
        }
        if(found==-1)
        {
            cout<<"Student with this id is not found....";
        }
        else
        {

            cout<<"Student found with ID "<<id[found]<<endl;

            cout<<"Update student ID         :";
            cin>>id[found];
            cout<<"update student Name       :";
            cin>>sn[found];
            cout<<"Update student Percentage :";
            cin>>sp[found];
            while(sp[found]<0 || sp[found]>100)
            {
                cout<<"Percentage must be between 0 and 100. Enter again: ";
                cin>>sp[found];
            }
            if(sp[found]>=90) sg[found]="O";
            else if(sp[found]>=80) sg[found]="A+";
            else if(sp[found]>=70) sg[found]="A";
            else if(sp[found]>=60) sg[found]="B+";
            else if(sp[found]>=50) sg[found]="B";
            else if(sp[found]>=40) sg[found]="C";
            else sg[found]="F";

        }

        cout<<"ID  "<<setw(5)<<"Name   "<<setw(8)<<"Percentage"<<setw(6)<<"Grade"<<endl;




        for(i=0; i<n; i++)
        {
            cout<<id[i]<<setw(6)<<sn[i]<<setw(8)<<sp[i]<<setw(6)<<sg[i]<<endl;
        }
        cout<<endl;
        cout<<endl;
        goto M;
    }
    //deleting a Student Record.....
    case 4:
    {


        cout<<"\n-------------------------------------------------";

        cout<<"\nDelete Student Records...";
        cout<<"\n-------------------------------------------------";
        cout<<endl;
        cout<<endl;
        string deleteId;
        cout<<"Enter ID of the Student you want to Delete  :  ";
        cin>>deleteId;
        int nfound=-1;
        for(i=0; i<n; i++)
        {
            if (id[i] == deleteId)
            {
                nfound=i;
                break;
            }
        }

        if(nfound==-1)
        {
            cout<<"Student with this id is not found....";
        }
        else
        {
            // Move the records after the deleted one one place to the left.
            for(i=nfound; i<n-1; i++)
            {
                id[i]=id[i+1];
                sn[i]=sn[i+1];
                sp[i]=sp[i+1];
                sg[i]=sg[i+1];
            }
            n--;

            cout<<"ID  "<<setw(5)<<"Name   "<<setw(8)<<"Percentage"<<setw(6)<<"Grade"<<endl;




            for(i=0; i<n; i++)
            {
                cout<<id[i]<<setw(6)<<sn[i]<<setw(8)<<sp[i]<<setw(6)<<sg[i]<<endl;
            }
        }
        cout<<endl;
        cout<<endl;
        goto M;

    }
    case 5:
    {
        cout<<"Thank you for response....";
        cout<<endl;
        break;
    }

    default:
        cout << "Invalid choice. Please enter a number from 1 to 5.\n";
        goto M;

    }

    return 0;
}
