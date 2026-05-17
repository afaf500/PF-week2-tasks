#include <iostream>
#include <conio.h>
#include <fstream>
#include <string>
using namespace std;

// ==================== GLOBAL DATA ARRAYS ====================

string aircraftID[50];
string aircraftModel[50];
int aircraftYear[50];
int aircraftCount = 0;

string taskID[50];
string taskAircraftID[50];
string taskStatus[50];
string taskOwner[50];
int taskCount = 0;

string historyLog[200];
int historyCount = 0;
//======================== FILE NAME ======================

const string AIRCRAFT_FILENAME = "aircraft.txt";
const string TASK_FILENAME = "tasks.txt";
const string HISTORY_FILENAME = "history.txt";

// ==================== FILE FUNCTIONS ====================

void saveAircraftFile()                                       // saveAircraftFile
{
    fstream aircraftFile;
    aircraftFile.open(AIRCRAFT_FILENAME, ios::out);
    for (int i = 0; i < aircraftCount; i++)
        aircraftFile << aircraftID[i] << " " << aircraftModel[i] << " " << aircraftYear[i] << "\n";
    aircraftFile.close();
}

void loadAircraftFile()                                      // loadAircraftFile
{
    fstream aircraftFile;
    aircraftFile.open(AIRCRAFT_FILENAME, ios::in);
    if (!aircraftFile)
        return;
    while (aircraftFile >> aircraftID[aircraftCount] >> aircraftModel[aircraftCount] >> aircraftYear[aircraftCount])
    {
        aircraftCount++;
        if (aircraftCount >= 50)
            break;
    }
    aircraftFile.close();
}

void saveTaskFile()                                               // saveTaskFile
{
    fstream taskFile;
    taskFile.open(TASK_FILENAME, ios::out);
    for (int i = 0; i < taskCount; i++)
        taskFile << taskID[i] << " " << taskAircraftID[i] << " " << taskStatus[i] << " " << taskOwner[i] << "\n";
    taskFile.close();
}

void loadTaskFile()                                                 // loadTaskFile
{
    fstream taskFile;
    taskFile.open(TASK_FILENAME, ios::in);
    if (!taskFile)
        return;
    while (taskFile >> taskID[taskCount] >> taskAircraftID[taskCount] >> taskStatus[taskCount] >> taskOwner[taskCount])
    {
        taskCount++;
        if (taskCount >= 50)
            break;
    }
    taskFile.close();
}

void appendHistoryFile(string entry)                            // appendHistoryfile
{
    fstream historyFile;
    historyFile.open(HISTORY_FILENAME, ios::app);
    historyFile << entry << "\n";
    historyFile.close();
}

void loadHistoryFile()                                          // loadhistoryFile
{
    fstream historyFile;
    historyFile.open(HISTORY_FILENAME, ios::in);
    if (!historyFile)
        return;
    while (getline(historyFile, historyLog[historyCount]))
    {
        historyCount++;
        if (historyCount >= 200)
            break;
    }
    historyFile.close();
}

// ==================== UTILITY FUNCTIONS ====================

void logHistory(string entry) // loghistory
{
    if (historyCount < 200)
        historyLog[historyCount++] = entry;
    appendHistoryFile(entry);
}

void pressAnyKey() // pressAnykey
{
    cout << "\nPress any key to continue...";
    getch();
}

bool aircraftIDExists(string id) // aircraftIdExists
{
    for (int i = 0; i < aircraftCount; i++)
        if (aircraftID[i] == id)
            return true;
    return false;
}

int findAircraftIndex(string id) // findAircraftIndex
{
    for (int i = 0; i < aircraftCount; i++)
        if (aircraftID[i] == id)
            return i;
    return -1;
}

int findTaskIndex(string id, string user) // findTaskIndex
{
    for (int i = 0; i < taskCount; i++)
        if (taskID[i] == id && taskOwner[i] == user)
            return i;
    return -1;
}

