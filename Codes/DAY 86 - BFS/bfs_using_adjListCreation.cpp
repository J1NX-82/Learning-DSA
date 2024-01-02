#include <unordered_map>
#include<list>
#include<queue>
#include<set>

void prepareAdjList(unordered_map<int, list<int>> &adjList, ){
    for(int i = 0; i < edges.size[]; i++){
        int u = edges[i].first;
        int v = edges[i].second;

        adjList[u].push_back(v);
        adjList[v].push_back(u);
    }
}

void bfs(){
    queue<int>q;
    q.push(node);
    visited[node] == 1;

    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        // store front node in ans
        ans.push_back(frontNode);

        // traverse all neighbours of frontNode
        for(auto i: adjList[frontNode]){
            if(!visited[i]){
                q.push(i);
                visited[i] = 1;

            }
        }
    }
}

vector<int> bfsTraversal(int n, vector<vector<int>> &adj){

    unordered_map<int, list<int>> adjList;
    vector<int> ans;
    unordered_map<int, bool> visited;

    prepareAdjList(adjList, edges);

    // traverse all components of graph
    for(int i = 0; i < n; i++){
        if(!visited[i]){
            bfs(adjList, visited, ans, i);
        }
    }
    return ans;
}