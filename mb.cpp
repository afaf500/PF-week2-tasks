#include<iostream>
using namespace std;
main()
{
int bitInOneByte=8;
int kiloBytesInOneMegabyte=1024;
int bytesInOneMegabyte=kiloBytesInOneMegabyte * bitInOneByte;

int megabytes;
int bits;
cout<<"Enter Megabytes"<<endl;
cin>>megabytes;
bits=megabytes*bytesInOneMegabyte;
cout<<bits<<"bites"<<endl;
}


