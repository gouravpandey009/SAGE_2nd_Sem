#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Total number of points (nodes) in our graph
    int V = 5;

    // Create an "Adjacency List" (an array of lists) 
    // Each index 'i' will store all the neighbors of vertex 'i'
    vector<int> graph[V];

    // Connect Vertex 0 and Vertex 1 (Both ways for an undirected graph)
    graph[0].push_back(1);
    graph[1].push_back(0);

    // Connect Vertex 0 and Vertex 2
    graph[0].push_back(2);
    graph[2].push_back(0);

    // Connect Vertex 1 and Vertex 3
    graph[1].push_back(3);
    graph[3].push_back(1);

    // Connect Vertex 3 and Vertex 4
    graph[3].push_back(4);
    graph[4].push_back(3);

    // Loop through every vertex from 0 to 4
    for(int i = 0; i < V; i++)
    {
        cout << "Vertex " << i << ": ";
        
        // Print every neighbor stored in the list for vertex 'i'
        for(int j : graph[i]) {
            cout << j << " ";
        }
        
        // Move to the next line for the next vertex
        cout << endl;
    }
}
