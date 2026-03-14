#include <iostream>
using namespace std;
main()
{
    int a,b,x,y,r,hcf,lcm;
    cout<<"Enter a number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    x=a;
    y=b;
    while(y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
    hcf=x;
    lcm=(a*b)/hcf;
    cout<<"hcf: "<<hcf<<endl;
    cout<<"lcm: "<<lcm<<endl;


}