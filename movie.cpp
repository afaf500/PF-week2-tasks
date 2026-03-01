#include <iostream>
using namespace std;
main()
{
float adultTicket;
float childTicket;
int adultTicSold;
int childTicSold;
string movieName;
float donatedAmount;

cout<<"Enter movie Name:";
cin>>movieName;

cout<<"Enter adult ticket price:";
cin>>adultTicket;

cout<<"Enter child ticket price:";
cin>>childTicket;

cout<<"Enter Total Num of adult ticket sold:";
cin>>adultTicSold;

cout<<"Enter Total Num of child ticket sold:";
cin>>childTicSold;

cout<<"Enter percentage amount to be donated:";
cin>>donatedAmount;

cout<<"-----------------------------------------------------------------"<<endl;

cout<<"Movie name:"<<movieName<<endl;

int total;
total=(adultTicket*adultTicSold)+(childTicSold*childTicket);
cout<<"Total amount generated from tickets:"<<total<<endl<<endl;


float donation;
donation=(donatedAmount/100)*total;

cout<<"Total amount to charity: "<<donation<<endl;

float remaining;
remaining=(total)-(donation);

cout<<"total remaining amount:"<<remaining;
}









