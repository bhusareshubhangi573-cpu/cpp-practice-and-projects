```mermaid
flowchart TD
    A([Start]) --> B["Create an empty AVL tree"]
    B --> C["Insert next element from 10, 20, 30 using BST rules"]
    C --> D["Update height of nodes after insertion"]
    D --> E["Calculate balance factor of each node"]
    E --> F{"Is balance factor of any node outside -1, 0, 1?"}
    F -- No --> G{"More elements to insert?"}
    G -- Yes --> C
    G -- No --> L
    F -- Yes --> H["Identify imbalance type"]
    H --> I["RR imbalance found at node 10<br/>10 -> 20 -> 30 inserted in increasing order"]
    I --> J["Perform left rotation at node 10"]
    J --> K["20 becomes root<br/>10 becomes left child<br/>30 becomes right child"]
    K --> K2["Update heights of affected nodes"]
    K2 --> G
    L["Display final balanced AVL tree<br/>Root 20, Left 10, Right 30"] --> M([Stop])
    ```   
