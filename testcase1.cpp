#include <iostream>
using namespace std;
main()
{
float amount;
float discount;

cout<<"Enter the price of the bill: ";
cin>>amount;

if(amount <= 5000)
{
    discount = amount-(amount*5/100);
cout<<"discounted bill = "<<discount<<endl;
}
else
{
    discount = amount - (amount * 10/100);
    cout<<"discounted bill ="<<discount<<endl;
}
}