int findTaskIndexAdmin(string id) // findTaskIndexAdmin
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
            cout << "\n(!) Database is full." << endl;
            break;
        }
        cout << "\nEnter Aircraft ID    : ";
        cin >> aircraftID[aircraftCount];
        if (aircraftIDExists(aircraftID[aircraftCount]))
        {
            cout << "(!) Aircraft ID already exists." << endl;
        }
        else
        {
            cout << "Enter Aircraft Model : ";
            cin >> aircraftModel[aircraftCount];
            cout << "Enter Aircraft Year  : ";
            cin >> aircraftYear[aircraftCount];
            aircraftCount++;
            cout << "\nAircraft added successfully." << endl;
            logHistory("ADMIN: Aircraft Added");
        }
        cout << "\nAdd another? (y/n): ";
        cin >> more;
    }
    saveAircraftFile();
    pressAnyKey();
}

void viewAircraft()
{
    system("cls");
    cout << "============================================" << endl;
    cout << "          ALL AIRCRAFT RECORDS              " << endl;
    cout << "============================================" << endl;
    if (aircraftCount == 0)
    {
        cout << "No aircraft records found." << endl;
    }
    else
    {
        cout << "ID\t\tMODEL\t\t\tYEAR" << endl;
        cout << "--------------------------------------------" << endl;
        for (int i = 0; i < aircraftCount; i++)
            cout << aircraftID[i] << "\t\t" << aircraftModel[i] << "\t\t" << aircraftYear[i] << endl;
    }
    pressAnyKey();
}

void updateAircraft()
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "\nEnter Aircraft ID to update: ";
        cin >> id;
        int index = findAircraftIndex(id);
        if (index != -1)
        {
            cout << "Enter new Model : ";
            cin >> aircraftModel[index];
            cout << "Enter new Year  : ";
            cin >> aircraftYear[index];
            cout << "\nAircraft updated successfully." << endl;
            logHistory("ADMIN: Aircraft Updated");
        }
        else
        {
            cout << "Aircraft ID not found." << endl;
        }
        cout << "\nUpdate another? (y/n): ";
        cin >> more;
    }
    saveAircraftFile();
    pressAnyKey();
}

void deleteAircraft()
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "\nEnter Aircraft ID to delete: ";
        cin >> id;
        int index = findAircraftIndex(id);
        if (index != -1)
        {
            for (int j = index; j < aircraftCount - 1; j++)
            {
                aircraftID[j] = aircraftID[j + 1];
                aircraftModel[j] = aircraftModel[j + 1];
                aircraftYear[j] = aircraftYear[j + 1];
            }
            aircraftCount--;
            cout << "\nAircraft deleted successfully." << endl;
            logHistory("ADMIN: Aircraft Deleted");
        }
        else
        {
            cout << "Aircraft ID not found." << endl;
        }
        cout << "\nDelete another? (y/n): ";
        cin >> more;
    }
    saveAircraftFile();
    pressAnyKey();
}

void searchAircraft()
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "\nEnter Aircraft ID to search: ";
        cin >> id;
        int index = findAircraftIndex(id);
        if (index != -1)
        {
            cout << "Model : " << aircraftModel[index] << endl;
            cout << "Year  : " << aircraftYear[index] << endl;
        }
        else
        {
            cout << "Aircraft ID not found." << endl;
        }
        cout << "\nSearch another? (y/n): ";
        cin >> more;
    }
    pressAnyKey();
}

void sortAircraft()
{
    if (aircraftCount == 0)
    {
        cout << "\nNo aircraft to sort." << endl;
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
                    string tempModel = aircraftModel[j];
                    int tempYear = aircraftYear[j];
                    aircraftID[j] = aircraftID[j + 1];
                    aircraftModel[j] = aircraftModel[j + 1];
                    aircraftYear[j] = aircraftYear[j + 1];
                    aircraftID[j + 1] = tempID;
                    aircraftModel[j + 1] = tempModel;
                    aircraftYear[j + 1] = tempYear;
                }
            }
        }
        cout << "\n-------- Sorted Aircraft --------" << endl;
        for (int i = 0; i < aircraftCount; i++)
            cout << "ID: " << aircraftID[i] << " | Model: " << aircraftModel[i] << " | Year: " << aircraftYear[i] << endl;
        saveAircraftFile();
        logHistory("ADMIN: Aircraft Sorted");
    }
    pressAnyKey();
}

// ==================== TASK FUNCTIONS (ADMIN) ====================

