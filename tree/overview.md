# AVL Tree RR Rotation Using C++

## 1. Problem Statement

Write a C++ program to insert the elements 10, 20, 30 into an AVL tree and perform the required RR rotation to restore balance.

The program also displays the balance factor before and after rotation, counts the rotations performed during insertion, and tests another sequence that causes an RR imbalance.

## 2. Objectives

- To implement insertion in an AVL tree.
- To perform RR rotation using left rotation.
- To display balance factors before and after rotation.
- To count the rotations performed during insertion.
- To test another sequence that causes an RR imbalance.

## 3. Introduction

An AVL tree is a self-balancing Binary Search Tree (BST). The balance factor of a node is the difference between the heights of its left and right subtrees.

Balance Factor = Height of Left Subtree − Height of Right Subtree

The balance factor of every node in a balanced AVL tree must be -1, 0, or +1.

An RR imbalance occurs when insertion makes the right subtree of the right child too tall. It is corrected using a single left rotation.

## 4. Time Complexity

- Insertion: O(log n) per insertion in an AVL tree.
- Inorder Traversal: O(n).
- Space Complexity: O(n).

## 5. Applications

- Database indexing
- Efficient searching
- Dictionary implementation
- Data management systems

## 6. Result

The AVL tree was implemented successfully. RR imbalance was corrected using left rotation. Balance factors were displayed before and after rotation, rotation counts were recorded, and both test sequences were verified.

## 7. Conclusion

The program demonstrates how RR imbalance is corrected using left rotation. It also displays balance factors, counts rotations, and verifies the AVL balance condition after insertion.
