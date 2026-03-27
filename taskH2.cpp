#include <iostream>
using namespace std;
main()
{
    int n,count=0;
    bool even=false;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<"numbers one per line"<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        if(i%2==0)
        {
           even=true;
           count++;
        }
    }
    if(even==true)
    {
        cout<<"Total even numbers: "<<count<<endl;
    }

}