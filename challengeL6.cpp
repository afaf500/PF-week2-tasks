#include <iostream>
using namespace std;
main()
{
    string password,pin;
    int choice,deposit, currentBalance=1000 ,withdraw,total;
    for(int i=1;i<=3;i=i+1)
    {
        cout<<"Enter PIN: ";
        cin>>pin;

        if(pin =="1234")
        {
            cout<<"login successful."<<endl;
            break;
        }
        else
        {
         cout<<"wrong login."<<endl;
        }
        if(i==3 && pin!="1234")
        {
            cout<<"too many attempts.program ends."<<endl;
        }
    }
    for(int x=1;x<=5;x++)
    {
        cout<<"-----------ATM Menu------------"<<endl;
        cout<<"1.   check balance: "<<endl;
        cout<<"2.   Deposit money: "<<endl;
        cout<<"3.   Withdraw money: "<<endl;
        cout<<"4.   Exit            "<<endl;
        cout<<"Enter choice(1_4): ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"Current balance: " <<currentBalance<<endl;
        }
        else if(choice ==2)
        {
            cout<<"Enter amount to be deposited: " ;
            cin>>deposit;
            cout<<"Deposit successful."<<endl;
            currentBalance=currentBalance+deposit;
        }
          
        else if(choice == 3)
        {
            cout<<"Enter amount to be with drawn: ";
            cin>>withdraw;
            cout<<"Please collect your cash."<<endl;
             currentBalance=currentBalance-withdraw;
        }
        

        else if(choice == 1)
        {
            cout<<"Current balance: "<<total<<endl;
        }
            
        
    
        
        else if(choice == 4)
        {
            cout<<"Thankyou for using ATM."<<endl;
            break;
        }

    }
}