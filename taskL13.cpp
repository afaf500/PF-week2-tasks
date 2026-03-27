#include <iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter size of series: ";
    cin>>n;
    
    int arr[100];
    cout<<"Enter"<<n<<"Numbers per line: "<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    bool special=true;
    //number odd ho but index even//
    for(int i=0;i<n;i++)
    {
        if(i%2!=0 && arr[i]%2==0)
       { special=false;}

        else if(i%2==2 && arr[i]%2!=0)
        {
            special=false;
        }
    }
        if(special== false)
        {
            cout<<"This array is not special"<<endl;
        }
        else
        {
            cout<<"This array is special"<<endl;
        }
    

}