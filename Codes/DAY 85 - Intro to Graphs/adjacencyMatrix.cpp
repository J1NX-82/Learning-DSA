#include <iostream>
#include <vector>

using namespace std;

int main() {
    // Number of nodes
    int n = 3;

    // Initialize the adjacency matrix with all zeros
    vector<vector<int>> adjacencyMatrix(n, vector<int>(n, 0));

    // Add edges to represent the directed graph
    adjacencyMatrix[0][1] = 1; // Edge from node 0 to node 1
    adjacencyMatrix[1][2] = 1; // Edge from node 1 to node 2

    // Print the adjacency matrix
    cout << "Adjacency Matrix:" << endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << adjacencyMatrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
// In this code, we create a 3x3 adjacency matrix where each cell (i, j) represents the presence or absence of an edge from node i to node j. In this specific case, we have added two edges: one from node 0 to node 1 and another from node 1 to node 2 to represent the directed graph you mentioned.





