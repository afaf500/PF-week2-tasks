#include <iostream>
using namespace std;
main()
{
float voltage;
float current;
cout<<"Enter voltage(volt):"<<endl;
cin>>voltage;
cout<<"Enter current (ampere):"<<endl;
cin>>current;

int power;
power=voltage*current;
cout<<"power in watt is:"<<power;
}