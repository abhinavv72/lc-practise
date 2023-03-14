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
    void dfs(TreeNode* root,int& ans,int i){
        if(!root->left and !root->right){
            ans+=i;
            return;
        }
        if(root->left)dfs(root->left,ans,(i*10)+root->left->val);
        if(root->right)dfs(root->right,ans,(i*10)+root->right->val);
    }
public:
    int sumNumbers(TreeNode* root) {
        int ans=0;
        dfs(root,ans,root->val);
        return ans;
    }
};