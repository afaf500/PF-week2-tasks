#include <iostream>
using namespace std;
string evenOdd(int num);
main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
     
     cout<<evenOdd(n)<<endl;
}
string evenOdd(int num)
{
  
    int sum=0;
    while(num>0)
    {
        
        sum=sum+num%10;
        num=num/10;
        
    }
    
    if(sum %2==0)
    {
    return "evenish";
    }
    else{
        return "oddish";
    }
   
}

