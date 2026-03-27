#include<iostream>
using namespace std;
main()
{
    int n;
    int count=0;
    cout<<"Enter number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<"number of elements one per line: "<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        count=count+arr[i];
    }
    cout<<"sum of array: "<<count<<endl;
}