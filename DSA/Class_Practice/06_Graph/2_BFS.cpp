#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// We use a vector of vectors to represent the graph (Adjacency List)
// graph[0] will contain a list of all nodes connected to node 0
vector<int> graph[100]; 
bool visited[100];

void bfs(int start) {
    // 1. Create a queue to keep track of which node to visit next
    queue<int> q; 

    // 2. Mark the starting node as visited
    visited[start] = true; 

    // 3. Put the starting node into the queue
    q.push(start); 

    cout << "BFS Traversal: ";

    // 4. Keep looping as long as there are nodes in the queue
    while(!q.empty()) { 
        // 5. Get and remove the node at the front
        int node = q.front(); 
        q.pop(); 
        
        // 6. Print the current node
        cout << node << " "; 

        // 7. Check all neighbors of the current node
        for(int neigh : graph[node]) { 
            // 8. If neighbor hasn't been visited...
            if(!visited[neigh]) { 
                // 9. ...mark it visited and add to queue
                visited[neigh] = true; 
                q.push(neigh); 
            } 
        } 
    }
    cout << endl;
}

int main() {
    // Creating a simple graph:
    // 0 -- 1
    // |    |
    // 2 -- 3
    graph[0] = {1, 2};
    graph[1] = {0, 3};
    graph[2] = {0, 3};
    graph[3] = {1, 2};

    // Start BFS from node 0
    bfs(0);

    return 0;
}
