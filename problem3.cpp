#include<iostream>
using namespace std;
main()
{
    int temp1,temp2,diff;
    cout<<"Enter temperature of first city(higher temp):  ";
    cin>>temp1;
    cout<<"Enter temperature of second city: ";
    cin>>temp2;
    diff= temp1-temp2;
    if(diff>10)
    {
        cout<<"Difference is too big."<<endl;

    }
    else
    {
        cout<<"program ends."<<endl;
    }
    
}