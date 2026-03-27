#include<iostream>
#include<string>
using namespace std;
main()
{
    string text;  
    cout<<"Enter a word: ";
    getline(cin,text);
    

    for(int i =0;i<text.length();i++)
    {
        char current=text[i];

        if(current>='a' && current<='z' )
        {
            if(current=='z') { text[i]='a';}
            else { text[i]=current+1;}
        }
    
         else if (current>='A' && current<='Z')
         {
            if(current=='Z') {text[i]='A';}
            else {text[i]=current +1;}
         }
   }
   cout<<"Shifted string:"<<text<<endl;
   return 0;
}

        

    
    
