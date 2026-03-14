#include<iostream>
using namespace std;
main()
{
    int i,j,rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(i=1;i<=rows;i=i+1)
    {
        for(j=1;j<=i;j=j+1)
      { cout<<"*";}
        cout<<"\n";
    }
}