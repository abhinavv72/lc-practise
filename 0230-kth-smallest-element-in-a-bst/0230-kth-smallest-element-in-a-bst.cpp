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
    vector<int>v;
    void pp(TreeNode* root){
        if(root==NULL){
            return;
        }
        pp(root->left);
        v.push_back(root->val);
        pp(root->right);
    }
    int kthSmallest(TreeNode* root, int k) {
      pp(root);
        return v[k-1];
    }
};