void viewAllTasks()
{
    system("cls");
    cout << "============================================" << endl;
    cout << "         ALL MAINTENANCE TASKS              " << endl;
    cout << "============================================" << endl;
    if (taskCount == 0)
    {
        cout << "No task records found." << endl;
    }
    else
    {
        cout << "TASK ID\t\tAIRCRAFT\tSTATUS\t\tTECHNICIAN" << endl;
        cout << "------------------------------------------------------------" << endl;
        for (int i = 0; i < taskCount; i++)
            cout << taskID[i] << "\t\t" << taskAircraftID[i] << "\t\t" << taskStatus[i] << "\t\t" << taskOwner[i] << endl;
    }
    pressAnyKey();
}

void deleteTask()
{
    string id;
    cout << "\nEnter Task ID to delete: ";
    cin >> id;
    int index = findTaskIndexAdmin(id);
    if (index != -1)
    {
        for (int j = index; j < taskCount - 1; j++)
        {
            taskID[j] = taskID[j + 1];
            taskAircraftID[j] = taskAircraftID[j + 1];
            taskStatus[j] = taskStatus[j + 1];
            taskOwner[j] = taskOwner[j + 1];
        }
        taskCount--;
        cout << "\nTask deleted successfully." << endl;
        logHistory("ADMIN: Task Deleted");
        saveTaskFile();
    }
    else
    {
        cout << "Task ID not found." << endl;
    }
    pressAnyKey();
}

void viewAdminHistory()
{
    system("cls");
    cout << "============================================" << endl;
    cout << "           ADMIN ACTION HISTORY             " << endl;
    cout << "============================================" << endl;
    bool found = false;
    for (int i = 0; i < historyCount; i++)
    {
        if (historyLog[i].length() >= 5 &&
            historyLog[i][0] == 'A' && historyLog[i][1] == 'D' &&
            historyLog[i][2] == 'M' && historyLog[i][3] == 'I' &&
            historyLog[i][4] == 'N')
        {
            cout << historyLog[i] << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No admin history found." << endl;
    pressAnyKey();
}

// ==================== TASK FUNCTIONS (TECHNICIAN) ====================

void techViewAircraft()
{
    system("cls");
    cout << "============================================" << endl;
    cout << "              AIRCRAFT LIST                 " << endl;
    cout << "============================================" << endl;
    if (aircraftCount == 0)
    {
        cout << "No aircraft records found." << endl;
    }
    else
    {
        cout << "ID\t\tMODEL" << endl;
        cout << "--------------------------------------------" << endl;
        for (int i = 0; i < aircraftCount; i++)
            cout << aircraftID[i] << "\t\t" << aircraftModel[i] << endl;
    }
    pressAnyKey();
}

void techAddTask(string username)
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        if (taskCount >= 50)
        {
            cout << "\n(!) Task database is full." << endl;
            break;
        }
        cout << "\nEnter Task ID    : ";
        cin >> taskID[taskCount];
        string aID;
        cout << "Enter Aircraft ID: ";
        cin >> aID;
        if (!aircraftIDExists(aID))
        {
            cout << "(!) Aircraft ID does not exist." << endl;
        }
        else
        {
            taskAircraftID[taskCount] = aID;
            taskStatus[taskCount] = "Pending";
            taskOwner[taskCount] = username;
            taskCount++;
            cout << "\nTask added successfully." << endl;
            logHistory("TECH:" + username + " Added Task");
        }
        cout << "\nAdd another task? (y/n): ";
        cin >> more;
    }
    saveTaskFile();
    pressAnyKey();
}

void techViewMyTasks(string username)
{
    system("cls");
    cout << "============================================" << endl;
    cout << "                MY TASKS                    " << endl;
    cout << "============================================" << endl;
    bool found = false;
    for (int i = 0; i < taskCount; i++)
    {
        if (taskOwner[i] == username)
        {
            cout << "Task ID: " << taskID[i]
                 << " | Aircraft: " << taskAircraftID[i]
                 << " | Status: " << taskStatus[i] << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No tasks found." << endl;
    pressAnyKey();
}

void techUpdateTask(string username)
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "\nEnter Task ID to update: ";
        cin >> id;
        int index = findTaskIndex(id, username);
        if (index != -1)
        {
            cout << "Enter new Status (Pending / InProgress / Completed): ";
            cin >> taskStatus[index];
            cout << "\nTask updated successfully." << endl;
            logHistory("TECH:" + username + " Updated Task " + id);
        }
        else
        {
            cout << "Task ID not found or does not belong to you." << endl;
        }
        cout << "\nUpdate another? (y/n): ";
        cin >> more;
    }
    saveTaskFile();
    pressAnyKey();
}

