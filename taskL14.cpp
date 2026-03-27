#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size of string: ";
    cin>>size;
    string chords[size];
    cout<<"Enter"<<size<<"elements one per line: "<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>chords[i];
    }
    for(int i=0;i<size;i++)
    {
        string current=chords[i];
        int lastindex=current.length()-1;

        if(current[lastindex] !='7')
        {
            chords[i]=current+"7";
        }
    }
    cout<<"Jazified chords :[" ;
    for(int i=0;i<size;i++)
    {
        cout<<chords[i];
        if(i,size-1) { cout<<",";}

    }
    cout<<"]"<<endl;
    
}