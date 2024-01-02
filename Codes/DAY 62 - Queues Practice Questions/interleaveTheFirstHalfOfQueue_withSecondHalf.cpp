class Solution{
public:
    vector<int> rearrangeQueue(queue<int> &q){
    vector<int> ans;
        queue<int> newQ;
        int halfSize = q.size() / 2;
        
        for (int i = 0; i < halfSize; i++) {
        newQ.push(q.front());
        q.pop();
    }
        
        
        while (!newQ.empty()) {
        ans.push_back(newQ.front());
        newQ.pop();

            if (!q.empty()) {
                ans.push_back(q.front());
                q.pop();
            }
        }
        return ans;

    }
};