#include <iostream>
using namespace std;
main()
{
float initial;
float acc;
float time;
float final;

cout<<"Enter initial velocity(m/s):"<<endl;
cin>>initial;

cout<<"Enter time(s):"<<endl;
cin>>time;

cout<<"Enter acceleration(m/s^2) :"<<endl;
cin>>acc;

final=initial+(acc*time);

cout<<"Final velocity of car is:"<<final;
}