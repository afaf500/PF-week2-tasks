#include<iostream>
using namespace std;
main()
{
    int choice;
    string book;



     for(int i=1; i<=7; i++)
     {
    cout<<"---Library System---"<<endl;
    cout<<"1. Add book."<<endl;
    cout<<"2. View book."<<endl;
    cout<<"3. borrow book."<<endl;
    cout<<"4. Issue book"<<endl;
    cout<<"5. Exit"<<endl;
    cout<<"Enter your choice(1_5): ";
    cin>>choice;

    if(choice ==1 )
    {
        cout<<"Enter book name:"<<endl;
        cin>>book;
        cout<<"you added a book:" <<book<<endl;
    }
    else if(choice == 2)
    {
        cout<<"book:" <<book<<endl;
    }
    else if(choice== 3)
    {
        cout<<"Enter book name: "<<endl;
        int borrow;
        cin>>borrow;
    }
    else if(choice == 4)
    {
        cout<<"Enter book name: "<<endl;
        int issue;
        cin>>issue;
    }
    else if(choice==5)
    {
        cout<<"Exiting library system.Goodbye."<<endl;
        break;
    }

}
}