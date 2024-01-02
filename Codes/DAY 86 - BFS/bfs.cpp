vector<int> bfsTraversal(int n, vector<vector<int>> &adj){
    vector<int> ans;
    queue<int> q;

    q.push(0);

    vector<int> visited(n,0);
    visited[0] = 1;
    while(!q.empty()){
        int frontNode = q.front();
        q.pop();

        ans.push_back(frontNode);
        
        for(auto i: adj[frontNode]){
            if(!visited[i]){
                visited[i] = 1;
                q.push(i);
            }
        }
    }
    return ans;
}