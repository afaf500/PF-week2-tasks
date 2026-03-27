#include<iostream>
using namespace std;
main()
{
    string word;
    string result=" ";
    
    cout<<"Enter a string: ";
    getline(cin,word);

    for(int i=0;i<word.length();i++)
    {
        char c=word[i];
    
    if(c =='a' || c =='e' || c =='i' || c =='o' || c =='u' || c =='A' || c =='E' || c =='I' || c =='O' ||c =='U' )
     {

     }
    else{
        result=result+c;
     }
    }
    cout<<"String with vowels removed: "<<result<<endl;
}
