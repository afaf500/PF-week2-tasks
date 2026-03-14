#include <iostream>
using namespace std;
main()
{
    int table24=24;
    int table50=50;
    int table29=29 , multiple;
    cout<<"Multiplication table 24: "<<endl;
    for(int i=1; i<=10; i=i+1)
    {
        multiple=table24 * i;
        cout<<table24<<"*"<<i<<"="<<multiple<<endl;

    }
    cout<<"Multiplication table 50: "<<endl;
    for(int x=1; x<=10; x=x+1)
    {
        multiple=table50*x;
        cout<<table50<<"*"<<x<<"="<<multiple<<endl;
    }
    cout<<"Multiplication table 29: "<<endl;
    for(int y=1;y<=10;y=y+1)
    {
        multiple=table29* y;
         cout<<table29<<"*"<<y<<"="<<multiple<<endl;

    }

}