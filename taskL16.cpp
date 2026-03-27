#include <iostream>
using namespace std;
main()
{
    string correctUsername="admin";
    int correctPass=1234;
    string username[3];
    int pass[3];
    int choice;
    string student[3];
    int rollnum[3];
    int count=0;
    bool login=false;
    string course[3];
    int count2=0;


    for(int i=0;i<3;i++)
    {
        cout<<"Enter username: ";
        cin>>username[i];
        cout<<"Enter password: ";
        cin>>pass[i];
        if(username[i]==correctUsername && pass[i]==correctPass)
        {
            login=true;
            cout<<"Login successful."<<endl;
            break;
        }
        else
        {
            cout<<"Incorrect login."<<endl;
        }
    }
    if(login==true)
    {
        while(true)
        {
            cout<<"---------University Management System--------\n";
            cout<<"1.Add student.\n";
            cout<<"2.View student.\n";
            cout<<"3.Add course.\n";
            cout<<"4.view student.\n";
            cout<<"5.Exit.\n";
            cout<<"Enter choice: ";
            cin>>choice;

            if(choice==1)
            {
                cout<<"Enter student name: ";
                cin>>student[count];
                cout<<"Enter roll num: ";
                cin>>rollnum[count];
                count++;
                cout<<"Student added sucessfully.\n";
            }
            else if(choice==2)
            {
                for(int i=0;i<count;i++)
                {
                    cout<<"student "<<i+1<<": "<<student[i]<<" roll num"<<rollnum[i]<<endl;
                }
            }
            else if(choice == 3)
            {
                cout<<"Enter course name: \n";
                cin>>course[count2];
                count2++;
                cout<<"Course added successfully: \n";
            }
            else if(choice==4)
            {
                for(int i=0;i<count2;i++)
                {
                    cout<<"Courses"<<i+1<<course[i]<<endl;
                }
            }
            else if(choice==5)
            {
                cout<<"Thankyou for using."<<endl;
                break;
            }
            else{
                cout<<"Invalid choice."<<endl;
            }

            

        }
    }
    else{
        cout<<"Invalid login.Too many attempts."<<endl;
    }
}