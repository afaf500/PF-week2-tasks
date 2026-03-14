#include <iostream>
using namespace std;
main()
{
    int choice,studentAge;
    string studentName="",userName,password;
    string courseName="";

    for(int i=1;i<=3; i++)
    {
        cout<<"Enter username: ";
        cin>>userName;
        cout<<"Enter password: ";
        cin>>password;

        if(userName =="admin" && password== "1234")
        {
            cout<<"login successful."<<endl;
            break;
        }
        else
        {
            cout<<"Wrong login."<<endl;
        }
        if(i==3 && (userName!="admin" && password != "1234"))
        {
            cout<<"Too many attempts.Program ends."<<endl;
        }
    }
    for(int x=1;x<=5; x=x+1)
    {
        cout<<"--------- University Admission Management System----------- "<<endl;
        cout<<"1. Add student."<<endl;
        cout<<"2. View Student."<<endl;
        cout<<"3. Add course."<<endl;
        cout<<"4.  Exit."<<endl;
        cout<<"Enter choice(1_4): ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Enter student name: ";
            cin>>studentName;
            cout<<"Enter student age: ";
            cin>>studentAge;
            cout<<"student added successfully"<<endl;
        }
       else if(choice==2)
       {

       if(studentName!="")
        {
            cout<<"student name: "<<studentName<<endl;
            cout<<"Student age: "<<studentAge<<endl;
        }
        else{
            cout<<"Student record not found."<<endl;
        } 
    }
    else if(choice==3)
    {
        cout<<"Enter course: ";
        cin>>courseName;
        cout<<"course added :"<<courseName<<endl;
    }
    else if(choice ==4)
    {
        cout<<"program ends."<<endl;
    }
    else{
        cout<<"invalid choice. "<<endl;
    }
}
}

    
        


    

