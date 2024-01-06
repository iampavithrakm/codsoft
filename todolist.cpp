#include <iostream>
#include <vector>
using namespace std;

struct Task {
    string description;
    bool completed;
};

void displayTasks(const vector<Task>& tasks) {
    cout << "TO-DO-LIST\n";
    for (size_t i = 0; i < tasks.size(); ++i) {
        cout << i + 1 << ". [" << (tasks[i].completed ? "x" : " ") << "] " << tasks[i].description << endl;
    }
}

int main() {
    vector<Task> tasks;
    int choice;
    cout << "\t\t" << "********************************************" << endl;
    cout << "\t\t" << "*WELCOME TO-DO LIST MANAGER                *" << endl;
    cout << "\t\t" << "********************************************";

    while (true) {
        cout << "\nOPTIONS:\n";
        cout << "1. *ADD TASKS*\n";
        cout << "2. *VIEW TASKS*\n";
        cout << "3. *MARK TASK AS COMPLETED*\n";
        cout << "4. *REMOVE TASK*\n";
        cout << "5. *EXIT*\n";
        cout << "\t\t*ENTER YOUR CHOICE*: ";
        cin >> choice;

        if (choice == 1) {
            Task newTask;
            cout << "\t\tENTER TASK DESCRIPTION: ";
            cin.ignore(); // Ignore previous newline character in buffer
            cin.getline(&newTask.description[0], newTask.description.capacity());
            newTask.completed = false;
            tasks.push_back(newTask);
            cout << "TASK ADDED\n";
        }
        else if (choice == 2) {
            if (tasks.empty()) {
                cout << "\t\tNO TASKS TO DISPLAY.\n";
            }
            else {
                displayTasks(tasks);
            }
        }
        else if (choice == 3) {
            // Logic to mark task as completed
        }
        else if (choice == 4) {
            // Logic to remove task
        }
        else if (choice == 5) {
            cout << "!!!!!EXITING THE PROGRAM!!!!!.\n";
            break;
        }
        else {
            cout << "INVALID CHOICE. PLEASE CHOOSE A VALID OPTION.\n";
        }
    }
    return 0;
}
