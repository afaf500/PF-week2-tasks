#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of flights: ";
    cin>>n;

    int num[n];
    string dest[n];
    int seats[n];

    for(int i=0;i<n;i++)
    {
        cout<<"Enter flight number for flight: "<<i+1<<" ";
        cin>>num[i];
        cout<<"Enter destination for flight: "<<num[i]<<" ";
        cin>>dest[i];
        cout<<"Enter seats available for flight: "<<num[i]<<" ";
        cin>>seats[i];
    }
    cout<<"---------------------------------------------------"<<endl;
    cout<<"         Flight Information                      "<<endl;
     for(int i=0;i<n;i++)

     {
        cout<<"flight"<<num[i]<<" has "<<seats[i]<<" available"<<endl;
     }
      cout<<"-------------------------------------------------"<<endl;
     cout<<"Flights with less than 5 seats available."<<endl;

     for(int i=0;i<n;i++)
     {
        if(seats[i]<5)
        {
            cout<<"flight"<<num[i]<<"has"<<seats[i]<<"available."<<endl;
        }
     }


}