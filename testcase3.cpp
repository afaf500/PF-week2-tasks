#include<iostream>
using namespace std;
main()
{
    int num1,num2,operation;
    char op;
    cout<<"Enter first number: " ;
    cin>>num1;
    cout<<"Enter operator: ";
    cin>>op ;
    cout<<"Enter second number: ";
    cin>>num2;
    if(op =='+')
    {
operation=num1+num2;
cout<<num1<<"+"<<num2<<"="<<operation<<endl;
    }
   else if(op=='-')
    {
operation=num1-num2;
cout<<num1<<"-"<<num2<<"="<<operation<<endl;
    }
   else if(op=='*')
    {
        operation = num1 * num2;
        cout<<num1<<"*"<<num2<<"="<<operation<<endl;
    }
   else if(op =='/')
    {
        operation = num1 /num2;
        cout<<num1<<"/"<<num2<<"="<<operation<<endl;

    }

    

    
}