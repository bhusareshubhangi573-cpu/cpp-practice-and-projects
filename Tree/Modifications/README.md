## AVL Tree – RR Rotation

## Problem Statement
Original Problem Statement:

Write a C++ program to insert the elements 10, 20, and 30 into an AVL tree and perform the required RR rotation to restore balance.

## Modified Problem Statement:
Write a C++ program to insert the elements 10, 20, and 30 into an AVL tree and perform the required RR rotation to restore balance. In addition to the original problem, display the balance factors of the affected nodes before and after rotation, and count the number of rotations performed during insertion. Also, test the program with another sequence of elements that causes an RR imbalance.

## Modifications Implemented

To extend the original AVL Tree RR Rotation problem, I selected two modifications from the suggested list.

-Display Balance Factors Before and After Rotation

The program displays the balance factors of the relevant nodes before and after the rotation. This helps in understanding how the RR imbalance occurs and how a left rotation restores the balance of the AVL tree.

-Count Rotations Performed During Insertion

A rotation counter is added to track the number of rotations performed during insertion. The total number of rotations is displayed after inserting the elements, helping to understand how AVL trees maintain balance.

## Test Cases

- Test Case 1:
Input: 10, 20, 30
Expected Output: After left rotation, 20 becomes the root, 10 becomes the left child, and 30 becomes the right child.

- Test Case 2:
Input: 10, 20, 30, 40, 50
Expected Output: The AVL tree becomes balanced after the required rotations.

- Test Case 3:
Purpose: To check balance factors and count rotations.
Expected Output: The program displays the balance factors before and after rotation and the total number of rotations performed.

## Conclusion

An AVL tree is a self-balancing Binary Search Tree that maintains balance after inserting new elements. When the elements 10, 20, and 30 are inserted in increasing order, an RR imbalance occurs at node 10. A left rotation is performed to restore balance, making 20 the root, 10 the left child, and 30 the right child.
Displaying balance factors helps to understand the balance of the tree before and after rotation. Counting the rotations shows how many rotations are required during insertion. Testing another sequence of elements helps verify whether the program works correctly for different RR imbalance cases. Overall, this program demonstrates how AVL tree rotations maintain a balanced structure while preserving the correct order of elements.
