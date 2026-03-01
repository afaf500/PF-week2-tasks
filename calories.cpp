#include<iostream>
using namespace std;
main()
{
float targetWeightLoss;
string name;
float daysRequired;

cout<<"Enter your name:"<<endl;
cin>>name;

cout<<"Enter target weight loss in kg:";
cin>>targetWeightLoss;

daysRequired = targetWeightLoss * 15;

cout<<name << " will require " <<daysRequired<< " to lose " << targetWeightLoss <<" kg of weight ";


}



