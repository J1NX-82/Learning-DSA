// Problem Statement
    // Given an array A[] of size N and a positive integer K, find the first negative integer for each and every window(contiguous subarray) of size K.

        // Input : 
        // N = 5
        // A[] = {-8, 2, 3, -6, 10}
        // K = 2
        // Output : 
        // -8 0 -6 -6


vector<long long> printFirstNegativeInteger(long long int A[],
                                             long long int N, long long int K) {
    deque<long long int> dq;
    vector<long long> ans;
    
    // processing first window of K size
    
    for(int i = 0; i < K; i++){
        if(A[i] < 0){
            dq.push_back(i);
        }
    }
    
    // store answer of first k size window
    
    if(dq.size() > 0){
        ans.push_back(A[dq.front()]);
    }   
    else{
        ans.push_back(0);
    }
    
    // processing for remaining window
    
    for(int i = K; i < N; i++){
        // removal
        if(!dq.empty() && i - dq.front() >= K){
            dq.pop_front();
        }
        // addition
        if(A[i] < 0){
            dq.push_back(i);
        }
        // store answer of remaining window
        if(dq.size() > 0){
            ans.push_back(A[dq.front()]);
        }   
        else{
            ans.push_back(0);
        }
    }
    return ans;
}