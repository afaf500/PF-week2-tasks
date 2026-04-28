#include <iostream>
#include <string>
using namespace std;
string timeTravel(int hours,int min){
    min+=15;

    if(min>=60)
    {
        min-=60;
        hours+=1;
    }

    if(hours>=24)
    {
        hours=0;
    }
    return to_string(hours)+":"+to_string(min);
}
main()
{
    int h,m;
    cout<<"Enter hours: ";
    cin>>h;
    cout<<"Enter minutes: ";
    cin>>m;

    string result=timeTravel(h,m);
    cout<<"Future time: "<<result<<endl;
    return 0;
}