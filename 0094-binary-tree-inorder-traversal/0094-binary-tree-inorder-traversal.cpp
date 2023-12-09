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
public:
    void inorderHelp(TreeNode* root, vector<int>& x){
        if(root == NULL){
            return;
        }
        inorderHelp(root->left, x);
        x.push_back(root->val);
        inorderHelp(root->right,x);
    }
    vector<int> inorderTraversal(TreeNode* root) {
       vector<int>x;
        inorderHelp(root,x);
        return x;
        
    }
};