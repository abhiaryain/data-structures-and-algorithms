// GRAPH:
//    A Graph is a non-linear data structure use to represent relationships or connection between different entities.
//    A graph consists vertices/nodes and edges, where vertices represent entities and edges represent relationship between them.

// VERTEX:
//    A vertex, also called a node, represents an individual entity in a graph.

// ADJACENT VERTICES
//    Two vertices are called adjacent if there is an edge directly connecting them.

// EDGE
//    An edge represents a connection between two vertices.
//
//    EDGE TYPE
//      1. Directed
//      2. Undirected
//      3. Weighted

// PATH:
//    Sequence of vertices connected by edges, with no vertex or edge repeated.
//
//    LENGTH OF A PATH:
//        Number of edges in the path.

// CYCLE:
//    A closed path (except the the starting and end vertex is repeated).

// LOOP:
//    An edge connecting a vertex to itself.

// WALK:
//    Sequence of vertices connected by edges, Vertices and edges may repeat.

// CLOSED WALK:
//    A walk that starts and ends at the same vertex.

// TRAIL:
//    A walk in which no edge is repeated.

// PARALLEL EDGES:
//    Multiple edges connecting the same pair of vertices.

// TYPE OF GRAPH
//    1. BASED ON EDGE BEHAVIOUR
//        1. Undirected Graph   - In an undirected graph, an edge represents a two-way connection.
//        2. Directed Graph     - In a directed graph, every edge has a specific direction.
//        3. Weighted Graph     - In a weighted graph, every edge has an associated value called a weight, that represent different quantities such as cost or distance associated with the connection.
//        4. Unweighted Graph   - In an unweighted graph, edges do not have associated weights. They only represents whether a connection exists.
//
//    2. BASED ON CONNECTIVITY
//        1. Connected Graph    - Every vertex is reachable from every other vertex.
//        2. Disconnected Graph - At least one pair of vertices has no path connecting them.
//
//    3. BASED ON CYCLE
//        1. Cyclic Graph                  - Contains at least one cycle.
//        2. Acyclic Graph                 - Contains no cycles.
//        3. Directed Acyclic Graph (DAG)  - A directed graph containing no directed cycles.
//
//    4. OTHER GRAPHS
//        1. Strongly Connected Graph  - In a directed graph, every vertex is reachable from every other vertex following edge directions.
//        2. Weakly Connected Graph    - A directed graph becomes connected when edge directions are ignored
//        3. Complete Graph            - Every pair of distinct vertices has an edge between them
//        4. Tree                      - A connected, undirected, acyclic graph.
//        5. Bipartite Graph           - Vertices can be divided into two disjoint sets such that every edge connects vertices from different sets
//        6. Regular Graph             - Every vertex has the same degree.

// SUBGRAPH:
//    A graph formed using a subset of vertices and edges of another graph.

// DEGREE (undirected graph):
//    Degree of a vertex in an undirected graph is the number of edges connected to that vertex.
//    Total Degree of a graph = 2E, where E represent number of edges.

// IN-DEGREE (directed/undirected graph)
//    In degree of a vertex in graph is the number of edges

// OUT-DEGREE (directed/undirected graph)
//    Out degree of a vertex

/**
 * **NOTE**
 * IN-DEGREE and OUT_DEGREE are specifically defined for directed graphs, not ordinary undirected graphs, however
 * IN-DEGREE and OUT_DEGREE of vertex in an undirected graph is always same.
 */

// ISOLATED VERTEX:
//    A vertex with degree 0.

// ORDER OF GRAPH: Number of vertices(V)
// SIZE OF GRAPH : Number of edges(E)

// SPECIAL GRAPH CONCEPT:
//    Spanning Tree           - A tree containing all vertices of connected undirected graph.
//    Minimal Spanning Tree   - A spanning tree with minimal total edge weight.
//    Hamiltonian Path        - A path that visits every vertex exactly once.
//    Hamiltonian Cycle: A cycle that visits every vertex exactly once before returning to the start.
//    Euler Path: A trail that uses every edge exactly once.
//    Euler Circuit: An Euler trail that starts and ends at the same vertex.

// GRAPH REPRESENTATION
//    1. Adjacency Matrix  SC: O(V^2)    - Edge connections is stored in V*V matrix.
//        1. Weighted
//        2. Unweighted
//
//    2. Adjacency List    SC: O(V + E)  - Edge connections is stored in Array of list its neighbor.
//       1. Weighted
//       2. Unweighted
//
//    3. Edge List         SC: O(E)      - Stores all edges as pairs of vertices (or triples for weighted edges).
//       1. Weighted
//       2. Unweighted
//
//    4. Incidence Matrix  SC: O(V*E)    - Edge connection is stored in V*E matrix. In which rows represent vertices and columns represents edges.
//       1. Weighted
//       3. Unweighted
