#include<iostream>
#include <conio.h>
using namespace std;
main()
{
    int totalStudent = 100; // total size
    int index = 7;

    // data structures//
    string nameArray[totalStudent] = {"ali", "amar", "sara", "ahmad", "zain", "nida", "tariq"};
    int ageArray[totalStudent] = {19, 20, 21, 22, 20, 23, 24};
    float matricArray[totalStudent] = {1050, 1040, 1030, 1010, 990, 1045, 980};
    float interArray[totalStudent] = {1020, 1030, 1010, 990, 980, 1000, 985};
    float ecatArray[totalStudent] = {350, 200, 380, 330, 270, 310, 300};
    string pref1Array[totalStudent] = {"CE", "EE", "CS", "EE", "CS", "CE"};
    string pref2Array[totalStudent] = {"CS", "CE", "EE", "CE", "EE", "CS"};
    string pref3Array[totalStudent] = {"EE", "CS", "CE", "CS", "CE", "EE"};
    string admittedProgram[totalStudent];
    float aggArray[totalStudent];

    // CRUD create,read,update,Delete//
    while (true)
    {
        // main header of ums//
        system("cls");
        cout << "|--------------------------------------------------|" << endl;
        cout << "|------------University Management System----------|" << endl;
        cout << "|--------------------------------------------------|" << endl;

        cout << "  ---------Menu----------  " << endl;
        cout << "1. Admin." << endl;
        cout << "2. Student. " << endl;
        cout << "3. Exit. " << endl;
        cout << "Choose Option:";
        int userOption;
        cin >> userOption;
        cout << "You choose: " << userOption << endl;
        if (userOption == 1)
        {
            // write here admin code//
            for (int i = 0; i < 3; i++)
            {
                system("cls");

                cout << " admin menu. Login attempt" << i + 1 << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;

                if (username == "admin" && password == "123")
                {
                    cout << "Successful login." << endl;
                    while (true)
                    {
                        system("cls");
                        cout << "1.Show All Students." << endl;
                        cout << "2.Search Students." << endl;
                        cout << "3.Update Student Record." << endl;
                        cout << "4.Generate Merit List." << endl;
                        cout << "5. Delete Record." << endl;
                        cout << "6. Show admitted students" << endl;
                        cout<<  "7. logout"<<endl;
                        cout << "Choose options: ";
                        int adminOption;
                        cin >> adminOption;

                        if (adminOption == 1)
                        {
                            // show all student
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i]
                                         << "\t" << interArray[i] << "\t" << ecatArray[i] << "\t" << pref1Array[i]
                                         << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminOption == 2)
                        {
                            // search student by name//
                            cout << "Enter name you want to search: ";
                            string name;
                            cin >> name;
                            bool foundindex = -1;
                            bool found = false;

                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex]
                                     << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex]
                                     << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == 3)
                        {
                            // update student record
                            cout << "Enter the name you want to update record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            bool foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "--------Old Record-------" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tP1\tP2\tP3" << endl;
                                cout << nameArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex]
                                     << "\t" << interArray[foundindex] << "\t" << ecatArray[foundindex] << "\t" << pref1Array[foundindex]
                                     << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter New Record For Update." << endl;
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter age: ";
                                int age;
                                cin >> age;
                                cout << "Enter Matric Marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter FSC Marks: ";
                                float inter;
                                cin >> inter;
                                cout << "Enter Ecat Marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS,CE,EE as your preference." << endl;
                                cout << "Enter preference 1: ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter preference 2: ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter preference 3: ";
                                string pref3;
                                cin >> pref3;
                                nameArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                ecatArray[foundindex] = ecat;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = inter;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found." << endl;
                            }
                        }
                        else if (adminOption == 4)
                        {
                            // generate merit list
                            for (int i = 0; i < index; i++)
                            {
                                float aggri = matricArray[i] / 1100.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100 * 0.4 +
                                              ecatArray[i] / 400.0 * 100 * 0.3;

                                aggArray[i] = aggri;
                            }
                            // sorting the data on basis of aggregate//
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i + 1; j < index; j++)
                                {
                                    if (aggArray[i] < aggArray[j])
                                    {
                                        // swaping of name//
                                        string temp = nameArray[i];
                                        nameArray[i] = nameArray[j];
                                        nameArray[j] = temp;
                                        
                                        //swaping matric//
                                        float tempMatric=matricArray[i];
                                        matricArray[i]=matricArray[j];
                                        matricArray[j]=tempMatric;

                                        //swaping inter//
                                        float tempInter=interArray[i];
                                        interArray[i]=interArray[j];
                                        interArray[j]=tempInter;

                                        //swaping ecat//
                                        float tempEcat=ecatArray[i];
                                        ecatArray[i]=ecatArray[j];
                                        ecatArray[j]=tempEcat;

                                        //swaping preferences//
                                        string tempPref1=pref1Array[i];
                                        pref1Array[i]=pref1Array[j];
                                        pref1Array[j]=tempPref1;

                                        string tempPref2=pref2Array[i];
                                        pref2Array[i]=pref2Array[j];
                                        pref2Array[j]=tempPref2;

                                        string tempPref3=pref3Array[i];
                                        pref3Array[i]=pref3Array[j];
                                        pref3Array[j]=tempPref3;

                                        //swaping aggregate//
                                        float tempAggri=aggArray[i];
                                        aggArray[i]=aggArray[j];
                                        aggArray[j]=tempAggri;


                                    }
                                }
                            }

                            // code to display all data with aggregate//
                            cout << "Name\tAge\tAggregate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] != " ")
                                {
                                    cout << nameArray[i] << "\t" << ageArray[i] << "\t" << aggArray[i] << endl;
                                }
                            }
                            //admit students into disciplines//
                            int csSeats=2;
                            int ceSeats=2;
                            int eeSeats=2;
                            
                            for(int i=0;i<index;i++)
                            {
                                admittedProgram[i]="Not admitted";
                                if(pref1Array[i]=="CS"&& csSeats>0)
                                {
                                    admittedProgram[i]="CS";
                                    csSeats--;
                                    
                                }
                                else if(pref1Array[i]=="CE"&& ceSeats>0)
                                {
                                    admittedProgram[i]="CE";
                                    ceSeats--;
                                }
                                else if(pref1Array[i]=="EE"&& eeSeats>0 )
                                {
                                    admittedProgram[i]="EE";
                                    eeSeats--;
                                }
                            }
                        }
                        else if (adminOption == 5)
                        {
                            // delete record//
                            cout << "Enter the name you want to delete record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            bool foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (nameArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                nameArray[foundindex] = " ";
                                ageArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                pref1Array[foundindex] = " ";
                                pref2Array[foundindex] = " ";
                                pref3Array[foundindex] = " ";
                                cout << "Record of " << name << " is deleted." << endl;
                            }
                            else
                            {
                                cout << "Record not found." << endl;
                            }
                        }
                        else if(adminOption==6)
                        {
                            cout<<"Name\tProgram"<<endl;
                            for(int i=0;i<index;i++)
                            {
                               if(nameArray[i]!=" ")
                               {
                                cout<<nameArray[i]<<"\t"<<admittedProgram[i]<<endl;
                               }
                            }
                        }
                        else if (adminOption == 7)
                        {
                            // back//
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected." << endl;
                        }
                        cout << "Press any key to continue..";
                        _getch();
                    }
                    cout << "Press any key to continue..";
                    _getch();
                    break;
                }
                else
                {
                    cout << "Username or password invalid." << endl;
                }
                cout << "Press any key to continue...";
                _getch();
            }
        }
        else if (userOption == 2)
        {
            // write here student code
            system("cls");
            cout << "Welcome to UMS Student Menu." << endl;

            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter age: ";
            int age;
            cin >> age;
            cout << "Enter Matric Marks: ";
            float matric;
            cin >> matric;
            cout << "Enter FSC Marks: ";
            float inter;
            cin >> inter;
            cout << "Enter Ecat Marks: ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS,CE,EE as your preference." << endl;
            cout << "Enter preference 1: ";
            string pref1;
            cin >> pref1;
            cout << "Enter preference 2: ";
            string pref2;
            cin >> pref2;
            cout << "Enter preference 3: ";
            string pref3;
            cin >> pref3;
            nameArray[index] = name;
            ageArray[index] = age;
            ecatArray[index] = ecat;
            matricArray[index] = matric;
            interArray[index] = inter;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index++;
            cout << "Your data has been saved." << endl;

            _getch();
        }
        else if (userOption == 3)
        {
            break;
        }
        else
        {
            std::cout << "You entered wrong choice." << endl;
        }
    } // end of our main while loop//
    std::cout << "Thanks for using this software." << endl;
}