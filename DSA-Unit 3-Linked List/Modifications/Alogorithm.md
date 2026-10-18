
## Algorithm

1. Start the program.
2. Initialize `head` and `tail` to `NULL`.
3. Display a menu containing the following operations:
   - Insert at Beginning
   - Insert at End
   - Delete a Bus Stop
   - Search a Bus Stop
   - Display in Forward Direction
   - Display in Reverse Direction
   - Exit
4. Accept the user's choice.
5. Perform the selected operation:
   - **Insertion at Beginning:** Create a new node, connect it to the current head, update the previous pointer, and update `head`.
   - **Insertion at End:** Create a new node, connect it to the current tail, update the next pointer, and update `tail`.
   - **Deletion:** Search for the given bus stop and update the previous and next pointers to remove its node.
   - **Searching:** Traverse the list and check whether the given bus stop exists.
   - **Forward Display:** Traverse from `head` to `tail` using the `next` pointer.
   - **Reverse Display:** Traverse from `tail` to `head` using the `prev` pointer.
6. Display the result of the selected operation.
7. Repeat the menu until the user selects Exit.
8. Stop the program.
