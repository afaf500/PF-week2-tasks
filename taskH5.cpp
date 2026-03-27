#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of people: ";
    cin>>n;
    cout<<"Enter "<<n<<"names one per line."<<endl;
    string name[n];
    for(int i=0;i<n;i++)
    {
        cin>>name[i];
    }
    
    cout<<"Enter letter to find: ";
    char letter;
    cin >>letter;

    int count=0;
    for(int i=0;i<n;i++)
    {
        if(name[i][0]==letter)
        { count++;}
    }
    cout<<"Total names starting with "<<letter<<" are: "<<count<<endl;
}