void techCompleteTask(string username)
{
    string id;
    cout << "\nEnter Task ID to mark as Completed: ";
    cin >> id;
    int index = findTaskIndex(id, username);
    if (index != -1)
    {
        taskStatus[index] = "Completed";
        cout << "\nTask marked as Completed." << endl;
        logHistory("TECH:" + username + " Completed Task " + id);
        saveTaskFile();
    }
    else
    {
        cout << "Task ID not found or does not belong to you." << endl;
    }
    pressAnyKey();
}

void techSearchTask(string username)
{
    char more = 'y';
    while (more == 'y' || more == 'Y')
    {
        string id;
        cout << "\nEnter Task ID to search: ";
        cin >> id;
        int index = findTaskIndex(id, username);
        if (index != -1)
        {
            cout << "Task ID  : " << taskID[index] << endl;
            cout << "Aircraft : " << taskAircraftID[index] << endl;
            cout << "Status   : " << taskStatus[index] << endl;
        }
        else
        {
            cout << "Task ID not found." << endl;
        }
        cout << "\nSearch another? (y/n): ";
        cin >> more;
    }
    pressAnyKey();
}

void techSortTasks(string username)
{
    if (taskCount == 0)
    {
        cout << "\nNo tasks to sort." << endl;
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
                    string tempAircraftID = taskAircraftID[j];
                    string tempStatus = taskStatus[j];
                    string tempOwner = taskOwner[j];
                    taskID[j] = taskID[j + 1];
                    taskAircraftID[j] = taskAircraftID[j + 1];
                    taskStatus[j] = taskStatus[j + 1];
                    taskOwner[j] = taskOwner[j + 1];
                    taskID[j + 1] = tempID;
                    taskAircraftID[j + 1] = tempAircraftID;
                    taskStatus[j + 1] = tempStatus;
                    taskOwner[j + 1] = tempOwner;
                }
            }
        }
        cout << "\n-------- Your Sorted Tasks --------" << endl;
        for (int i = 0; i < taskCount; i++)
            if (taskOwner[i] == username)
                cout << "Task ID: " << taskID[i] << " | Status: " << taskStatus[i] << endl;
        saveTaskFile();
        logHistory("TECH:" + username + " Sorted Tasks");
    }
    pressAnyKey();
}

