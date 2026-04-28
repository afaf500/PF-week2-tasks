#include <iostream>
#include <cmath>
using namespace std;
main()
{
    float distance,angle;
    cout<<"Enter horizontal distance : ";
    cin>>distance;
    cout<<"Enter angle of elevation in degree: ";
    cin>>angle;
    float height= distance * tan(angle/57.2958);
    cout<<"Height of tree is: "<<height;
    
}