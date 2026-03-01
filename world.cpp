#include <iostream>
using namespace std;
main()
{
int pop;
cout<<"Enter current world population:"<<endl;
cin>>pop;

int birthrate;
cout<<"Enter monthly birth rate:"<<endl;
cin>>birthrate;

int decades=3;
int years=30;
int month=360;
int afterDecade=(pop)+(month*birthrate);
cout<<"population after 3 decades will be :"<<afterDecade;
}

