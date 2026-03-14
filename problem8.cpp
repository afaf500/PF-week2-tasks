#include<iostream>
using namespace std;
main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int tens=n/10;
    int ones =n%10;
    if(n==100)
    {
        cout<<"hundred"<<endl;
    
    }
    else if(n == 10){cout<<"ten"<<endl;}
    else if(n==11){ cout<<"eleven"<<endl;}
    else if(n==12){ cout<<"twelve"<<endl;}
    else if(n==13){ cout<<"thirteen"<<endl;}
    else if(n==14){ cout<<"fourteen"<<endl;}
    else if(n==15){ cout<<"fifteen"<<endl;}
    else if(n==16){ cout<<"sixteen"<<endl;}
    else if(n==17){ cout<<"seventeen"<<endl;}
    else if(n==18){ cout<<"eighteen"<<endl;}
    else if(n==19){ cout<<"ninteen"<<endl;}

     if(tens==2){ cout<<"twenty" ;}
    else if(tens==3){ cout<<"thirty" ;}
    else if(tens==4){ cout<<"fourty" ;}
    else if(tens==5){ cout<<"fifty" ;}
    else if(tens==6){ cout<<"sixty" ;}
    else if(tens==7){ cout<<"seventy" ;}
    else if(tens==8){ cout<<"eighty" ;}
    else if(tens==9){ cout<<"ninty" ;}

     if(ones== 1){cout<<"one";}
    else if(ones== 2){cout<<"two";}
    else if(ones== 3){cout<<"three";}
    else if(ones== 4){cout<<"four";}
    else if(ones== 5){cout<<"five";}
    else if(ones== 6){cout<<"six";}
    else if(ones== 7){cout<<"seven";}
    else if(ones== 8){cout<<"eight";}
    else if(ones== 9){cout<<"nine";}
}