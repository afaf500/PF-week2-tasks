#include <iostream>
#include <string>
using namespace std;
bool isSymmetrical(int num)
{
    int firstDigit=num/100 ;
      //for hundreds 256/100=2.56 as int so 2
      int Lastdigit=num%10;

      if(firstDigit==Lastdigit)
      {
        return true;
      }
      return false;
}
main()
{
    int input;
    cout<<"Enter a 3 digit num: ";
    cin>>input;
    if(isSymmetrical(input))
    {
        cout<<"the number is symmetrical.";
    }
    else{
        cout<<"Number is not symmetrical.";
    }
}