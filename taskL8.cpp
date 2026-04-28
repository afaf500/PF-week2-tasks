#include <iostream>
#include <string>
using namespace std;

char capSmall(char alphabet){
    char letter=alphabet; 
    if(letter>='a' && letter<='z')
    { 
        
        cout<<"You entered small "<<letter;
    }
    if(letter>='A' && letter<='Z')
    {
        cout<<"You entered capital: "<<letter;
    }
    return letter;
}
    main()
    {
        char letter;
        cout<<"Enter Alphabet(A/a): ";
        cin>>letter;
        capSmall(letter);
    }


