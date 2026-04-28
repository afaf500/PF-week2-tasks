#include <iostream>
#include <string>
using namespace std;
string numberToText(int num)
{
    string units[]={"","one","two","three","four","five","six","seven","eight","nine"};
    string teens[]={"ten","eleven","twelve","thirteen","fouteen","fifteen","sixteen","seventeen","eighteen","nineteen"};
    string tens[]={"","","twenty","thirty","fourty","fifty","sixty","seventy","eighty","ninety"};

    if(num<10)
    {
        return units[num];
    }
    if(num<20)
    {
        return teens[num-10];
    }
    return tens[num/10]+units[num%10];

}
main()
{
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(n>=1 && n<=99)
    {
        string result =numberToText(n);
        cout<<result<<endl;
    }
    return 0;
}