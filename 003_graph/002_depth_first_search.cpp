// ================================================== //
//              Depth First Search (DFS)              //
// ================================================== //

// All vertices are assumed to be 0-indexed.
// Assuming given inputs are valid.
// V = Number of vertices
// E = Number of edges

#include <bits/stdc++.h>
using namespace std;

// DFS on an undirected connected graph using adjacency matrix.
// SC: O(V^2)
// TC: O(V^2)
class Solution {
  void depth_first_search(int source, vector<vector<int>>& adjacency_matrix, vector<bool>& visited, vector<int>& ans) {
    visited[source] = true;
    ans.emplace_back(source);

    auto vertices = adjacency_matrix.size();

    // Check all possible vertices to find unvisited neighbors.
    // TC: O(V) per vertex, O(V^2) overall.
    for (auto vertex = 0; vertex < vertices; vertex++) {
      if (adjacency_matrix[source][vertex] && !visited[vertex]) {
        depth_first_search(vertex, adjacency_matrix, visited, ans);
      }
    }
  }

 public:
  vector<int> depth_first_search(int source, int vertices, vector<pair<int, int>>& edges) {
    // Build adjacency matrix.
    // SC: O(V^2)
    // TC: O(V^2) + O(E) for initialization
    vector<vector<int>> adjacency_matrix(vertices, vector<int>(vertices));
    for (auto [u, v] : edges) {
      adjacency_matrix[u][v] = adjacency_matrix[v][u] = 1;
    }

    vector<int> ans;

    vector<bool> visited(vertices);

    // Check all possible vertices to find unvisited neighbors.
    // SC: O(V) for recursion stack.
    // TC: O(V) per vertex, O(V^2) overall.
    depth_first_search(source, adjacency_matrix, visited, ans);

    return ans;
  }
};

// DFS on an undirected connected graph using adjacency list.
// SC: O(V + E)
// TC: O(V + E)
class Solution {
  void depth_first_search(int source, vector<vector<int>>& adjacency_list, vector<bool>& visited, vector<int>& ans) {
    visited[source] = true;
    ans.emplace_back(source);

    for (auto neighbor : adjacency_list[source]) {
      if (!visited[neighbor]) {
        depth_first_search(neighbor, adjacency_list, visited, ans);
      }
    }
  }

 public:
  vector<int> depth_first_search(int source, int vertices, vector<pair<int, int>>& edges) {
    // Build adjacency list.
    // SC: O(V + 2E)
    // TC: O(V + E)
    vector<vector<int>> adjacency_list(vertices);
    for (auto [u, v] : edges) {
      adjacency_list[u].emplace_back(v);
      adjacency_list[v].emplace_back(u);
    }

    vector<int> ans;

    vector<bool> visited(vertices);

    // SC: O(V) for recursion stack.
    // TC: O(V + E) overall.
    depth_first_search(source, adjacency_list, visited, ans);

    return ans;
  }
};
