#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

void displayList(int list[], int size) {
    if (size == 0) {
        cout << "Waiting list is empty.\n";
        return;
    }
    cout << "Current Waiting List: ";
    for (int i = 0; i < size; i++) {
        cout << list[i] << " ";
    }
    cout << endl;
}

int main() {
    int waitingList[MAX_SIZE];
    int size = 0;
    int choice, id, pos;

    do {
        cout << "\n==== Clinic Waiting List System ====" << endl;
        cout << "1. Add new patient (Insert at End)\n";
        cout << "2. Call next patient (Delete from Front)\n";
        cout << "3. Cancel appointment (Delete by ID)\n";
        cout << "4. Display waiting list\n";
        cout << "5. Search patient by ID\n";
        cout << "6. Update patient ID\n";
        cout << "0. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: // Insert at End
                if (size >= MAX_SIZE) {
                    cout << "List is full. Cannot add more patients.\n";
                } else {
                    cout << "Enter patient ID: ";
                    cin >> id;
                    waitingList[size] = id;
                    size++;
                    cout << "Patient added to the waiting list.\n";
                }
                break;

            case 2: // Delete from Front
                if (size == 0) {
                    cout << "No patients in waiting list.\n";
                } else {
                    cout << "Calling patient with ID: " << waitingList[0] << endl;
                    for (int i = 0; i < size - 1; i++) {
                        waitingList[i] = waitingList[i + 1];
                    }
                    size--;
                }
                break;

            case 3: // Delete by ID
                if (size == 0) {
                    cout << "List is empty.\n";
                } else {
                    cout << "Enter patient ID to cancel: ";
                    cin >> id;
                    pos = -1;
                    for (int i = 0; i < size; i++) {
                        if (waitingList[i] == id) {
                            pos = i;
                            break;
                        }
                    }
                    if (pos == -1) {
                        cout << "Patient ID not found.\n";
                    } else {
                        for (int i = pos; i < size - 1; i++) {
                            waitingList[i] = waitingList[i + 1];
                        }
                        size--;
                        cout << "Appointment cancelled.\n";
                    }
                }
                break;

            case 4: // Display
                displayList(waitingList, size);
                break;

            case 5: // Search by ID
                cout << "Enter patient ID to search: ";
                cin >> id;
                pos = -1;
                for (int i = 0; i < size; i++) {
                    if (waitingList[i] == id) {
                        pos = i;
                        break;
                    }
                }
                if (pos == -1) {
                    cout << "Patient not found.\n";
                } else {
                    cout << "Patient found at position " << pos + 1 << ".\n";
                }
                break;

            case 6: // Update ID
                cout << "Enter old ID to update: ";
                cin >> id;
                pos = -1;
                for (int i = 0; i < size; i++) {
                    if (waitingList[i] == id) {
                        pos = i;
                        break;
                    }
                }
                if (pos == -1) {
                    cout << "Patient not found.\n";
                } else {
                    cout << "Enter new ID: ";
                    cin >> waitingList[pos];
                    cout << "Patient ID updated.\n";
                }
                break;

            case 0:
                cout << "Exiting system.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 0);

    return 0;
}
