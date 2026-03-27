#include <iostream>
using namespace std;
main()
{
    int num;
    cout<<"Enter number of inputs you want to enter: ";
    cin>>num;
    int* n= new int [num];
    for(int count=0;count < num;count=count+1)
    {
        cout<<"Enter number: ";
        cin>>n[count];
    }
    for(int count=0; count < num; count++)
    {
        cout<<"number entered: "<<n[count]<<endl;
    }

    delete[]n;
    return 0;
}