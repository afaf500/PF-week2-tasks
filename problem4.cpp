#include <iostream>
using namespace std;
main()
{
    int redRose,whiteRose,tulips;
    float priceRedRose=2.00;
    float priceWhiteRose= 4.10;
    float priceTulips = 2.50;
    float total_1,total_2,total_3,grandTotal;
    cout<<"Enter number of red roses: ";
    cin>>redRose;
    total_1 = redRose * priceRedRose;

    cout<<"Enter number of whiteRose: ";
    cin>>whiteRose;
    total_2 = whiteRose * priceWhiteRose;


    cout<<"Enter number of tulips: ";
    cin>>tulips;
    total_3 = tulips * priceTulips;

    grandTotal = total_1 + total_2 + total_3;
    if(grandTotal>200)
{
float discount = grandTotal - (grandTotal * 20/100);
cout<<"original price: "<<grandTotal<<endl;
cout<<"Discounted price: "<<discount<<endl;
}
else
{
    cout<<"original price: "<<grandTotal<<endl;

}



}