#include <iostream>
#include <conio.h>
#include <string> // Added for better string handling
using namespace std;

// ==================== DATA ARRAYS (Global) ====================

string aircraftID[50], aircraftModel[50];
int aircraftYear[50], aircraftCount = 0;

string taskID[50], taskAircraftID[50], taskStatus[50];
string techUser[50];
int taskCount = 0;

string history[200];
int historyCount = 0;

// ==================== UTILITY FUNCTIONS ====================

void logHistory(string entry)
{
    if (historyCount < 200)
        history[historyCount++] = entry;
}

void pressAnyKey()
{
    cout << "Press any key to continue..";
    getch();
}

bool aircraftIDExists(string id)
{
    for (int i = 0; i < aircraftCount; i++)
        if (aircraftID[i] == id)
            return true;
    return false;
}

int findAircraftIndex(string id)
{
    for (int i = 0; i < aircraftCount; i++)
        if (aircraftID[i] == id)
            return i;
    return -1;
}

int findTaskIndex(string id, string user)
{
    for (int i = 0; i < taskCount; i++)
        if (taskID[i] == id && techUser[i] == user)
            return i;
    return -1;
}

int findTaskIndexAdmin(string id)
{
    for (int i = 0; i < taskCount; i++)
        if (taskID[i] == id)
            return i;
    return -1;
}

// ==================== AIRCRAFT FUNCTIONS ====================

void addAircraft()
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        if (aircraftCount >= 50)
        {
            cout << "(!)Error.Data Base Full.." << endl;
            break;
        }

        cout << "\nEnter Aircraft ID: ";
        cin >> aircraftID[aircraftCount];

        if (aircraftIDExists(aircraftID[aircraftCount]))
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
    logHistory("ADMIN: Aircraft Added");
    pressAnyKey();
}

void viewAircraft()
{
    system("cls");
    if (aircraftCount == 0)
    {
        cout << "No aircraft entered yet.." << endl;
    }
    else
    {
        for (int i = 0; i < aircraftCount; i++)
            cout << aircraftID[i] << " " << aircraftModel[i] << " " << aircraftYear[i] << endl;
    }
    pressAnyKey();
}

void updateAircraft()
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "Enter Aircraft ID to update : ";
        cin >> id;

        int idx = findAircraftIndex(id);
        if (idx != -1)
        {
            cout << "Enter Aircraft model: ";
            cin >> aircraftModel[idx];
            cout << "Enter Aircraft Year: ";
            cin >> aircraftYear[idx];
            cout << "Aircraft updated Successfully.." << endl;
            logHistory("ADMIN: Aircraft Updated");
        }
        else
        {
            cout << "Record not found.." << endl;
        }

        cout << "Update another?(y/n): ";
        cin >> more;
    }
    pressAnyKey();
}

void deleteAircraft()
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "Enter Aircraft ID to delete: ";
        cin >> id;

        int idx = findAircraftIndex(id);
        if (idx != -1)
        {
            for (int j = idx; j < aircraftCount - 1; j++)
            {
                aircraftID[j] = aircraftID[j + 1];
                aircraftModel[j] = aircraftModel[j + 1];
                aircraftYear[j] = aircraftYear[j + 1];
            }
            aircraftCount--;
            cout << "Aircraft deleted Successfully!.." << endl;
            logHistory("ADMIN: Aircraft Deleted");
        }
        else
        {
            cout << "Record not found.." << endl;
        }

        cout << "Delete more?(y/n): ";
        cin >> more;
    }
    pressAnyKey();
}

void searchAircraft()
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "Enter Aircraft ID:";
        cin >> id;

        int idx = findAircraftIndex(id);
        if (idx != -1)
            cout << "Model: " << aircraftModel[idx] << " Year: " << aircraftYear[idx] << endl;
        else
            cout << "Record Not Found!" << endl;

        cout << "Search another?(y/n): ";
        cin >> more;
        cout << "Search completed successfully.." << endl;
    }
    pressAnyKey();
}

void sortAircraft()
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
            cout << "ID :" << aircraftID[i] << " | Model: " << aircraftModel[i] << " | Year: " << aircraftYear[i] << endl;

        logHistory("ADMIN: Aircraft Sorted");
    }
    pressAnyKey();
}

// ==================== TASK FUNCTIONS ====================

void viewAllTasks()
{
    system("cls");
    cout << "-----------All Maintenance Tasks----------" << endl;
    if (taskCount == 0)
        cout << "NO Record have been entered yet!." << endl;
    else
        for (int i = 0; i < taskCount; i++)
            cout << taskID[i] << " " << taskAircraftID[i] << " " << taskStatus[i] << " " << techUser[i] << endl;

    pressAnyKey();
}

void deleteTask()
{
    string id;
    cout << "Enter task ID to delete: ";
    cin >> id;

    int idx = findTaskIndexAdmin(id);
    if (idx != -1)
    {
        for (int j = idx; j < taskCount - 1; j++)
        {
            taskID[j] = taskID[j + 1];
            taskAircraftID[j] = taskAircraftID[j + 1];
            taskStatus[j] = taskStatus[j + 1];
            techUser[j] = techUser[j + 1];
        }
        taskCount--;
        cout << "Record Deleted.." << endl;
        logHistory("ADMIN: Task Deleted");
    }
    else
        cout << "Record Not Found..";

    cout << "\nPress any key to continue..";
    pressAnyKey();
}

