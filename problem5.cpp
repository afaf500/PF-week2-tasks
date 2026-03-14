#include <iostream>
using namespace std;
main()
{
    int holidays,workingDays;
    cout<<"Enter your holidays: ";
    cin>>holidays;
    workingDays=365-holidays;
    int playTime=workingDays*63 + (holidays*127);
    int norm= 30000;
    int difference=(norm -playTime);
    int hours=difference/60;
    int min = difference % 60;
    if(playTime>norm)
    {
        cout<<"tom will run away."<<endl;
        cout<<hours<<"hours and "<<min<<"minutes to play."<<endl;
    }
    else{
        cout<<"Tom sleeps well."<<endl;
        cout<<hours<<"hours and"<<min<<"minutes to play."<<endl;
    }

}
