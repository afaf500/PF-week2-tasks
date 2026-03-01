#include<iostream>
using namespace std;
main()
{
int imposter;
int players;
int chance;

cout<<"Enter imposters:"<<endl;
cin>>imposter;

cout<<"Enter players:"<<endl;
cin>>players;

chance=100 * (imposter/players);
cout<<"chance is :"<<chance<<"%";
}