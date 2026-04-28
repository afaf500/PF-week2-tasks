#include <iostream>
using namespace std;

float calculateBalance(float balance,int years)
{
    float rate;
    if(balance<10000 )
    {
        rate=0.05;
    }
    else if(balance<=50000)
    {
        rate=0.07;
    }
    else
    {
        rate=0.10;
    }
    if(years>=3)
    {
        rate=rate+0.02;
    }
    return balance+(balance*rate);
}
main()
{
    float b;
    int y;
    cout<<"Enter balance and year: "<<endl;
    cin>>b>>y;
    cout<<"Updated balance: "<<calculateBalance(b,y)<<endl;
}