// ================================================== //
//             Breadth First Search (BFS)             //
// ================================================== //

// All vertices are assumed to be 0-indexed.
// Assuming given inputs are valid.
// V = Number of vertices
// E = Number of edges

#include <bits/stdc++.h>
using namespace std;

// BFS on an undirected connected graph using adjacency matrix.
// SC: O(V^2)
// TC: O(V^2)
class Solution {
 public:
  vector<int> breadth_first_search(int source, int vertices, vector<pair<int, int>>& edge) {
    // Build adjacency matrix
    // SC: O(V^2)
    // TC: O(V^2) + O(E) for initialization
    vector<vector<int>> adjacency_matrix(vertices, vector<int>(vertices));
    for (auto [u, v] : edge) {
      adjacency_matrix[u][v] = adjacency_matrix[v][u] = 1;
    }

    vector<int> ans;

    vector<bool> visited(vertices);
    visited[source] = true;

    queue<int> vertices_to_visit;
    vertices_to_visit.push(source);

    // Each vertex is inserted into the queue at most once.
    while (!vertices_to_visit.empty()) {
      auto current = vertices_to_visit.front();
      vertices_to_visit.pop();

      ans.emplace_back(current);

      // Check all possible vertices to find unvisited neighbors.
      // TC: O(V) per vertex, O(V^2) overall.
      for (auto vertex = 0; vertex < vertices; vertex++) {
        if (adjacency_matrix[current][vertex] && !visited[vertex]) {
          visited[vertex] = true;
          vertices_to_visit.emplace(vertex);
        }
      }
    }

    return ans;
  }
};

// BFS on an undirected connected graph using adjacency list.
// SC: O(V + E)
// TC: O(V + E)
class Solution {
 public:
  vector<int> breadth_first_search(int source, int vertices, vector<pair<int, int>>& edge) {
    // Build adjacency list.
    // SC:O(V + 2E)
    // TC: O(V + E)
    vector<vector<int>> adjacency_list(vertices);
    for (auto [u, v] : edge) {
      adjacency_list[u].emplace_back(v);
      adjacency_list[v].emplace_back(u);
    }

    vector<int> ans;  // SC: O(V)

    vector<bool> visited(vertices);  // SC: O(V)
    visited[source] = true;

    queue<int> vertices_to_visit;  // SC: O(V)
    vertices_to_visit.push(source);

    // Each vertex is inserted into the queue at most once.
    while (!vertices_to_visit.empty()) {
      auto current = vertices_to_visit.front();
      vertices_to_visit.pop();

      ans.emplace_back(current);

      // Visit all unvisited neighbors of the current vertex.
      // Each undirected edge is examined twice overall.
      // TC: O(V + E) overall.
      for (auto neighbor : adjacency_list[current]) {
        if (!visited[neighbor]) {
          visited[neighbor] = true;
          vertices_to_visit.emplace(neighbor);
        }
      }
    }

    return ans;
  }
};
