class Solution{   
public:
    void segregate0and1(int arr[], int n) {
        int count = 0; // Counts the no of zeros in arr
  
    for (int i = 0; i < n; i++){
        if (arr[i] == 0)
            count++;
    }
  
    // Loop fills the arr with 0 until count
    for (int i = 0; i < count; i++){
        arr[i] = 0;
    }
  
    // Loop fills remaining arr space with 1
    for (int i = count; i < n; i++)
        arr[i] = 1;
    }
};