## 1. Problem Statement
Develop a C++ program to represent warehouse locations as vertices and connecting aisles as undirected edges. Store the network using an adjacency list. Accept the location and aisle details, display each location's adjacent locations, and allow the user to list all locations directly accessible from a selected location.

## 2. Approach
The warehouse network problem and selected an adjacency list to represent the connections efficiently. Each warehouse location is considered a vertex, and each connecting aisle is represented as an undirected edge.
1. Planned the graph structure to store warehouse locations and their connections.
2. Implemented the adjacency list to maintain connections between locations in both directions.
3. Designed the program to display adjacent locations clearly.
4. Added the functionality to select a location and find its directly accessible locations.
5. Considered different cases, such as locations with no connections, to improve the program's reliability.

## 3. BTL Level: 
**Application:** Apply graph concepts and adjacency list representation to model warehouse locations and their connecting aisles. Implement an undirected graph to display adjacent locations and identify all locations directly accessible from a user-selected location.

## 4. Complexity Analysis
Let V be the number of warehouse locations and E be the number of aisle connections.
- **Time Complexity:** O(V + E) for displaying all locations and their adjacent connections.
- **Direct Access Query:** O(deg(v)), where deg(v) is the number of locations directly connected to the selected location, assuming the location can be found in O(1) time.
- **Space Complexity:** O(V + E) for storing the graph using an adjacency list.

## 5. Conclusion

This project demonstrates the implementation of an undirected graph using an adjacency list in C++. It represents warehouse locations and their connecting aisles, displays adjacent locations, and identifies the locations directly accessible from a user-selected location. This project helps in understanding the practical application of graph data structures.
