#include <iostream>
using namespace std;
main()
{
    string word;
    char letter;
    bool isFound=false;
    cout<<"Enter a word: ";
    cin>>word;
    cout<<"Enter letter you want to find: ";
    cin>>letter;

    for(int i=0;word[i] != '\0';i++)
    {
        if(word[i]==letter)
        {
            isFound=true;
            break;
        }
    }
    if(isFound)
    {
        cout<<letter<<" is found in "<<word;
    }
    else{
        cout<<letter<<" not found in "<<word;
    }

}