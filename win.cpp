#include<iostream>
using namespace std;
main()
{
int wins;
int draws;
int losses;
cout<<"Enter number of wins:"<<endl;
cin>>wins;
cout<<"Enter number of draws:"<<endl;
cin>>draws;
cout<<"Enter number of losses:"<<endl;
cin>>losses;

int score;
score=(wins*3)+(draws*1)+(losses*0);
cout<<"Pakistan has gained "<<score<<" points in Asia cup.";
}