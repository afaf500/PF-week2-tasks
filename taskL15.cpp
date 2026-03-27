#include <iostream>
using namespace std;
main()
{
    int correctpin=1234;
    int pin[3];
    bool login=false;
    int balance=1000;
    int amount;
    int choice;

    for(int i=0;i<3;i++)
    {
        cout<<"Enter pin: ";
        cin>>pin[i];
        if(pin[i]==correctpin)
        {
            login=true;
            cout<<"Login successful."<<endl;
            break;
        }
        else{
            cout<<"Incorrect Pin:"<<endl;
        }
    }
    if(login==true)
    {
        while(true)
        {
            cout<<"------ ATM MENU--------"<<endl;
            cout<<"1. check balance "<<endl;
            cout<<"2. deposit balance "<<endl;
            cout<<"3. withdraw balance "<<endl;
            cout<<"4.  Exit              "<<endl;
            cout<<"  Enter your choice: ";
            cin>>choice;

            if(choice==1)
            {
                cout<<"Current balance: "<<balance<<endl;
            }
            else if(choice==2)
            {
                cout<<"deposit balance: ";
                cin>>amount;
                balance=balance+amount;
                cout<<"Updated balance"<<balance<<endl;

            }
            else if(choice==3)
            {
                cout<<"withdraw balance: ";
                cin>>amount;
                if(amount<=balance && amount>0)
                {
                    balance=balance-amount;
                    cout<<"Remaining balance: "<<balance<<endl;
                }
                else
                {
                    cout<<"Insufficient balance:"<<endl;
                }
            }
             else if(choice==4)
            {
                cout<<"Thankyou for using ATM."<<endl;
                break;
            }
             else
            {
                cout<<"Invalid choice"<<endl;
            }
            


        }
    }
    else{
        cout<<"Too many incorrect attempts.Access Denied."<<endl;
    }

}