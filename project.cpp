#include <bits/stdc++.h>
using namespace std;

enum EmergencyType { THEFT = 1, MEDICAL = 2, FIRE = 3 };

string getEmergencyType(EmergencyType type) {
    switch (type) {
        case FIRE: return "FIRE";
        case MEDICAL: return "MEDICAL";
        case THEFT: return "THEFT";
        default: return "UNKNOWN";
    }
}

struct EmergencyCall {
    int caseID;
    string callerName;
    EmergencyType type;
    string location;
    string timeReceived;
    string status;

    bool operator<(const EmergencyCall& other) const {
        if (type == other.type)
            return timeReceived > other.timeReceived;
        return type < other.type;
    }
};

priority_queue<EmergencyCall> callQueue;
vector<EmergencyCall> callHistory;
int currentCaseID = 1001;
int receivedCount = 0, dispatchedCount = 0;

int getLastCaseID() {
    ifstream file("call_logs.csv");
    string line, lastLine;
    getline(file, line); // skip header
    while (getline(file, line)) lastLine = line;
    if (lastLine.empty()) return 1001;

    stringstream ss(lastLine);
    string id;
    getline(ss, id, ',');
    return stoi(id) + 1;
}

void saveToLog(const EmergencyCall& call) {
    ofstream file("call_logs.csv", ios::app);
    if (file.is_open()) {
        file << call.caseID << "," << call.callerName << ","
             << getEmergencyType(call.type) << "," << call.location << ","
             << call.timeReceived << "," << call.status << "\n";
        file.close();
    }
}

void receiveCall() {
    string name, location, time;
    int typeInput;
    cout << "\n--- New Emergency Call ---\n";
    cin.ignore();
    cout << "Caller Name: ";
    getline(cin, name);
    cout << "Location: ";
    getline(cin, location);
    cout << "Emergency Type (1-Theft, 2-Medical, 3-Fire): ";
    cin >> typeInput;
    cout << "Time Received (HH:MM): ";
    cin >> time;

    if (typeInput < 1 || typeInput > 3) {
        cout << "Invalid emergency type!\n";
        return;
    }

    EmergencyCall call;
    call.caseID = currentCaseID++;
    call.callerName = name;
    call.type = static_cast<EmergencyType>(typeInput);
    call.location = location;
    call.timeReceived = time;
    call.status = "RECEIVED";

    callQueue.push(call);
    callHistory.push_back(call);
    saveToLog(call);
    receivedCount++;

    cout << "Call received and added to queue. Case ID: #" << call.caseID << "\n";
}

void dispatchCall() {
    if (callQueue.empty()) {
        cout << "No pending emergency calls.\n";
        return;
    }

    EmergencyCall top = callQueue.top();
    callQueue.pop();
    top.status = "DISPATCHED";
    dispatchedCount++;

    cout << "\n--- Dispatching Emergency Unit ---\n";
    cout << "Case ID    : #" << top.caseID << "\n";
    cout << "Name       : " << top.callerName << "\n";
    cout << "Emergency  : " << getEmergencyType(top.type) << "\n";
    cout << "Location   : " << top.location << "\n";
    cout << "Time       : " << top.timeReceived << "\n";
    cout << "Status     : " << top.status << "\n";

    saveToLog(top);
}

void viewCallLogs() {
    ifstream file("call_logs.csv");
    if (!file) {
        cout << "No call logs found.\n";
        return;
    }

    cout << "\n--- Emergency Call Log ---\n";
    cout << left << setw(10) << "CaseID" << setw(15) << "Name" << setw(12) << "Type"
         << setw(20) << "Location" << setw(10) << "Time" << setw(12) << "Status\n";
    cout << "--------------------------------------------------------------------------\n";

    string line;
    getline(file, line);
    while (getline(file, line)) {
        replace(line.begin(), line.end(), ',', ' ');
        cout << line << endl;
    }

    file.close();
}

void viewPendingCalls() {
    if (callQueue.empty()) {
        cout << "No pending calls.\n";
        return;
    }

    priority_queue<EmergencyCall> temp = callQueue;
    cout << "\n--- Pending Emergency Calls ---\n";
    while (!temp.empty()) {
        EmergencyCall c = temp.top();
        temp.pop();
        cout << "Case #" << c.caseID << " | " << getEmergencyType(c.type)
             << " | " << c.callerName << " | " << c.location << " | Time: " << c.timeReceived << "\n";
    }
}

void searchCaseByID() {
    int id;
    cout << "Enter Case ID to Search: ";
    cin >> id;
    bool found = false;

    ifstream file("call_logs.csv");
    string line;
    getline(file, line);
    while (getline(file, line)) {
        stringstream ss(line);
        string caseID;
        getline(ss, caseID, ',');
        if (stoi(caseID) == id) {
            replace(line.begin(), line.end(), ',', ' ');
            cout << "Found: " << line << "\n";
            found = true;
            break;
        }
    }

    if (!found)
        cout << "No record found for Case ID #" << id << "\n";

    file.close();
}

void clearLogs() {
    char confirm;
    cout << "Are you sure you want to clear all logs? (y/n): ";
    cin >> confirm;
    if (confirm == 'y' || confirm == 'Y') {
        ofstream file("call_logs.csv", ios::trunc);
        file << "CaseID,Name,Type,Location,Time,Status\n";
        file.close();
        cout << "All logs cleared successfully.\n";
        receivedCount = dispatchedCount = 0;
    } else {
        cout << "Log clearing cancelled.\n";
    }
}

void showStats() {
    cout << "\n--- System Statistics ---\n";
    cout << "Total Calls Received  : " << receivedCount << "\n";
    cout << "Total Calls Dispatched: " << dispatchedCount << "\n";
    cout << "Currently Pending      : " << callQueue.size() << "\n";
}

void menu() {
    int choice;
    do {
        cout << "\n==============================\n";
        cout << " EMERGENCY DISPATCH SYSTEM\n";
        cout << "==============================\n";
        cout << "1. Receive Emergency Call\n";
        cout << "2. Dispatch Highest Priority Call\n";
        cout << "3. View Call Logs\n";
        cout << "4. View Pending Calls\n";
        cout << "5. Search Case by ID\n";
        cout << "6. Clear Logs (Admin)\n";
        cout << "7. View Statistics\n";
        cout << "8. Exit\n";
        cout << "Select an option: ";
        cin >> choice;

        switch (choice) {
            case 1: receiveCall(); break;
            case 2: dispatchCall(); break;
            case 3: viewCallLogs(); break;
            case 4: viewPendingCalls(); break;
            case 5: searchCaseByID(); break;
            case 6: clearLogs(); break;
            case 7: showStats(); break;
            case 8: cout << "Exiting system. Stay safe!\n"; break;
            default: cout << "Invalid choice.\n";
        }
    } while (choice != 8);
}

int main() {
    ofstream check("call_logs.csv", ios::app);
    check.seekp(0, ios::end);
    if (check.tellp() == 0) {
        check << "CaseID,Name,Type,Location,Time,Status\n";
    }
    check.close();

    currentCaseID = getLastCaseID();
    menu();
    return 0;
}




