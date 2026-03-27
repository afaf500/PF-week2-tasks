#include <iostream>
using namespace std;
main()
{
    int n1,n2;
    

    cout<<"Enter the number of elements for 1 array(must be 2):" ;
    cin>>n1;
    cout<<"Enter two elements for first array one per line: "<<endl;
    int arr1[n1];
    for(int i=0;i<n1;i++)
    {
        cin>>arr1[i];
    }

    cout<<"Enter number of elements for second array: ";
    cin>>n2;
    cout<<"Enter"<<n2<<"elements for second array one per line: "<<endl;
    int arr2[n2];
    for(int j=0;j<n2;j++)
    {
        cin>>arr2[j];
    }
    
    cout<<"Resulting array={";
    cout<<arr1[0]<<",";
    for(int i=0;i<n2;i++)
    {
        cout<<arr2[i];
        if(i<n2-1){cout<<",";}
    }
    cout<<","<<arr1[1]<< "}"<<endl;
    }
