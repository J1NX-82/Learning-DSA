class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int slow = nums[0];
        int fast = nums[0];

        // Phase 1: Find the intersection point of the two pointers.
        while (true) {
            slow = nums[slow];
            fast = nums[nums[fast]];
            if (slow == fast) {
                break;
            }
        }

        // Phase 2: Find the entrance to the cycle.
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }

        return slow;
    }
};

// 
//
 class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int ans = 0;
        // xoring all array elements
        for(int i = 0 ; i < nums.size(); i++){
            ans = ans ^ nums[i];
        }
        // XOR from 1 to n-1
        for(int i = 1 ; i < nums.size(); i++){
            ans = ans ^ i;
        }

        return ans;
    }

};