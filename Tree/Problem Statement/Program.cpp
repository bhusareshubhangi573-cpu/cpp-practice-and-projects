#include <iostream>
using namespace std;

struct Node {
    int data, height;
    Node *left, *right;
};

int height(Node* n) {
    return (n == NULL) ? 0 : n->height;
}

int max(int a, int b) {
    return (a > b) ? a : b;
}

Node* createNode(int value) {
    Node* node = new Node;
    node->data = value;
    node->height = 1;
    node->left = NULL;
    node->right = NULL;
    return node;
}

int getBalance(Node* n) {
    return (n == NULL) ? 0 :
           height(n->left) - height(n->right);
}

Node* leftRotate(Node* x) {
    Node* y = x->right;
    Node* temp = y->left;

    y->left = x;
    x->right = temp;

    x->height = 1 + max(height(x->left), height(x->right));
    y->height = 1 + max(height(y->left), height(y->right));

    return y;
}

Node* insert(Node* root, int value) {
    if (root == NULL)
        return createNode(value);

    if (value < root->data)
        root->left = insert(root->left, value);
    else if (value > root->data)
        root->right = insert(root->right, value);
    else
        return root;

    root->height = 1 + max(height(root->left), height(root->right));

    int balance = getBalance(root);

    // RR case
    if (balance < -1 && value > root->right->data)
        return leftRotate(root);

    return root;
}

void display(Node* root) {
    if (root != NULL) {
        cout << "Root: " << root->data << endl;
        cout << "Left Child: " << root->left->data << endl;
        cout << "Right Child: " << root->right->data << endl;
    }
}

int main() {
    Node* root = NULL;

    root = insert(root, 10);
    root = insert(root, 20);
    root = insert(root, 30);

    cout << "Balanced AVL Tree:" << endl;
    display(root);

    return 0;
}
