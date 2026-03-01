#include <iostream>
using namespace std;
main()
{
float veg;
float fruit;
float costVeg;
float costFruit;

cout<<"Enter vegetable price per kilogram (in coins):";
cin>>costVeg;

cout<<"Enter fruit price per kilogram(in coins):";
cin>>costFruit;

cout<<"Enter total kilograms of vegetable:";
cin>>veg;

cout<<"Enter total kilograms of fruit:";
cin>>fruit;
int earning; 
earning = ((costVeg*veg) + (costFruit*fruit)) /1.94;
cout<<"total earning in rupees is:"<<earning;
}
