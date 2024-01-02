#include <iostream>
#include <map>
#include <unordered_set>
using namespace std;

// To add node
void add_node(map<int, unordered_set<int>>& adj, int u) {
    // Check if node already there
    if (adj.find(u) != adj.end()) {
        cout << "Node already present\n";
    } else {
        adj.emplace(u, unordered_set<int>());
        cout << "Node added to the graph\n";
    }
}

// To delete node
void delete_node(map<int, unordered_set<int>>& adj, int u) {
    // Check if node is there or not
    if (adj.find(u) == adj.end()) {
        cout << "Node not present\n";
    } else {
        // Delete list of the node to be deleted
        adj.erase(u);
        // Delete from other nodes' list
        for (auto it = adj.begin(); it != adj.end(); it++) {
            if (it->second.find(u) != it->second.end()) {
                it->second.erase(u);
            }
        }
        cout << "Node deleted from the graph\n";
    }
}

// To add an edge
void add_edge(map<int, unordered_set<int>>& adj, int u, int v) {
    // Check if nodes are there or not
    if (adj.find(u) == adj.end() && adj.find(v) == adj.end()) {
        cout << "Both nodes not found\n";
    } else if (adj.find(u) == adj.end()) {
        cout << "Source node not found\n";
    } else if (adj.find(v) == adj.end()) {
        cout << "Destination node not found\n";
    } else {
        if (adj[u].find(v) == adj[u].end()) {
            adj[u].insert(v);
            adj[v].insert(u);
            cout << "Edge added to the graph\n";
        } else {
            cout << "Edge already exists\n";
        }
    }
}

// To delete an edge
void delete_edge(map<int, unordered_set<int>>& adj, int u, int v) {
    // Check if nodes are there or not
    if (adj.find(u) == adj.end() && adj.find(v) == adj.end()) {
        cout << "Both nodes not found\n";
    } else if (adj.find(u) == adj.end()) {
        cout << "Source node not found\n";
    } else if (adj.find(v) == adj.end()) {
        cout << "Destination node not found\n";
    } else {
        if (adj[u].find(v) == adj[u].end()) {
            cout << "Edge doesn't exist\n";
        } else {
            adj[u].erase(v);
            adj[v].erase(u);
            cout << "Edge deleted from the graph\n";
        }
    }
}

// To print the graph by adjacency list
void print(map<int, unordered_set<int>>& adj) {
    if (adj.size() == 0) {
        cout << "Empty graph\n";
        return;
    }

    cout << "Printing the graph in terms of adjacency list\n";
    cout << "Node     List of adjacency nodes\n";
    for (auto& [u, v] : adj) {
        cout << u << "      ";
        if (v.size() == 0) {
            cout << "Empty\n";
        } else {
            for (auto& i : v) {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}

int main() {
    // Adjacency list
    map<int, unordered_set<int>> adj;
    int option;
    while (true) {
        cout << "1. Press 1 to insert a node\n";
        cout << "2. Press 2 to delete a node\n";
        cout << "3. Press 3 to insert an edge\n";
        cout << "4. Press 4 to delete an edge\n";
        cout << "5. Print the graph via adjacency list\n";
        cout << "6. Exit\n";

        cin >> option;
        int node, u, v;
        switch (option) {
            case 1: // Add node
                cout << "Input node to add (an integer denoting node no)\n";
                cin >> node;
                add_node(adj, node);
                break;
            case 2: // Delete node
                cout << "Input node to delete (an integer denoting node no)\n";
                cin >> node;
                delete_node(adj, node);
                break;
            case 3: // Add edge
                cout << "Input source and destination node to add an edge\n";
                cout << "Input source node\n";
                cin >> u;
                cout << "Input destination node\n";
                cin >> v;
                add_edge(adj, u, v);
                break;
            case 4: // Delete edge
                cout << "Input source and destination node to delete an edge\n";
                cout << "Input source node\n";
                cin >> u;
                cout << "Input destination node\n";
                cin >> v;
                delete_edge(adj, u, v);
                break;
            case 5: // Print graph
                print(adj);
                break;
            case 6: // Exit
                cout << "Exiting...\n";
                adj.clear(); // Deleting the graph, good practice to free memory
                return 0;
            default:
                cout << "Wrong input, only integers between 1-6:\n";
                cout << "Try again\n";
        }
    }

    return 0;
}
