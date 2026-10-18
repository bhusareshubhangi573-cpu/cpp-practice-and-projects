
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* next;
};

Node* head = NULL;

// Insert a bus stop at the beginning
void insertBeginning(string name) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->next = head;
    head = newNode;

    cout << "Bus stop inserted at the beginning.\n";
}

// Insert a bus stop at the end
void insertEnd(string name) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
    } else {
        Node* temp = head;

        while (temp->next != NULL) {
            temp = temp->next;
        }

        temp->next = newNode;
    }

    cout << "Bus stop inserted at the end.\n";
}

// Delete a bus stop by name
void deleteStop(string name) {
    if (head == NULL) {
        cout << "List is empty.\n";
        return;
    }

    Node* temp = head;
    Node* prev = NULL;

    while (temp != NULL && temp->name != name) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Bus stop not found.\n";
        return;
    }

    if (prev == NULL) {
        head = head->next;
    } else {
        prev->next = temp->next;
    }

    delete temp;
    cout << "Bus stop deleted successfully.\n";
}

// Search for a bus stop
void searchStop(string name) {
    Node* temp = head;

    while (temp != NULL) {
        if (temp->name == name) {
            cout << "Bus stop found: " << name << endl;
            return;
        }

        temp = temp->next;
    }

    cout << "Bus stop not found.\n";
}

// Display all bus stops
void displayStops() {
    if (head == NULL) {
        cout << "No bus stops available.\n";
        return;
    }

    Node* temp = head;

    cout << "Bus Stops: ";
    while (temp != NULL) {
        cout << temp->name;

        if (temp->next != NULL) {
            cout << " -> ";
        }

        temp = temp->next;
    }

    cout << " -> NULL\n";
}

// Main function
int main() {
    int choice;
    string name;

    do {
        cout << "\n--- Bus Stop Management ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete Bus Stop\n";
        cout << "4. Search Bus Stop\n";
        cout << "5. Display Bus Stops\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter bus stop name: ";
                getline(cin >> ws, name);
                insertBeginning(name);
                break;

            case 2:
                cout << "Enter bus stop name: ";
                getline(cin >> ws, name);
                insertEnd(name);
                break;

            case 3:
                cout << "Enter bus stop to delete: ";
                getline(cin >> ws, name);
                deleteStop(name);
                break;

            case 4:
                cout << "Enter bus stop to search: ";
                getline(cin >> ws, name);
                searchStop(name);
                break;

            case 5:
                displayStops();
                break;

            case 6:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }

    } while (choice != 6);

    return 0;
}
