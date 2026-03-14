#include <iostream>
using namespace std;
main()
{
    int speed;
    cout<<"Enter you car's speed in km/h: ";
    cin>>speed;
    if(speed >= 100)
    {
        cout<<"Halt..YOU WILL BE CHALLANGED!!!"<<endl;
    }
    else{
        cout<<"Perfect! You're going good."<<endl;
    }
}