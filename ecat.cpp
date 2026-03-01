#include <iostream>
using namespace std;
main()
{
string Name;
int Mat;
int Inter;
int ecat;
float Agg;
cout<<"Enter Name :" <<endl;
cin>>Name;
cout<<"Enter matric marks:"<<endl;
cin>>Mat;
cout<<"Enter Intermediate marks:"<<endl;
cin>> Inter;
cout<<"Enter ecat marks:"<<endl;
cin>>ecat;
Agg=((Mat/1100.0)*0.10)+((Inter/550.0)*0.40)+((ecat/400.0)*0.50);
cout<<"Your ecat aggregate:"<<Agg;
}
