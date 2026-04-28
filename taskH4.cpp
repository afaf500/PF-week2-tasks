#include <iostream>
#include<string>
using namespace std;

string projectTimeCalculation(int hours,int days,int workers)
{
    //working hours(days*90%)*10 hours
    //90 percent day available,hours 8*2=10
    //0.9*10=9
    int totalHours=(days*9)*workers;
    if(totalHours>=hours)
    return"Yes" +to_string(totalHours-hours)+"hours left";
    else
    return"Not enough time!"+to_string(hours-totalHours)+"needed";
}
main()
{
    int h,d,w;
    cout<<"Enter hours needed: ";
    cin>>h;
    cout<<"Enter days of firm: ";
    cin>>d;
    cout<<"Enter workers: ";
    cin>>w;
    cout<<projectTimeCalculation(h,d,w)<<endl;
    return 0;
}