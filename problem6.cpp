#include <iostream>
using namespace std;
main()
{
    int speed;
    cout<<"Enter your speed: ";
    cin>>speed;
    if(speed<=10){
cout<<"slow"<<endl;
    }
    
    else if(speed>10 && speed<=50)
    {
cout<<"average"<<endl;
    }
    
    else if(speed>50 && speed<=150)
    {
        cout<<"fast"<<endl;
    }
    else if(speed>150 && speed<=1000)
    {
        cout<<"ultra fast"<<endl;
    }
    else if (speed>1000) 
    {
cout<<"extremely fast"<<endl;
    }
    
}