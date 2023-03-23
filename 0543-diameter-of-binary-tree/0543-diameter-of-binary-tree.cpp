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
   int height(TreeNode* root){
       if(root==NULL)
           return 0;
       return max(height(root->left), height(root->right))+1;
   }
    int diameter(TreeNode* root){
        if(root==NULL)
            return 0;
        int option1= diameter(root->left);
        int option2 = diameter(root->right);
        int option3= 1+ height(root->left) + height(root->right);
        return max (option1, max(option2, option3));
    }
    int diameterOfBinaryTree(TreeNode*root){
        if(root==NULL)
            return 0;
        return diameter(root) -1;
    }
};