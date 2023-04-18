/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
    private: 
     int max_depth;
    int ans;
    void dfs(TreeNode* cur, int d){
        if(cur == nullptr)return;
        if(d > max_depth){
            max_depth = d;
            ans = cur->val;
        } else if (d == max_depth){
            ans+= cur->val;
        }
        dfs(cur->left, d+1);
        dfs(cur->right, d+1);
    }
public:
    int deepestLeavesSum(TreeNode* root) {
        max_depth =0;
        ans = 0;
        dfs(root,0);
        return ans; 
    }
};