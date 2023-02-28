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
    vector<TreeNode*> findDuplicateSubtrees(TreeNode* root) {
        unordered_map<string,int>a;
        vector<TreeNode*>res;
        DFS(root,a,res);
        return res;
    }
    string DFS(TreeNode* root, unordered_map<string,int>&a, vector<TreeNode*>& res){
        if(!root) return "";
        string s = to_string(root->val)+ "," + DFS(root->left,a,res) + "," +DFS(root->right,a,res);
        if(a[s]++ == 1) res.push_back(root);
        return s;
    }
        
    
};