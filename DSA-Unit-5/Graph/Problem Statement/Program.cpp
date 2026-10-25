
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int vertex;
    Node* next;
};

Node* adj[10];
string location[10];
int n;

void addEdge(int u, int v) {
    Node* newNode = new Node;
    newNode->vertex = v;
    newNode->next = adj[u];
    adj[u] = newNode;

    newNode = new Node;
    newNode->vertex = u;
    newNode->next = adj[v];
    adj[v] = newNode;
}

void display() {
    cout << "\nAdjacent Locations:\n";

    for (int i = 0; i < n; i++) {
        cout << location[i] << ": ";

        Node* temp = adj[i];

        while (temp != NULL) {
            cout << location[temp->vertex] << " ";
            temp = temp->next;
        }

        cout << endl;
    }
}

int main() {
    int e, u, v, selected;

    cout << "Enter number of warehouse locations: ";
    cin >> n;

    for (int i = 0; i < n; i++) {
        adj[i] = NULL;
    }

    cout << "Enter location names:\n";
    for (int i = 0; i < n; i++) {
        cin >> location[i];
    }

    cout << "Enter number of aisle connections: ";
    cin >> e;

    cout << "Enter connection numbers (0 to " << n - 1 << "):\n";

    for (int i = 0; i < e; i++) {
        cin >> u >> v;

        if (u >= 0 && u < n && v >= 0 && v < n) {
            addEdge(u, v);
        } else {
            cout << "Invalid connection!\n";
            i--;
        }
    }

    display();

    cout << "\nSelect location number (0 to " << n - 1 << "): ";
    cin >> selected;

    if (selected < 0 || selected >= n) {
        cout << "Invalid location!\n";
    } else if (adj[selected] == NULL) {
        cout << "No connections available.\n";
    } else {
        cout << "Directly accessible locations: ";

        Node* temp = adj[selected];

        while (temp != NULL) {
            cout << location[temp->vertex] << " ";
            temp = temp->next;
        }

        cout << endl;
    }

    return 0;
}
