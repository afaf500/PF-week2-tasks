#include<iostream>
using namespace std;
main()
{
   char single;
   
   cout<<"Enter any character in lower case : " ;
   cin>>single;
   if(single=='a' || single=='e'|| single=='i' || single=='o'|| single=='u')
   {
   cout<<"It is a vowel."<<endl;
   }
   else if(single>='0'  && single<='9')
   {
    cout<<"It is a number."<<endl;

   }
    else
   {
    cout<<"It is a consonant."<<endl;
   }
}