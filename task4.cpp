#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"please enter your name: ";
    cin>>name;
    if(name == "ali"){
        cout<<"WELCOME: "<<name;
    }
    else{
        cout<<"try again";
    }
}