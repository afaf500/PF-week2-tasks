#include <iostream>
using namespace std;
int add(int num1,int num2){
    int sum=num1+num2;
    return sum;

}


main()
{
    int num1;
    int num2;
    cout<<"Enter number 1: ";
    cin>>num1;
    cout<<"Enter number 2: ";
    cin>>num2;
    add(num1,num2);
    cout<<add(num1,num2);
}
