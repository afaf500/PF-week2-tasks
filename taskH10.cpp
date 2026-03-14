#include <iostream>
using namespace std;
main()
{
    while (true)
    {
        int choice;
        cout<<"---Restaurant Management System---"<<endl;
        cout<<"1.View food menu."<<endl;
        cout<<"2. place order."<<endl;
        cout<<"3. View order status."<<endl;
        cout<<"4. Contact staff."<<endl;
        cout<<"5. Generate bill."<<endl;
        cout<<"6. Exit."     <<endl;
        cout<<"Enter choices(1_6): ";
        cin>>choice;

        if(choice==1)
        {
            cout<<"You selected: View food menu"<<endl;
        }

         if(choice==2)
        {
            cout<<"You selected: place order"<<endl;
        }
         if(choice==3)
        {
            cout<<"You selected: View order status"<<endl;
        }
         if(choice==4)
        {
            cout<<"You selected: Contact staff"<<endl;
        }
         if(choice==5)
        {
            cout<<"You selected: Generate bill"<<endl;
        }
         if(choice==6)
        {
            cout<<"You selected: Exit"<<endl;
            break;
        
        }
    }
}
