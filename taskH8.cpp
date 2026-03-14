#include<iostream>
using namespace std;
main()
{
    int age,toyprice;
    double machineprice;
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Enter per toy price: ";
    cin>>toyprice;
    cout<<"Enter machine price: ";
    cin>>machineprice;

    double moneysaved=0 , nextgiftmoney=10;

    int toycount=0;

    for(int i=1;i<=age;i++)
    {
        if(i%2==0)
        {
            moneysaved=moneysaved+nextgiftmoney-1;
    
            nextgiftmoney=nextgiftmoney+10;
        }
        else
        {
            toycount=toycount+1;
        }
    }

    moneysaved=moneysaved+(toycount*toyprice);
    

    if(moneysaved>=machineprice)
    {
        cout<<"Yes! "<<moneysaved-machineprice<<endl;

    }
    else
    {
        cout<<"No!"<<machineprice-moneysaved<<endl;
    }

}