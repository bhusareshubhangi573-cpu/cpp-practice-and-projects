## Problem Statement
Write a C++ program to insert the elements 10, 20, and 30 into an AVL tree and perform the required RR rotation to restore balance.

## My Understanding
An AVL tree is a self-balancing Binary Search Tree that maintains balance after inserting new elements. When I insert 10, 20, and 30 in sequence, the nodes form a right-skewed tree, causing an RR imbalance at node 10.
To restore balance, I apply a left rotation at node 10. After rotation, 20 becomes the root, 10 becomes its left child, and 30 becomes its right child. This makes the tree balanced while maintaining the Binary Search Tree property.

## Approach
I started by inserting the elements 10, 20, and 30 one by one into the AVL tree, following the rules of a Binary Search Tree. After inserting these elements, I observed that all the nodes were arranged on the right side, making the tree unbalanced. I then checked the balance of the tree and understood that an RR imbalance occurred at node 10. To correct this imbalance, I applied a left rotation at node 10. After rotation, 20 became the root, 10 became its left child, and 30 became its right child. Finally, I checked the new tree structure and understood how a left rotation helps maintain the balance of an AVL tree without changing the order of the elements.

## Time and Space Complexity
- Time Complexity: \(O(\log n)\) for AVL tree insertion, as the tree maintains its balance.
- Space Complexity: \(O(n)\) for storing \(n\) nodes in the AVL tree.

## Conclusion
Through this program, I understood how inserting 10, 20, and 30 creates an RR imbalance in an AVL tree. By performing a left rotation at node 10, I restored the balance of the tree. The final tree has 20 as the root, 10 as the left child, and 30 as the right child. This helped me understand how AVL rotations maintain balance while preserving the Binary Search Tree property.
