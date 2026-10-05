# Unit 3 – Linked List: Bus Stop Management

## Problem Statement
Implement a singly linked list to maintain bus stop names. Perform insertion at the beginning/end, deletion, and searching operations.

## Objective
To implement a singly linked list in C++ and perform basic operations such as insertion, deletion, and searching on bus stop names.

## Data Structure
Singly Linked List

## Operations
- Insert a bus stop at the beginning
- Insert a bus stop at the end
- Delete a bus stop
- Search for a bus stop
- Display all bus stops

## Algorithm

1. Start.
2. Initialize `head = NULL`.
3. Display the menu of operations.
4. Read the user's choice.
5. If the choice is insertion at beginning:
   - Create a new node.
   - Store the bus stop name.
   - Link the new node to the current head.
   - Update head.
6. If the choice is insertion at end:
   - Create a new node.
   - Traverse to the last node.
   - Link the new node to the last node.
7. If the choice is deletion:
   - Search for the required bus stop.
   - Remove the corresponding node.
8. If the choice is searching:
   - Traverse the linked list.
   - Compare each bus stop name with the required name.
9. Display the result.
10. Repeat the operations until Exit is selected.
11. Stop.

## Flowchart

<img width="1024" height="1536" alt="WhatsApp Image 2026-10-05 at 20 12 22" src="https://github.com/user-attachments/assets/79c3dd1d-71ff-46fc-a428-471ae50c8901" />
## Program

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


## Output

<img width="1920" height="1080" alt="Screenshot (1)" src="https://github.com/user-attachments/assets/b3ce455b-3b72-4b96-887b-d7076da34bcd" />

## Concepts Used
- Structures
- Pointers
- Dynamic Memory Allocation
- Singly Linked List
- Insertion
- Deletion
- Searching
- Traversal

## Programming Language
C++

## Conclusion
The program successfully implements a singly linked list for maintaining bus stop names. It demonstrates insertion, deletion, searching, and traversal operations and helps in understanding the practical use of linked lists in C++.
