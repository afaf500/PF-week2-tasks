#include <iostream>
using namespace std;

bool isStrong(int num)
{
    int original=num;
    int totalsum=0;

    while(num>0)
    {
        int digit=num%10;
        int fact=1;
        for(int i=1;i<=digit;i++)
        {
            fact=fact*i;
        }
        totalsum=totalsum+fact;
        num=num/10;
    }
    return(totalsum==original);
}
main()
{
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    if(isStrong(number))
    {
        cout<<"Strong number"<<endl;
        
    }
    else{
        cout<<"Not strong numner."<<endl;
    }
}