#include <iostream>
using namespace std;
main()
{
int paintArea;
int width;
int height;
int walls;

cout<<"Enter paint area :"<<endl;
cin>>paintArea;

cout<<"Enter width:"<<endl;
cin>>width;

cout<<"Enter height:"<<endl;
cin>>height;

walls=paintArea/(width*height);

cout<<"walls painted:"<<walls;
}