#include <iostream>
#include <algorithm>
using namespace std;

struct Node {
    int data, height;
    Node *left, *right;
};

int rotationCount = 0;

int height(Node* n) {
    return n ? n->height : 0;
}

int getBalance(Node* n) {
    return n ? height(n->left) - height(n->right) : 0;
}

Node* createNode(int value) {
    return new Node{value, 1, NULL, NULL};
}

// Left Rotation for RR Case
Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* T2 = y->left;

    x->right = T2;
    y->left = x;

    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));

    rotationCount++;

    cout << "Balance Factor After Rotation:" << endl;
    cout << "Node " << x->data << ": "
         << getBalance(x) << endl;
    cout << "Node " << y->data << ": "
         << getBalance(y) << endl;

    return y;
}

// Insert into AVL Tree
Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        return root;

    root->height = 1 + max(height(root->left),
                           height(root->right));

    int balance = getBalance(root);

    // RR Case
    if (balance < -1 && value > root->right->data) {
        cout << "\nRR Imbalance at Node: "
             << root->data << endl;

        cout << "Balance Factor Before Rotation: "
             << balance << endl;

        cout << "Rotation Type: RR (Left Rotation)" << endl;

        return leftRotate(root);
    }

    return root;
}

// Verify AVL Balance
bool verifyAVL(Node* root) {
    if (root == NULL)
        return true;

    int balance = getBalance(root);

    if (balance < -1 || balance > 1)
        return false;

    return verifyAVL(root->left) &&
           verifyAVL(root->right);
}

// Inorder Traversal
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        cout << root->data << " ";
        inorder(root->right);
    }
}

// Run Test
void runTest(int values[], int n, const char* title) {
    Node* root = NULL;
    rotationCount = 0;

    cout << "\n===== " << title << " =====\n";

    for (int i = 0; i < n; i++) {
        cout << "\nInserting: " << values[i] << endl;
        root = insert(root, values[i]);
    }

    cout << "\nInorder Traversal: ";
    inorder(root);

    cout << "\nFinal Root: " << root->data << endl;
    cout << "Total Rotations: " << rotationCount << endl;

    cout << "AVL Balance: "
         << (verifyAVL(root) ? "Verified" : "Failed")
         << endl;
}

int main() {
    int first[] = {10, 20, 30};
    int second[] = {10, 20, 30, 40, 50};

    runTest(first, 3, "Original RR Sequence");
    runTest(second, 5, "Additional RR Sequence");

    return 0;
}
