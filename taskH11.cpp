#include<iostream>
using namespace std;
main()
{
    while(true)
    {
    
        int choice,num1,num2,add,sub,mul,div;
    
        
        cout<<"-----Simple Calculator------"<<endl;
        cout<<"1. Addition."<<endl;
        cout<<"2. subtraction."<<endl;
        cout<<"3. Multiplication"<<endl;
        cout<<"4. Division"<<endl;
        cout<<"5. Clear screen"<<endl;
        cout<<"6. Exit"<<endl;
        cout<<"Enter choice(1_6): ";
        cin>>choice;

        if (choice==1)
        {cout<<"Enter a number:";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
         add=num1+num2;
        cout<<"Ans:"<<add<<endl;}

       if (choice==2)
        {cout<<"Enter a number:";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        sub=num1-num2;
        cout<<"Ans: "<<sub<<endl;}

        if (choice==3)
       { cout<<"Enter a number:";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        mul=num1*num2;
        cout<<"Ans: "<<mul<<endl;}

        if (choice==4)
        {cout<<"Enter a number:";
        cin>>num1;
        cout<<"Enter second number: ";
        cin>>num2;
        div=num1/num2;
        cout<<"Ans: "<<div<<endl;}

        if(choice==5)
        {
    
            cout<<"screen cleared.";
            break;
        }

        if(choice==6)
        {
            cout<<"thankyou for using calculator."<<endl;
            break;
        }
        
    }
}