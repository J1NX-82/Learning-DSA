// ! also called as 
    //* Spiral Traversal or Zig Zag Traversal

#include <vector>
#include <queue>
using namespace std;

class TreeNode {
public:
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> result;

        if (root == NULL) {
            return result;
        }

        queue<TreeNode*> q;
        q.push(root);

        bool leftToRight = true;

        while (!q.empty()) {
            int size = q.size();
            vector<int> ans(size);  // Initialize ans vector with the correct size

            // process every level
            for (int i = 0; i < size; i++) {
                TreeNode* frontNode = q.front();
                q.pop();

                int index = leftToRight ? i : size - i - 1;
                ans[index] = frontNode->val;

                if (frontNode->left) {
                    q.push(frontNode->left);
                }
                if (frontNode->right) {
                    q.push(frontNode->right);
                }
            }

            result.push_back(ans);  // Push the ans vector to the result

            // Toggle the direction for the next level
            leftToRight = !leftToRight;
        }

        return result;
    }
};
