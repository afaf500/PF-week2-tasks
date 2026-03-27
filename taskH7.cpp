#include <iostream>
using namespace std;
main()
{
    int n1[4],n;
    cout<<"Enter number of product ";
    cin>>n;
    string item[n];
    float price[n];
    float quantity[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter name of product: ";
        cin>>item[i];
        cout<<"Enter price of product: ";
        cin>>price[i];
        cout<<"Enter quantity of product: ";
        cin>>quantity[i];
    }
    
    
    cout<<"Product Inventory Report."<<endl;
    cout<<"---------------------------------"<<endl;
    for(int i=0;i<n;i++)
    {
        cout<<price[i] <<" , "<<quantity[i]<<" in stock.total price: "<<price[i]*quantity[i]<<endl;
    }
}