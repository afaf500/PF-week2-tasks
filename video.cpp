#include <iostream>
using namespace std;
main()
{
int min;
int fps;
int frames;

cout<<"Enter minutes:"<<endl;
cin>>min;

cout<<"Enter fps:"<<endl;
cin>>fps;

frames=min*60*fps;

cout<<"Total frames are:"<<frames;
}