void viewAdminHistory()
{
    system("cls");
    cout << "--- Admin Action History ---" << endl;
    for (int i = 0; i < historyCount; i++)
        if (history[i][0]=='A' && history[i][1]=='D' &&  history[i][2]=='M' && history[i][3]=='I' && history[i][4]=='N')
           {cout << history[i] << endl;}

    pressAnyKey();
}

// ==================== TECHNICIAN TASK FUNCTIONS ====================

void techViewAircraft()
{
    if (aircraftCount == 0)
        cout << "No aircraft have been added.." << endl;

    for (int i = 0; i < aircraftCount; i++)
        cout << aircraftID[i] << " " << aircraftModel[i] << endl;

    pressAnyKey();
}

void techAddTask(string username)
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        if (taskCount >= 50)
        {
            cout << "(!)Error. Data Base Full.." << endl;
            break;
        }

        cout << "Enter Task ID: ";
        cin >> taskID[taskCount];

        string aID;
        cout << "Enter Aircraft ID: ";
        cin >> aID;

        if (!aircraftIDExists(aID))
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
            logHistory("TECH:" + username + " Added Task");
        }
    }
    pressAnyKey();
}

void techViewMyTasks(string username)
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
        cout << "No tasks added yet" << endl;

    pressAnyKey();
}

void techUpdateTask(string username)
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "Enter Task ID to update: ";
        cin >> id;

        int idx = findTaskIndex(id, username);
        if (idx != -1)
        {
            cout << "Enter New status: ";
            cin >> taskStatus[idx];
            logHistory("TECH:" + username + " Updated Task " + id);
            cout << "Task Updated Successfully.." << endl;
        }
        else
        {
            cout << "Task ID not Found or Not Yours.." << endl;
        }

        cout << "Do you want to update more tasks?(y/n): ";
        cin >> more;
    }
}

void techCompleteTask(string username)
{
    string id;
    cout << "Enter Task ID to complete: ";
    cin >> id;

    int idx = findTaskIndex(id, username);
    if (idx != -1)
    {
        taskStatus[idx] = "Completed";
        logHistory("TECH:" + username + " Completed Task " + id);
        cout << "Task marked as Completed!" << endl;
    }
    else
    {
        cout << "Record not found.." << endl;
    }

    cout << "Press any key to continue";
    getch();
}

void techSearchTask(string username)
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "Enter Task ID to search: ";
        cin >> id;

        int idx = findTaskIndex(id, username);
        if (idx != -1)
            cout << "Status: " << taskStatus[idx] << endl;
        else
            cout << "ID Record not found!" << endl;

        cout << "Search Another?(y/n): ";
        cin >> more;
    }
    pressAnyKey();
}

void techSortTasks(string username)
{
    if (taskCount == 0)
    {
        cout << "No tasks to sort!" << endl;
    }
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
            if (techUser[i] == username)
                cout << " Task ID: " << taskID[i] << " | Status: " << taskStatus[i] << endl;

        logHistory("TECH:" + username + " Sorted Tasks");
    }
    pressAnyKey();
}

void techViewPendingTasks(string username)
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

    pressAnyKey();
}

void techViewHistory(string username)
{
    system("cls");
    cout << "--- Your Action History (" << username << ") ---" << endl;
    string searchKey="TECH" + username;
    for (int i = 0; i < historyCount; i++)
    {
        bool match=true;
        for(int j=0;j<searchKey.length(); j++)
        {
            if(history[i][j] != searchKey[j])
            {
                match=false;
                break;
            }
        }
        if(match==true)
        {
            cout<<history[i]<<endl;
        }
    }
        

    pressAnyKey();
}

// ==================== MENU FUNCTIONS ====================

int login(string &username, int &role)
{
    string password;
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
        return 1;
    }
    else if ((username == "tech1" && password == "111") ||
             (username == "tech2" && password == "222"))
    {
        role = 2;
        cout << "\nTechnician Login Successful!" << endl;
        return 1;
    }
    else
    {
        cout << "\nInvalid Login!" << endl;
        getch();
        return 0;
    }
}

void adminMenu(string username)
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
            continue;
        }

        if (choice == 1)       addAircraft();
        else if (choice == 2)  viewAircraft();
        else if (choice == 3)  updateAircraft();
        else if (choice == 4)  deleteAircraft();
        else if (choice == 5)  searchAircraft();
        else if (choice == 6)  sortAircraft();
        else if (choice == 7)  viewAllTasks();
        else if (choice == 8)  deleteTask();
        else if (choice == 9)  viewAdminHistory();
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

void technicianMenu(string username)
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

        if (choice == 1)       techViewAircraft();
        else if (choice == 2)  techAddTask(username);
        else if (choice == 3)  techViewMyTasks(username);
        else if (choice == 4)  techUpdateTask(username);
        else if (choice == 5)  techCompleteTask(username);
        else if (choice == 6)  techSearchTask(username);
        else if (choice == 7)  techSortTasks(username);
        else if (choice == 8)  techViewPendingTasks(username);
        else if (choice == 9)  techViewHistory(username);
        else if (choice == 10)
        {
            system("cls");
            cout << "==============================================" << endl;
            cout << "         THANKYOU, " << username << "!" << endl;
            cout << "==============================================" << endl;
        }
    }
}

// ==================== MAIN ====================

int main()
{
    cout << "===============================================================" << endl;
    cout << "      AIRCRAFT MAINTENANCE TRACKING SYSTEM                   " << endl;
    cout << "===============================================================" << endl;

    string username;
    int role;

    while (true)
    {
        if (!login(username, role))
            continue;

        cout << "Press any key to continue..";
        getch();

        if (role == 1)
            adminMenu(username);
        else if (role == 2)
            technicianMenu(username);
    }

    return 0;
}