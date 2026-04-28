#include <iostream>
using namespace std;
float calculateSalary(float base,int score,int experience)
{
    float bonuspercentage=0.0;
    if(score>=90)
    {
       bonuspercentage=0.20;
    }
    else if(score>=75 && score<=89)
    {
       bonuspercentage=0.10; 
    }
    else{
        bonuspercentage=0.05;
    }
    if(experience>=5){bonuspercentage+=0.05;}
    float totalBonus=base*bonuspercentage;
    return base+totalBonus;
}
main()
{
    float base;
    int score,experience;
    cout<<"Enter base,score,and experience in years:"<<endl;
    cin>>base>>score>>experience;
    float finalSalary=calculateSalary(base, score,experience);
    cout<<"Final salary: "<<finalSalary<<endl;
    return 0;
}
