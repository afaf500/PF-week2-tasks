#include <iostream>
#include<string>
#include<cmath>
using namespace std;

string pyramidVolume(double length,double width,double height,string unit)
{
double volumeInMetres=(length * width * height)/3.0;
double resultVolume=0.0;

if(unit=="millimetres")
{
    resultVolume=volumeInMetres * pow(1000,3);
}
if(unit == "metres")
{
    resultVolume=volumeInMetres;
}
if(unit =="centimetres" )
{
    resultVolume=volumeInMetres * pow(100 ,3);
}
if(unit == "kilometres")
{
    resultVolume=volumeInMetres /pow(1000,3);
}
return to_string(resultVolume)+"cubic"+unit;
}
main()
{
    double l,w,h;
    string unit;
    cout<<"Enter length,width,height(in metres): "<<endl;
    cin>>l>>w>>h;

    cout<<"Enter output unit(millimetres,metres,centimetres,kilometres): "<<endl;
    cin>>unit;

    cout<<pyramidVolume(l,w,h,unit)<<endl;
    return 0;


}