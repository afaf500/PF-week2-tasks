#include <iostream>
using namespace std;
main()
{
    string country;
    int ticket,discount;
    cout<<"Enter country name: ";
    cin>>country;
    cout<<"Enter ticket price in dollars: ";
    cin>>ticket;
    if(country== "Ireland")
    {
         discount=ticket - (ticket * 10/100);
        cout<<"Discounted price : "<<discount<<endl;
    }
    else{
         discount = ticket - (ticket * 5/100);
        cout<<"Discounted price : "<<discount<<endl;
    }
}