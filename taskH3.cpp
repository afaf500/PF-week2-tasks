#include <iostream>
using namespace std;

float taxCalculator(char type,float price)
{
    float taxRate=0.0;
    if(type=='M' || type=='m'){taxRate=6;}
   else if(type=='E' || type=='e'){taxRate=8;}
   else if(type=='S' || type=='s'){taxRate=10;}
    else if(type=='V' || type=='v'){taxRate=12;}
    else if(type=='T' || type=='t'){taxRate=15;}

    float taxAmount=price *(taxRate/100);
    return price + taxAmount;
}
main()
{
    char type;
    float price;
    cout<<"Enter Vehicle type code(M/E/S/V/T): ";
    cin>>type;
    cout<<"Enter price: ";
    cin>>price;
    float final=taxCalculator(type,price);
    cout<<"Final Price after adding tax is: "<<final<<endl;
    return 0;
}