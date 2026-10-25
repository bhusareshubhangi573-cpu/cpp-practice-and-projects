## 1. Modified Problem Statement
Develop a C++ program to represent warehouse locations as vertices and connecting aisles as undirected edges using an adjacency list. Modify the program to insert a new warehouse location along with its associated aisle connections, remove a selected aisle connection between two locations, and calculate and display the degree or direct neighbours of a selected location. Display the updated graph after performing each operation.

## 2. Approach
Used an adjacency list to represent warehouse locations as vertices and connecting aisles as undirected edges. Each aisle connection is stored in both directions to maintain the undirected graph. The program allows users to display adjacent locations, insert a new warehouse location with its associated connections, remove a selected aisle connection, and calculate the degree or display the direct neighbours of a selected location. After each modification, the updated graph is displayed to verify the changes.

## 3. BTL Level: 
**Application:** Apply graph data structure concepts and adjacency list representation to model warehouse locations and connecting aisles. Implement vertex insertion, edge deletion, and degree or direct-neighbour identification to manage and update the warehouse network.

## 4. Complexity Analysis
Let \(V\) represent the number of vertices (warehouse locations) and \(E\) represent the number of edges (aisle connections).
- **Graph Display — \(O(V + E)\):** Traverses all vertices and their adjacency lists to display the warehouse network.
- **Vertex Insertion — \(O(1)\):** Initializes a new vertex's adjacency list, assuming available storage capacity.
- **Edge Insertion — \(O(1)\) per edge:** Adds a connection to the adjacency lists of both vertices, assuming insertion at the beginning of each linked list.
- **Edge Deletion — \(O(\deg(u) + \deg(v))\):** Searches both adjacency lists to find and remove the selected connection.
- **Degree Calculation — \(O(\deg(v))\):** Traverses the selected vertex's adjacency list to count its direct connections.
- **Displaying Direct Neighbours — \(O(\deg(v))\):** Visits and displays all vertices directly connected to the selected vertex.
- **Space Complexity — \(O(V + E)\):** Stores all vertices and adjacency-list entries representing the aisle connections.

## Conclusion
This project demonstrates the implementation of an undirected graph using an adjacency list in C++. It represents warehouse locations as vertices and aisle connections as edges. The program supports displaying adjacent locations, inserting new vertices, removing selected edges, and calculating the degree or identifying the direct neighbours of a selected vertex. Through these operations, the project provides a practical understanding of graph representation and manipulation.
