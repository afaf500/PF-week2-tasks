#include <iostream>
using namespace std;
main()
{
    int n;
    float sum=0.0;
    cout<<"Enter the number of resistors in series cicuit:";
    cin>>n;
    float arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<arr[i];i++)
    
      { sum =sum+arr[i];}
    
    cout<<"Total resistance:"<<sum<<endl;
}
