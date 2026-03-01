#include<iostream>
using namespace std;
main()
{
int num;
int sum=0;
cout<<"Enter a 4 digit number:";
cin>> num;
 sum+=num % 10;
 num/=10;
 sum+=num % 10;
  num/=10;
 sum+=num%10;
  num/=10;
  sum+=num;
cout<<"Sum of individual digits:"<<sum<<endl;
}
  