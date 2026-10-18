
#include <iostream>
#include <string>
using namespace std;

struct Node {
    string name;
    Node* next;
    Node* prev;
};

Node* head = NULL;
Node* tail = NULL;

void insertBeginning(string name) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->prev = NULL;
    newNode->next = head;

    if (head == NULL)
        tail = newNode;
    else
        head->prev = newNode;

    head = newNode;
    cout << "Bus stop inserted at the beginning.\n";
}

void insertEnd(string name) {
    Node* newNode = new Node;
    newNode->name = name;
    newNode->next = NULL;
    newNode->prev = tail;

    if (tail == NULL)
        head = newNode;
    else
        tail->next = newNode;

    tail = newNode;
    cout << "Bus stop inserted at the end.\n";
}

void deleteStop(string name) {
    Node* temp = head;

    while (temp != NULL && temp->name != name)
        temp = temp->next;

    if (temp == NULL) {
        cout << "Bus stop not found.\n";
        return;
    }

    if (temp->prev != NULL)
        temp->prev->next = temp->next;
    else
        head = temp->next;

    if (temp->next != NULL)
        temp->next->prev = temp->prev;
    else
        tail = temp->prev;

    delete temp;
    cout << "Bus stop deleted successfully.\n";
}

void searchStop(string name) {
    Node* temp = head;
    int position = 1;

    while (temp != NULL) {
        if (temp->name == name) {
            cout << "Bus stop found at position "
                 << position << ".\n";
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Bus stop not found.\n";
}

void displayForward() {
    if (head == NULL) {
        cout << "No bus stops available.\n";
        return;
    }

    Node* temp = head;
    cout << "Forward: ";

    while (temp != NULL) {
        cout << temp->name << " <-> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

void displayReverse() {
    if (tail == NULL) {
        cout << "No bus stops available.\n";
        return;
    }

    Node* temp = tail;
    cout << "Reverse: ";

    while (temp != NULL) {
        cout << temp->name << " <-> ";
        temp = temp->prev;
    }

    cout << "NULL\n";
}

int main() {
    int choice;
    string name;

    do {
        cout << "\n--- Bus Stop Management System ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete Bus Stop\n";
        cout << "4. Search Bus Stop\n";
        cout << "5. Display Forward\n";
        cout << "6. Display Reverse\n";
        cout << "7. Exit\n";
        cout << "Enter your choice: ";

        if (!(cin >> choice)) {
            cout << "Invalid input.\n";
            break;
        }

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
                displayForward();
                break;

            case 6:
                displayReverse();
                break;

            case 7:
                cout << "Exiting program.\n";
                break;

            default:
                cout << "Invalid choice. Please try again.\n";
        }

    } while (choice != 7);

    return 0;
}
