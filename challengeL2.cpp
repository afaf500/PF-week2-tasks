#include<iostream>
using namespace std;
main()
{
    int num, digitToFind,digit,count=0;
    cout<<"Enter number: ";
    cin>>num;
    cout<<"Enter digit for frequency: ";
    cin>>digitToFind;
    for( ; num>0; num=num/10)
    {
        digit=num%10;
        if(digit == digitToFind)
        {
            count++;
        }
    }
    cout <<"Frequency of"<<digitToFind<<"is"<<count;
}