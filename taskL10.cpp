#include <iostream>
using namespace std;
main()
{
    int coins[3];
    double dollars;
    bool found=false;
    int coinCents,dollarCent;


    cout<<"Enter Quaters: ";
    cin>>coins[0];
    cout<<"Enter dimes: ";
    cin>>coins[1];
    cout<<"Enter nickels: ";
    cin>>coins[2];
    cout<<"Enter penies: ";
    cin>>coins[3];
    cout<<"Enter total amount due in $: ";
    cin>>dollars;
    coinCents=coins[0]*25 + coins[1]*10  + coins[2]*5 +coins[3]*1;
    dollarCent=dollars*100;

    if(coinCents>=dollarCent)
    {
        found=true;
    }
    cout<<"Can you pay this amount: ";
    if(found=true)
    {
        cout<<"yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
}
