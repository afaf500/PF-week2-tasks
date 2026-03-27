#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of elements: "<<endl;
    cin>>n;
    cout<<"Enter "<<n<< "number of elements one per line."<<endl;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int largest=arr[0];
     int smallest=arr[0];
    for(int i=1;i<n;i++)
    {
       if(arr[i]>largest)
       {
        largest=arr[i];
       }
    
    

       if(arr[i]<smallest)
       {
        smallest=arr[i];
        
       }
    }
    cout<<"largest num:" <<largest<<endl;
    cout<<"smallest num: "<<smallest<<endl;

    
}
