#include <iostream>
using namespace std;
main()
{
    int monthlySalary;
    int laptopPrice = 50000;
    int advanceMonthRequired = 6;
    float advancePercentage = 0.50;
    
    cout<<"Enter your monthly Salary : ";
    cin>>monthlySalary;

    float advanceSalary= monthlySalary*advancePercentage;
    float totalAdvance = advanceSalary * advanceMonthRequired;
    if(totalAdvance >= 50000)
    {
        cout<<"yes you can buy this laptop."<<endl;
    }
    else
    {
        cout<<"No you cannot buy this laptop."<<endl;
        int monthNeeded;
        monthNeeded=laptopPrice/advanceSalary;
        cout<<"months needed to buy the laptop : " <<monthNeeded<<endl;
    }
}