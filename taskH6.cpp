#include<iostream>
#include<algorithm>
using namespace std;
main()
{
    int n;
    cout<<"Enter number of students: ";
    cin>>n;
    cout<<"Enter "<< n<<"names per line."<<endl;
    string name[n];
    for(int i=0;i<n;i++)
    {
        cin>>name[i];
    }
    sort(name,name+n);
    cout<<"Student name in alphabatical order "<<endl;

      for(int i=0;i<n;i++)
    {
        cout<<name[i]<<endl;
    }
}