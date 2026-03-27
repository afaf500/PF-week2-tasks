#include<iostream>
using namespace std;
main()
{
    string word;
    cout<<"Enter a word : ";
    cin>>word;

    int totalLetter=word.length();
    cout<<"Reverse word: ";

    for(int i=totalLetter-1;i>=0;i--)
    {
        cout<<word[i];
    }
    cout<<endl;
    return 0;
}