void techViewPendingTasks(string username)
{
    system("cls");
    cout << "============================================" << endl;
    cout << "            MY PENDING TASKS                " << endl;
    cout << "============================================" << endl;
    bool found = false;
    for (int i = 0; i < taskCount; i++)
    {
        if (taskOwner[i] == username && taskStatus[i] == "Pending")
        {
            cout << "Task ID: " << taskID[i] << " | Aircraft: " << taskAircraftID[i] << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No pending tasks found." << endl;
    pressAnyKey();
}

void techViewHistory(string username)
{
    system("cls");
    cout << "============================================" << endl;
    cout << "            YOUR ACTION HISTORY             " << endl;
    cout << "============================================" << endl;
    string searchKey = "TECH:" + username;
    bool found = false;
    for (int i = 0; i < historyCount; i++)
    {
        bool match = true;
        for (int j = 0; j < (int)searchKey.length(); j++)
        {
            if (j >= (int)historyLog[i].length() || historyLog[i][j] != searchKey[j])
            {
                match = false;
                break;
            }
        }
        if (match)
        {
            cout << historyLog[i] << endl;
            found = true;
        }
    }
    if (!found)
        cout << "No history found." << endl;
    pressAnyKey();
}

// ==================== LOGIN ====================

int login(string &username, int &role)
{
    string password;
    cout << "============================================" << endl;
    cout << "                  LOGIN                     " << endl;
    cout << "============================================" << endl;
    cout << "Username : ";
    cin >> username;
    cout << "Password : ";
    cin >> password;

    if (username == "admin" && password == "123")
    {
        role = 1;
        cout << "\nLogin successful. Welcome, Admin!" << endl;
        pressAnyKey();
        return 1;
    }
    else if ((username == "tech1" && password == "111") ||
             (username == "tech2" && password == "222"))
    {
        role = 2;
        cout << "\nLogin successful. Welcome, " << username << "!" << endl;
        return 1;
    }
    else
    {
        cout << "\nInvalid username or password." << endl;
        getch();
        return 0;
    }
}

// ==================== ADMIN MENU ====================

void adminMenu(string username)
{
    int choice = 0;
    while (choice != 10)
    {
        system("cls");
        cout << "============================================" << endl;
        cout << "                ADMIN MENU                  " << endl;
        cout << "============================================" << endl;
        cout << " 1.  Add Aircraft" << endl;
        cout << " 2.  View Aircraft" << endl;
        cout << " 3.  Update Aircraft" << endl;
        cout << " 4.  Delete Aircraft" << endl;
        cout << " 5.  Search Aircraft" << endl;
        cout << " 6.  Sort Aircraft" << endl;
        cout << " 7.  View All Tasks" << endl;
        cout << " 8.  Delete Task" << endl;
        cout << " 9.  View History" << endl;
        cout << " 10. Logout" << endl;
        cout << "============================================" << endl;
        cout << "Enter choice: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            choice = 0;
            continue;
        }

        if (choice == 1)
            addAircraft();
        else if (choice == 2)
            viewAircraft();
        else if (choice == 3)
            updateAircraft();
        else if (choice == 4)
            deleteAircraft();
        else if (choice == 5)
            searchAircraft();
        else if (choice == 6)
            sortAircraft();
        else if (choice == 7)
            viewAllTasks();
        else if (choice == 8)
            deleteTask();
        else if (choice == 9)
            viewAdminHistory();
        else if (choice == 10)
        {
            system("cls");
            cout << "============================================" << endl;
            cout << "       Thank you, Admin. Logging out...     " << endl;
            cout << "============================================" << endl;
            getch();
        }
        else
        {
            cout << "\nInvalid choice. Please try again." << endl;
            getch();
        }
    }
}

// ==================== TECHNICIAN MENU ====================

void technicianMenu(string username)
{
    int choice = 0;
    while (choice != 10)
    {
        system("cls");
        cout << "============================================" << endl;
        cout << "            TECHNICIAN MENU                 " << endl;
        cout << "============================================" << endl;
        cout << " 1.  View Aircraft" << endl;
        cout << " 2.  Add Task" << endl;
        cout << " 3.  View My Tasks" << endl;
        cout << " 4.  Update Task" << endl;
        cout << " 5.  Complete Task" << endl;
        cout << " 6.  Search Task" << endl;
        cout << " 7.  Sort Tasks" << endl;
        cout << " 8.  View Pending Tasks" << endl;
        cout << " 9.  View My History" << endl;
        cout << " 10. Logout" << endl;
        cout << "============================================" << endl;
        cout << "Enter choice: ";

        if (!(cin >> choice))
        {
            cin.clear();
            cin.ignore(1000, '\n');
            choice = 0;
            continue;
        }

        if (choice == 1)
            techViewAircraft();
        else if (choice == 2)
            techAddTask(username);
        else if (choice == 3)
            techViewMyTasks(username);
        else if (choice == 4)
            techUpdateTask(username);
        else if (choice == 5)
            techCompleteTask(username);
        else if (choice == 6)
            techSearchTask(username);
        else if (choice == 7)
            techSortTasks(username);
        else if (choice == 8)
            techViewPendingTasks(username);
        else if (choice == 9)
            techViewHistory(username);
        else if (choice == 10)
        {
            system("cls");
            cout << "============================================" << endl;
            cout << "  Thank you, " << username << ". Logging out..." << endl;
            cout << "============================================" << endl;
            getch();
        }
        else
        {
            cout << "\nInvalid choice. Please try again." << endl;
            getch();
        }
    }
}

// ==================== MAIN ====================

int main()
{
    loadAircraftFile();
    loadTaskFile();
    loadHistoryFile();

    system("cls");
    cout << "============================================" << endl;
    cout << "   AIRCRAFT MAINTENANCE TRACKING SYSTEM     " << endl;
    cout << "============================================" << endl;

    string username;
    int role;

    while (true)
    {
        if (!login(username, role))
            continue;

        getch();

        if (role == 1)
            adminMenu(username);
        else if (role == 2)
            technicianMenu(username);
    }

    return 0;
}