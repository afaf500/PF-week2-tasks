#include <iostream>
using namespace std;
main()
{
int bag;
float cost;
float area;
float perPound;
float perSquare;

cout<<"Enter size of the fertilizer bag in pounds:";
cin>>bag;

cout<<"Enter cost of fertilizer bag:";
cin>>cost;

cout<<"Enter area in square feet that can be covered by the bag:";
cin>>area;

perPound=cost/bag;
perSquare=cost/area;

cout<<"cost of fertilizing per pound is:"<<perPound<<endl;
cout<<"cost of fertilizing per square feet is:"<<perSquare<<endl;
}

