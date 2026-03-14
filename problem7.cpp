#include <iostream>
using namespace std;
main()
{
    string shape;
    float length,width,radius,base,height,area;
    
    cout<<"Enter the shape: ";
    cin>>shape;

    if(shape=="square")
    {
        cout<<"Enter length of its sides: ";
        cin>>length;
        area= length * length;
        

    }
    else if (shape=="rectangle")
    {
        cout<<"Enter length: ";
        cin>>length;
        cout<<"Enter width :";
        cin>>width;
        area = length * width;

    }
    else if(shape == "circle")
    {
        cout<<"Enter radius: ";
        cin>>radius;
        area = 3.1416*(radius * radius);
    }
    else if(shape=="triangle")

{
    cout<<"Enter base: ";
    cin>>base;
    cout<<"Enter height: ";
    cin>>height;
    area=1/2 *(base * height);
}
cout<<"Area of geometric shape is: "<<area<<endl;
}


