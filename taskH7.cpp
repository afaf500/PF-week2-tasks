#include <iostream>
#include<iomanip>
using namespace std;
main()
{
    int n,num;
    int p1=0,p2=0,p3=0,p4=0,p5=0;

    cout<<"Enter number of inputs: ";
    cin>>n;

    for(int i=1;i<=n;i++)
    {
    cout<<"Enter a number: ";
    cin>>num;

    if(num<200)
    p1++;
    else if(num<=399)
    p2++;
    else if(num<=599)
    p3++;
    else if(num<=799)
    p4++;
    else
    p5++;
}
cout<<fixed<<setprecision(2);

cout<<(p1*100.0/n)<<"%"<<endl;
cout<<(p2*100.0/n)<<"%"<<endl;
cout<<(p3*100.0/n)<<"%"<<endl;
cout<<(p4*100.0/n)<<"%"<<endl;
cout<<(p5*100.0/n)<<"%"<<endl;
}