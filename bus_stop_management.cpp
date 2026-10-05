#include <iostream>
using namespace std;

struct Node
{
    string name;
    Node* next;
};

Node* head = NULL;

// Insert at beginning
void insertBeginning(string name)
{
    Node* newNode = new Node;
    newNode->name = name;
    newNode->next = head;
    head = newNode;
}

// Insert at end
void insertEnd(string name)
{
    Node* newNode = new Node;
    newNode->name = name;
    newNode->next = NULL;

    if (head == NULL)
    {
        head = newNode;
    }
    else
    {
        Node* temp = head;

        while (temp->next != NULL)
            temp = temp->next;

        temp->next = newNode;
    }
}

// Delete bus stop
void deleteStop(string name)
{
    Node* temp = head;

    if (head == NULL)
    {
        cout << "List is empty.\n";
        return;
    }

    if (head->name == name)
    {
        head = head->next;
        delete temp;
        cout << "Bus stop deleted.\n";
        return;
    }

    while (temp->next != NULL && temp->next->name != name)
        temp = temp->next;

    if (temp->next == NULL)
        cout << "Bus stop not found.\n";
    else
    {
        Node* del = temp->next;
        temp->next = del->next;
        delete del;
        cout << "Bus stop deleted.\n";
    }
}

// Search bus stop
void searchStop(string name)
{
    Node* temp = head;
    int position = 1;

    while (temp != NULL)
    {
        if (temp->name == name)
        {
            cout << "Bus stop found at position " << position << ".\n";
            return;
        }

        temp = temp->next;
        position++;
    }

    cout << "Bus stop not found.\n";
}

// Display
void display()
{
    Node* temp = head;

    cout << "Bus Stops: ";

    while (temp != NULL)
    {
        cout << temp->name << " -> ";
        temp = temp->next;
    }

    cout << "NULL\n";
}

int main()
{
    int choice;
    string name;

    do
    {
        cout << "\n--- BUS STOP LINKED LIST ---\n";
        cout << "1. Insert at Beginning\n";
        cout << "2. Insert at End\n";
        cout << "3. Delete\n";
        cout << "4. Search\n";
        cout << "5. Display\n";
        cout << "6. Exit\n";

        cout << "Enter choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "Enter bus stop: ";
            cin >> name;
            insertBeginning(name);
            cout << "Inserted successfully.\n";
            break;

        case 2:
            cout << "Enter bus stop: ";
            cin >> name;
            insertEnd(name);
            cout << "Inserted successfully.\n";
            break;

        case 3:
            cout << "Enter bus stop to delete: ";
            cin >> name;
            deleteStop(name);
            break;

        case 4:
            cout << "Enter bus stop to search: ";
            cin >> name;
            searchStop(name);
            break;

        case 5:
            display();
            break;

        case 6:
            cout << "Program ended.\n";
            break;

        default:
            cout << "Invalid choice.\n";
        }

    } while (choice != 6);

    return 0;
}
