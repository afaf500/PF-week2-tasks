#include<iostream>
using namespace std;
main()
{
    int x,y,rows;
    cout<<"Enter number of rows: ";
    cin>>rows;
    for(x=1;x<=rows;x=x+1)
    {
        for(y=1;y<=x;y=y+1)
        {
            cout<<"*";
        }
        cout<<"\n";
    }
    for(x=rows-1;x>=1;x=x-1)
    {
        for(y=1;y<=x;y=y+1)
        {
          cout<<"*";   
        }
        cout<<"\n";
    }
}