#include <iostream>
#include <vector>

using namespace std;

// Adjacency List: graph[0] contains a list of nodes connected to 0
vector<int> graph[10]; 
bool visited[10];

void dfs(int node) {
    // 1. Mark the current node as visited so we don't visit it again
    visited[node] = true; 
    
    // 2. Print the current node
    cout << node << " "; 

    // 3. Look at every neighbor of the current node
    for(int neigh : graph[node]) { 
        // 4. If the neighbor hasn't been visited, jump into it (Recursion)
        if(!visited[neigh]) { 
            dfs(neigh); 
        } 
    } 
}

int main() {
    // Creating a simple graph:
    // 0 -- 1 -- 3
    // |
    // 2
    graph[0] = {1, 2};
    graph[1] = {0, 3};
    graph[2] = {0};
    graph[3] = {1};

    cout << "DFS Traversal: ";
    // Start DFS from node 0
    dfs(0);
    cout << endl;

    return 0;
}
