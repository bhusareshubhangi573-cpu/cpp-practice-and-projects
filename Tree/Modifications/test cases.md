
## Test Cases and Output

### Test Case 1: Original RR Sequence

**Input:** 10, 20, 30

**Tree Before Rotation:**
```text
10
  \
   20
     \
      30
```

**Tree After Rotation:**
```text
    20
   /  \
  10   30
```

**Expected Result:**
- Final Root: 20
- Inorder Traversal: 10 20 30
- Total Rotations: 1
- AVL Balance: Verified

### Test Case 2: Additional RR Sequence

**Input:** 10, 20, 30, 40, 50

**Final Tree:**
```text
      20
     /  \
    10   40
        /  \
       30   50
```

**Expected Result:**
- Final Root: 20
- Inorder Traversal: 10 20 30 40 50
- Total Rotations: 2
- AVL Balance: Verified

### Conclusion

The test cases show that left rotation corrects RR imbalance and helps maintain AVL tree balance. The rotation count and balance verification help check the program's working.
