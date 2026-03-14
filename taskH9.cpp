#include <iostream>
using namespace std;
main()
{
    double  money;
    int targetyear,age=18;

    cout<<"Enter money: ";
    cin>>money;
    cout<<"Enter year: ";
    cin>>targetyear;
    
    for(int i =1800; i<=targetyear; i++)
    {
        if( i%2==0)
        {  money=money-12000;
        }
        else
        {
            money=money-(12000+50*age);
        }
        age++;
    }
    if(money>=0)
    {
        cout<<"yes he will have carefree life and will have: "<<money<<"left"<<endl;
    }
    else
    {
        cout<<"He will need "<<-money<<" to survive."<<endl;
    }
}

        
        
    

