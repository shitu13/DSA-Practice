## Graph Data Structure

### 1. Vertices (Nodes) and Edges (Links)
Vertices (Nodes): These are the entities in the graph. For example, in a social network graph, vertices could represent users.

Edges (Links): These represent the relationships or connections between the vertices. In the social network example, an edge could represent a friendship or follow relationship between users.

### 2. Types of Graphs

#### Undirected Graph

- The edges do not have any direction.
- Example: In a social network, if two people are friends, the relationship is mutual.

#### Directed Graph (Digraph):

- The edges have a direction, indicated by an arrow.
- Example: In a Twitter network, if a person follows another person, the relationship is one-way.

#### Weighted Graph:

- Edges have weights (or costs) associated with them.
- Example: In a road network, the weights could represent the distance or travel time between cities.

#### Unweighted Graph:

- All edges are considered to have the same weight.
- Example: A simple social network where we only care about connections, not their strength or cost.

### 3. Graph Representations
#### Adjacency Matrix:

- A 2D array where matrix[i][j] is non-zero (or true) if there is an edge between vertices i and j.
- For weighted graphs, matrix[i][j] would hold the weight of the edge.
- Pros: Quick access to check if an edge exists (O(1) time).
- Cons: Space-consuming (O(V^2) space complexity), especially for large graphs with many vertices but few edges (sparse graphs).

#### Adjacency List:

- An array of lists. Each index in the array corresponds to a vertex, and the list at each index contains the vertices adjacent to that vertex.
- For weighted graphs, each entry in the list can be a pair (or tuple) of the adjacent vertex and the weight.
- Pros: Space-efficient for sparse graphs (O(V + E) space complexity).
- Cons: Checking for the existence of a specific edge can take longer (O(V) in the worst case).

#### Edge List:

- A list of all edges, where each edge is represented as a pair (or tuple) of vertices (and optionally the weight).
- Pros: Simple to understand and implement.
- Cons: Inefficient for edge lookup and adjacency queries.

### 4. Common Graph Algorithms
#### Breadth-First Search (BFS):

- Explores the graph level by level.
- Uses a queue to keep track of vertices to be explored.
- Applications: Finding the shortest path in unweighted graphs, peer-to-peer networking, social networking.
- Time Complexity: O(V + E)

#### Depth-First Search (DFS):

- Explores as far as possible along each branch before backtracking.
- Uses a stack (or recursive function call stack) to keep track of vertices to be explored.
- Applications: Cycle detection, path finding, topological sorting.
- Time Complexity: O(V + E)

#### Dijkstra’s Algorithm:

- Finds the shortest paths from a source vertex to all other vertices in a weighted graph with non-negative weights.
- Uses a priority queue (min-heap) to select the vertex with the smallest known distance.
- Applications: GPS navigation, network routing protocols.
- Time Complexity: `O(V^2) `with an adjacency matrix, `O((V + E) log V) `with an adjacency list and min-heap.

#### Bellman-Ford Algorithm:

- Computes shortest paths from a source vertex to all vertices, even with negative weights.
- Iterates through all edges multiple times (up to V-1 times).
- Applications: Detecting negative weight cycles, currency arbitrage.
- Time Complexity: O(VE)

#### Kruskal’s Algorithm:

- Finds the Minimum Spanning Tree (MST) of a graph.
- Sorts all edges by weight and adds them one by one to the MST, ensuring no cycles.
- Applications: Network design, clustering.
- Time Complexity: O(E log E)

#### Prim’s Algorithm:

- Also finds the MST of a graph.
- Starts from an arbitrary vertex and grows the MST by adding the smallest edge connecting the MST to a vertex not yet in the MST.
- Uses a priority queue to select the smallest edge.
- Applications: Network design, circuit design.
- Time Complexity: `O(V^2)` with an adjacency matrix, `O((V + E) log V)` with an adjacency list and min-heap.

#### 5. Applications of Graphs
- Social Networks: Represent users as vertices and relationships as edges. Algorithms like BFS can help find shortest paths (degrees of separation) between users.
- Web Page Linking: Represent web pages as vertices and hyperlinks as directed edges. PageRank algorithm uses this representation.
- Transport Networks: Cities as vertices and routes as edges. Algorithms like Dijkstra's can find the shortest path between cities.
- Recommendation Systems: Items or users as vertices and edges represent interactions or similarities. Collaborative filtering algorithms can use graph representations.