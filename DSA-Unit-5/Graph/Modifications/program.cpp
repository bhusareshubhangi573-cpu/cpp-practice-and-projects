
#include <iostream>
#include <string>
using namespace std;

struct Node {
    int vertex;
    Node* next;
};

Node* adj[10] = {NULL};
string location[10];
int n;

bool hasEdge(int u, int v) {
    Node* temp = adj[u];

    while (temp != NULL) {
        if (temp->vertex == v)
            return true;
        temp = temp->next;
    }
    return false;
}

void addEdge(int u, int v) {
    Node* temp = new Node;
    temp->vertex = v;
    temp->next = adj[u];
    adj[u] = temp;

    temp = new Node;
    temp->vertex = u;
    temp->next = adj[v];
    adj[v] = temp;
}

void display() {
    cout << "\nAdjacent Locations:\n";

    for (int i = 0; i < n; i++) {
        cout << i << ". " << location[i] << ": ";
        Node* temp = adj[i];

        if (temp == NULL)
            cout << "No connections";

        while (temp != NULL) {
            cout << location[temp->vertex] << " ";
            temp = temp->next;
        }
        cout << endl;
    }
}

void insertLocation() {
    if (n >= 10) {
        cout << "Maximum locations reached!\n";
        return;
    }

    int v, e;

    cout << "\nEnter new location name: ";
    cin >> location[n];
    adj[n] = NULL;
    n++;

    cout << "How many connections? ";
    cin >> e;

    if (e < 0 || e > n - 1) {
        cout << "Invalid number of connections!\n";
        return;
    }

    for (int i = 0; i < e; i++) {
        cout << "Enter existing location number (0 to "
             << n - 2 << "): ";
        cin >> v;

        if (v < 0 || v >= n - 1 || hasEdge(n - 1, v)) {
            cout << "Invalid or duplicate connection!\n";
            i--;
        } else {
            addEdge(n - 1, v);
        }
    }

    display();
}

void removeOne(int u, int v) {
    Node* temp = adj[u];
    Node* prev = NULL;

    while (temp != NULL) {
        if (temp->vertex == v) {
            if (prev == NULL)
                adj[u] = temp->next;
            else
                prev->next = temp->next;

            delete temp;
            return;
        }

        prev = temp;
        temp = temp->next;
    }
}

void deleteEdge() {
    int u, v;

    cout << "\nEnter two location numbers to delete connection: ";
    cin >> u >> v;

    if (u < 0 || u >= n || v < 0 || v >= n || u == v) {
        cout << "Invalid location numbers!\n";
        return;
    }

    if (!hasEdge(u, v)) {
        cout << "Connection not found!\n";
        return;
    }

    removeOne(u, v);
    removeOne(v, u);

    cout << "Connection deleted successfully.\n";
    display();
}

void showNeighbours() {
    int v, degree = 0;

    cout << "\nEnter location number (0 to " << n - 1 << "): ";
    cin >> v;

    if (v < 0 || v >= n) {
        cout << "Invalid location!\n";
        return;
    }

    Node* temp = adj[v];

    cout << "Direct neighbours: ";

    if (temp == NULL)
        cout << "No connections";

    while (temp != NULL) {
        cout << location[temp->vertex] << " ";
        degree++;
        temp = temp->next;
    }

    cout << "\nDegree: " << degree << endl;
}

int main() {
    int e, u, v;

    cout << "Enter number of locations (1 to 10): ";
    cin >> n;

    if (n < 1 || n > 10) {
        cout << "Invalid number of locations!\n";
        return 0;
    }

    for (int i = 0; i < n; i++) {
        cout << "Enter location name: ";
        cin >> location[i];
        adj[i] = NULL;
    }

    cout << "Enter number of connections: ";
    cin >> e;

    if (e < 0 || e > n * (n - 1) / 2) {
        cout << "Invalid number of connections!\n";
        return 0;
    }

    for (int i = 0; i < e; i++) {
        cout << "Enter two location numbers (0 to "
             << n - 1 << "): ";
        cin >> u >> v;

        if (u < 0 || u >= n || v < 0 || v >= n ||
            u == v || hasEdge(u, v)) {
            cout << "Invalid or duplicate connection!\n";
            i--;
        } else {
            addEdge(u, v);
        }
    }

    display();
    insertLocation();
    deleteEdge();
    showNeighbours();

    for (int i = 0; i < n; i++) {
        while (adj[i] != NULL) {
            Node* temp = adj[i];
            adj[i] = adj[i]->next;
            delete temp;
        }
    }

    return 0;
}
