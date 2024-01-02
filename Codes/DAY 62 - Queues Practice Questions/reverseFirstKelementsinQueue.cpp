queue<int> modifyQueue(queue<int> q, int k) {
    
    // stack creation
    stack<int> s;
    
    // fetch first k element from queue and put into stack
    for(int i = 0; i < k; i++){
        int val = q.front();
        s.push(val);
        q.pop();
    }    
    
    while(!s.empty()){
        int val = s.top();
        q.push(val);
        s.pop();
    }
    
    //fetch first(n-k) element from queue & push_back
    for(int i = 0; i < q.size() - k; i++){
        int val = q.front();
        q.push(val);
        q.pop();
    }
    return q;
}