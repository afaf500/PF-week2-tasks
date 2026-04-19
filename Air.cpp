#include <iostream>

#include <conio.h>

#include <string> // Added for better string handling

using namespace std;

int main()

{

    cout << "===============================================================" << endl;

    cout << "      AIRCRAFT MAINTENANCE TRACKING SYSTEM                   " << endl;

    cout << "===============================================================" << endl;

    // Aircraft Data

    string aircraftID[50], aircraftModel[50];

    int aircraftYear[50], aircraftCount = 0;

    // Task Data

    string taskID[50], taskAircraftID[50], taskStatus[50];

    string techUser[50];

    int taskCount = 0;

    // History

    string history[200];

    int historyCount = 0;

    string username, password;

    int role;

    while (true)

    {

        // LOGIN

        cout << "======================================" << endl;

        cout << "               LOGIN                 " << endl;

        cout << "======================================" << endl;

        cout << "Username: ";

        cin >> username;

        cout << "Password: ";

        cin >> password;

        if (username == "admin" && password == "123")

        {

            role = 1;

            cout << "\nAdmin Login Successful!" << endl;
        }

        else if ((username == "tech1" && password == "111") ||

                 (username == "tech2" && password == "222"))

        {

            role = 2;

            cout << "\nTechnician Login Successful!" << endl;
        }

        else

        {

            cout << "\nInvalid Login!" << endl;

            getch();

            continue;
        }

        cout << "Press any key to continue..";

        getch();

        // ================= ADMIN =================

        if (role == 1)

        {

            int choice = 0;

            while (choice != 10)

            {

                system("cls");

                cout << "=================================================" << endl;

                cout << "                 ADMIN MENU                     " << endl;

                cout << "=================================================" << endl;

                cout << "1. Add Aircraft" << endl;

                cout << "2. View Aircraft" << endl;

                cout << "3. Update Aircraft" << endl;

                cout << "4. Delete Aircraft" << endl;

                cout << "5. Search Aircraft" << endl;

                cout << "6. Sort Aircraft" << endl;

                cout << "7. View All Tasks" << endl;

                cout << "8. Delete Tasks" << endl;

                cout << "9. View History" << endl;

                cout << "10. Logout" << endl;

                cout << "\nEnter choice: ";

                if (!(cin >> choice))

                {

                    cin.clear();

                    cin.ignore(1000, '\n');

                    choice = 0;

                    continue; // menu will print again.
                }

                // Add Aircraft

                if (choice == 1)

                {

                    char more = 'y';

                    while (more == 'y' || more == 'Y')

                    {

                        if (aircraftCount >= 50)

                        {

                            cout << "(!)Error.Data Base Full.." << endl;
                        }

                        cout << "\nEnter Aircraft ID: ";

                        cin >> aircraftID[aircraftCount];

                        bool exists = false;

                        for (int i = 0; i < aircraftCount; i++)

                        {

                            if (aircraftID[i] == aircraftID[aircraftCount])

                            {

                                exists = true;

                                break;
                            }
                        }

                        if (exists)

                        {

                            cout << "(!)Error. ID already exists" << endl;
                        }

                        else

                        {

                            cout << "Enter Aircraft Model: ";

                            cin >> aircraftModel[aircraftCount];

                            cout << "Enter Aircraft Year: ";

                            cin >> aircraftYear[aircraftCount];

                            aircraftCount++;
                        }

                        cout << "Add another? (y/n): ";

                        cin >> more;
                    }

                    cout << "Aircraft Added Successfully!.." << endl;

                    history[historyCount++] = "ADMIN: Aircraft Added";

                    cout << "Press any key to continue..";

                    getch();
                }

                // View Aircraft

                else if (choice == 2)

                {

                    system("cls");

                    if (aircraftCount == 0)

                    {

                        cout << "No aircraft entered yet.." << endl;
                    }

                    else
                    {

                        for (int i = 0; i < aircraftCount; i++)

                        {

                            cout << aircraftID[i] << " "

                                 << aircraftModel[i] << " "

                                 << aircraftYear[i] << endl;
                        }
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // update

                else if (choice == 3)

                {

                    char more = 'y';

                    while (more == 'y' || more == 'Y')

                    {

                        string id;

                        cout << "Enter Aircraft ID to update : ";

                        cin >> id;

                        bool found = false;

                        for (int i = 0; i < aircraftCount; i++)

                        {

                            if (aircraftID[i] == id)

                            {

                                cout << "Enter Aircraft model: ";

                                cin >> aircraftModel[i];

                                cout << "Enter Aircraft Year: ";

                                cin >> aircraftYear[i];

                                found = true;

                                cout << "Aircraft updated Successfully.." << endl;

                                break;
                            }
                        }

                        if (found)

                        {

                            history[historyCount++] = "ADMIN: Aircraft Updated";
                        }

                        else

                        {

                            cout << "Record not found.." << endl;
                        }

                        cout << "Update another?(y/n): ";

                        cin >> more;
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // Delete

                else if (choice == 4)

                {

                    char more = 'y';

                    while (more == 'y' || more == 'Y')

                    {

                        string id;

                        cout << "Enter Aircraft ID to delete: ";

                        cin >> id;

                        bool found = false;

                        for (int i = 0; i < aircraftCount; i++)

                        {

                            if (aircraftID[i] == id)

                            {

                                for (int j = i; j < aircraftCount - 1; j++)

                                {

                                    aircraftID[j] = aircraftID[j + 1];

                                    aircraftModel[j] = aircraftModel[j + 1];

                                    aircraftYear[j] = aircraftYear[j + 1];
                                }

                                aircraftCount--;

                                found = true;

                                cout << "Aircraft deleted Successfully!.." << endl;

                                break;
                            }
                        }

                        if (found)

                        {

                            history[historyCount++] = "ADMIN: Aircraft Deleted";
                        }

                        else

                        {

                            cout << "Record not found.." << endl;
                        }

                        cout << "Delete more?(y/n): ";

                        cin >> more;
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // Search

                else if (choice == 5)

                {

                    char more = 'y';

                    while (more == 'y' || more == 'Y')

                    {

                        string id;

                        cout << "Enter Aircraft ID:";

                        cin >> id;

                        bool found = false;

                        for (int i = 0; i < aircraftCount; i++)

                        {

                            if (aircraftID[i] == id)

                            {

                                cout << "Model: " << aircraftModel[i] << " Year: "

                                     << aircraftYear[i] << endl;

                                found = true;
                            }
                        }

                        if (!found)

                        {

                            cout << "Record Not Found!" << endl;
                        }

                        cout << "Search another?(y/n): ";

                        cin >> more;

                        cout << "Search completed successfully.." << endl;
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // sorting

                else if (choice == 6)

                {

                    if (aircraftCount == 0)

                    {

                        cout << "No aircraft to sort!" << endl;
                    }

                    else

                    {

                        for (int i = 0; i < aircraftCount - 1; i++)

                        {

                            for (int j = 0; j < aircraftCount - i - 1; j++)

                            {

                                if (aircraftID[j] > aircraftID[j + 1])

                                {

                                    string tempID = aircraftID[j];

                                    aircraftID[j] = aircraftID[j + 1];

                                    aircraftID[j + 1] = tempID;

                                    string tempModel = aircraftModel[j];

                                    aircraftModel[j] = aircraftModel[j + 1];

                                    aircraftModel[j + 1] = tempModel;

                                    int tempYear = aircraftYear[j];

                                    aircraftYear[j] = aircraftYear[j + 1];

                                    aircraftYear[j + 1] = tempYear;
                                }
                            }
                        }

                        cout << "---------Sorted Aircraft-------" << endl;

                        for (int i = 0; i < aircraftCount; i++)

                        {

                            cout << "ID :" << aircraftID[i] << " | Model: " << aircraftModel[i] << " | Year: " << aircraftYear[i] << endl;
                        }

                        history[historyCount++] = "ADMIN: Aircraft Sorted";
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // View Tasks

                else if (choice == 7)

                {

                    system("cls");

                    cout << "-----------All Maintenance Tasks----------" << endl;

                    if (taskCount == 0)

                    {

                        cout << "NO Record have been entered yet!." << endl;
                    }

                    else

                    {

                        for (int i = 0; i < taskCount; i++)

                        {

                            cout << taskID[i] << " "

                                 << taskAircraftID[i] << " "

                                 << taskStatus[i] << " "

                                 << techUser[i] << endl;
                        }
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // Delete Tasks

                else if (choice == 8)

                {

                    string id;

                    cout << "Enter task ID to delete: ";

                    cin >> id;

                    bool found = false;

                    for (int i = 0; i < taskCount; i++)

                    {

                        if (taskID[i] == id)

                        {

                            for (int j = i; j < taskCount - 1; j++)

                            {

                                taskID[j] = taskID[j + 1];

                                taskAircraftID[j] = taskAircraftID[j + 1];

                                taskStatus[j] = taskStatus[j + 1];

                                techUser[j] = techUser[j + 1];
                            }

                            taskCount--;

                            found = true;

                            break;
                        }
                    }

                    if (found)

                    {

                        cout << "Record Deleted.." << endl;

                        history[historyCount++] = "ADMIN: Task Deleted";
                    }

                    else

                        cout << "Record Not Found..";

                    cout << "\nPress any key to continue..";

                    getch();
                }

                // View history

                else if (choice == 9)

                {

                    system("cls");

                    cout << "--- Admin Action History ---" << endl;

                    for (int i = 0; i < historyCount; i++)

                    {

                        if (history[i].find("ADMIN:") != string::npos)

                        {

                            cout << history[i] << endl;
                        }
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                else if (choice == 10)

                {

                    system("cls");

                    cout << "=====================================================" << endl;

                    cout << "               THANKYOU , ADMIN !                    " << endl;

                    cout << "         LOGGING OUT SUCCESSFULLY..                  " << endl;

                    cout << "======================================================" << endl;

                    cout << endl;

                    cout << "Press any key to continue.." << endl;

                    getch();
                }

                else

                {

                    cout << "Invali choice.Please try again." << endl;

                    cout << "Press ny key to continue...";

                    getch();
                }
            }
        }

        // ================= TECHNICIAN =================

        else if (role == 2)

        {

            int choice = 0;

            while (choice != 10)

            {

                system("cls");

                cout << "==================================================" << endl;

                cout << "             TECHNICIAN MENU                     " << endl;

                cout << "==================================================" << endl;

                cout << "1 View Aircraft\n2 Add Task\n3 View My Tasks\n4 Update Task\n";

                cout << "5 Complete Task\n6 Search Task\n7 Sort Tasks\n8 View Pending Tasks\n";

                cout << "9 View History\n10 Logout\n";

                cout << "Enter Choice: ";

                if (!(cin >> choice))

                {

                    cin.clear();

                    cin.ignore(1000, '\n');

                    choice = 0;

                    continue;
                }

                // View Aircraft

                if (choice == 1)

                {

                    if (aircraftCount == 0)

                    {

                        cout << "No aircraft have been added.." << endl;
                    }

                    for (int i = 0; i < aircraftCount; i++)

                    {

                        cout << aircraftID[i] << " " << aircraftModel[i] << endl;
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // Add Tasks

                else if (choice == 2)

                {

                    char more = 'y';

                    while (more == 'y' || more == 'Y')

                    {

                        if (taskCount >= 50)

                        {

                            cout << "(!)Error. Data Base Full.." << endl;
                        }

                        cout << "Enter Task ID: ";

                        cin >> taskID[taskCount];

                        string aID;

                        cout << "Enter Aircraft ID: ";

                        cin >> aID;

                        bool exists = false;

                        for (int i = 0; i < aircraftCount; i++)

                        {

                            if (aircraftID[i] == aID)

                            {

                                exists = true;

                                break;
                            }
                        }

                        if (!exists)

                        {

                            cout << "(!)Error aircraft ID doesnot exists.." << endl;
                        }

                        else
                        {

                            taskAircraftID[taskCount] = aID;

                            taskStatus[taskCount] = "Pending";

                            techUser[taskCount] = username;

                            taskCount++;

                            cout << "Want to add more tasks(y/n):";

                            cin >> more;

                            cout << "Task Added successfully.." << endl;

                            history[historyCount++] = "TECH:" + username + " Added Task";
                        }
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // View my tasks

                else if (choice == 3)

                {

                    bool found = false;

                    for (int i = 0; i < taskCount; i++)

                    {

                        if (techUser[i] == username)

                        {

                            cout << "Task ID: " << taskID[i] << " | Status: " << taskStatus[i] << endl;

                            found = true;
                        }
                    }

                    if (!found)

                    {

                        cout << "No tasks added yet" << endl;
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // update

                else if (choice == 4)

                {

                    char more = 'y';

                    while (more == 'y' || more == 'Y')

                    {

                        string id;

                        cout << "Enter Task ID to update: ";

                        cin >> id;

                        bool found = false;

                        for (int i = 0; i < taskCount; i++)

                        {

                            if (taskID[i] == id && techUser[i] == username)

                            {

                                cout << "Enter New status: ";

                                cin >> taskStatus[i];

                                history[historyCount++] = "TECH:" + username + " Updated Task " + id;

                                cout << "Task Updated Successfully.." << endl;

                                found = true;

                                break;
                            }
                        }

                        if (!found)

                        {

                            cout << "Task ID not Found or Not Yours.." << endl;
                        }

                        cout << "Do you want to update more tasks?(y/n): ";

                        cin >> more;
                    }
                }

                // complete tasks

                else if (choice == 5)

                {

                    string id;

                    cout << "Enter Task ID to complete: ";

                    cin >> id;

                    bool found = false;

                    for (int i = 0; i < taskCount; i++)

                    {

                        if (taskID[i] == id && techUser[i] == username)

                        {

                            taskStatus[i] = "Completed";

                            history[historyCount++] = "TECH:" + username + " Completed Task " + id;

                            cout << "Task marked as Completed!" << endl;

                            found = true;

                            break;
                        }
                    }

                    if (!found)

                    {

                        cout << "Record not found.." << endl;
                    }

                    cout << "Press any key to continue";

                    getch();
                }

                // search

                else if (choice == 6)

                {

                    char more = 'y';

                    while (more == 'y' || more == 'Y')

                    {

                        string id;

                        cout << "Enter Task ID to search: ";

                        cin >> id;

                        bool found = false;

                        for (int i = 0; i < taskCount; i++)

                        {

                            if (taskID[i] == id && techUser[i] == username)

                            {

                                cout << "Status: " << taskStatus[i] << endl;

                                found = true;
                            }
                        }

                        if (!found)

                        {

                            cout << "ID Record not found!" << endl;
                        }

                        cout << "Search Another?(y\n): ";

                        cin >> more;
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // sort

                else if (choice == 7)

                {

                    if (taskCount == 0)

                        cout << "No tasks to sort!" << endl;

                    else

                    {

                        for (int i = 0; i < taskCount - 1; i++)

                        {

                            for (int j = 0; j < taskCount - i - 1; j++)

                            {

                                if (taskID[j] > taskID[j + 1])

                                {

                                    string tempID = taskID[j];
                                    taskID[j] = taskID[j + 1];
                                    taskID[j + 1] = tempID;

                                    string tempStatus = taskStatus[j];
                                    taskStatus[j] = taskStatus[j + 1];
                                    taskStatus[j + 1] = tempStatus;

                                    string tempUser = techUser[j];
                                    techUser[j] = techUser[j + 1];
                                    techUser[j + 1] = tempUser;

                                    string tempAID = taskAircraftID[j];
                                    taskAircraftID[j] = taskAircraftID[j + 1];
                                    taskAircraftID[j + 1] = tempAID;
                                }
                            }
                        }

                        cout << "---Sorted Tasks---" << endl;

                        for (int i = 0; i < taskCount; i++)

                        {

                            if (techUser[i] == username)

                                cout << " Task ID: " << taskID[i] << " | Status: " << taskStatus[i] << endl;
                        }

                        history[historyCount++] = "TECH:" + username + " Sorted Tasks";
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                // view pending

                else if (choice == 8)

                {

                    bool foundPending = false;

                    for (int i = 0; i < taskCount; i++)

                    {

                        if (taskStatus[i] == "Pending" && techUser[i] == username)

                        {

                            cout << "Pending Task ID: " << taskID[i] << endl;

                            foundPending = true;
                        }
                    }

                    if (!foundPending)

                        cout << "No pending tasks found." << endl;

                    cout << "Press any key to continue..";

                    getch();
                }

                // view history

                else if (choice == 9)

                {

                    system("cls");

                    cout << "--- Your Action History (" << username << ") ---" << endl;

                    for (int i = 0; i < historyCount; i++)

                    {

                        if (history[i].find("TECH:" + username) != string::npos)

                        {

                            cout << history[i] << endl;
                        }
                    }

                    cout << "Press any key to continue..";

                    getch();
                }

                else if (choice == 10)

                {

                    system("cls");

                    cout << "==============================================" << endl;

                    cout << "         THANKYOU, " << username << "!" << endl;

                    cout << "==============================================" << endl;
                }
            }
        }
    }

    return 0;
}