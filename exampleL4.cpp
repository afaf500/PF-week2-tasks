#include <iostream>
using namespace std;
main()
{
    int n, count=0;
    cout<<"enter number: ";
    cin>>n;
    for(int x=n;x>0;x=x/10)
    {
        count=count+1;
    }
    cout<<"Total digits: "<<count<<endl;
}