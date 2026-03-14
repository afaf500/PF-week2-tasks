#include <iostream>
using namespace std;
main()
{
    string myPassword,userEnter;
    myPassword="Pass@123";
    cout<<"Enter the password: ";
    cin>>userEnter;
    if(userEnter==myPassword)
    {
        cout<<"yes! I have cracked the code."<<endl;
    
    }
    else{
        cout<<"It is not that simple,try again.";
    }
}