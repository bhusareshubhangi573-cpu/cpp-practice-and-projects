## 1. Modified Problem Statement
Modify the Bus Stop Management System by implementing a Doubly Linked List in C++. Perform insertion of bus stops at the beginning and end, deletion and searching of a bus stop, and display all bus stops in both forward and reverse directions.

## 2. Approach
- Create a node containing the bus stop name, a pointer to the next node, and a pointer to the previous node.
- Use `head` and `tail` pointers to manage the first and last bus stops.
- Insert a new bus stop at the beginning or end of the list by updating the links between nodes.
- Delete a bus stop by searching for its name and adjusting the previous and next pointers.
- Search for a particular bus stop by traversing the list.
- Display all bus stops in forward direction using the `next` pointer.
- Display all bus stops in reverse direction using the `prev` pointer.
- Provide a menu-driven interface so the user can select and perform each operation.

## 3. Time and Space Complexity
### Time Complexity

| Operation | Time Complexity |
|---|---|
| Insertion at Beginning | O(1) |
| Insertion at End | O(1) |
| Deletion of a Bus Stop | O(n) |
| Searching a Bus Stop | O(n) |
| Display in Forward Direction | O(n) |
| Display in Reverse Direction | O(n) |

### Space Complexity
**Space Complexity:** O(n)

Here, n represents the total number of bus stops in the list. Each node stores the bus stop name and two pointers, `next` and `prev`.

## 4.Conclusion

The Bus Stop Management System using a Doubly Linked List helps to manage bus stop names efficiently. It supports insertion at the beginning and end, deletion, and searching of bus stops. The use of `next` and `prev` pointers allows the bus stops to be displayed in both forward and reverse directions. This project helps to understand the working of a Doubly Linked List and how it can be used to manage data dynamically.

