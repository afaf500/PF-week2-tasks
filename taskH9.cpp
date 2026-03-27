#include <iostream>
using namespace std;
main()
{
    int choice;
    int count=0;
    string book[2];
    cout<<"-------------------------------"<<endl;
    cout<<"      Library Menu               "<<endl;
    cout<<"-------------------------------"<<endl;
  
    for(int i=0;i<7;i++)
    {
         cout<<" 1. Add book.      "<<endl;
         cout<<" 2. view book.     "<<endl;
         cout<<" 3. Borrow book.   "<<endl;
         cout<<" 4. Exit           "<<endl;
         cout<<"   Enter choice    "<<endl;
         cin>>choice;

         if(choice==1)
        {
            cout<<"Add book name: ";
            getline(cin,book[count]);
            count++;
            cout<<"Book added successfully."<<endl;
        }
        else if(choice==2)
        {
        for(int i=0;i<count;i++)
        {
            cout<<i+1<<"."<<book[i]<<endl;
        }
        } 

        else if(choice==3)
        {
            string name;
            cout<<"Book name: ";
            getline(cin,name);
            cout<<"book "<<name<<"has been borrowed."<<endl;

        }

        else if  (choice==4)
        {
        cout<<"Thankyou for using this application."<<endl;
        }

        else{
            cout<<"invalid choice."<<endl;
        }
         
        
    }



}