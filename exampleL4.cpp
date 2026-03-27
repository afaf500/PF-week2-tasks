#include <iostream>
using namespace std;
main()
{
    int n[5];
    for(int count=0;count < 5;count=count+1)
    {
      cout<<"Enter number: ";
      cin>>n[count];
    }
    cout<<"first element in array is: "<<n[0]<<endl;
    cout<<"Last element in array is: "<<n[4]<<endl;
}