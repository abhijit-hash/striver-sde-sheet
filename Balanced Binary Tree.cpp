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
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        if(height(root)==-1)
            return false;
        return true;
    }
    int height(TreeNode* root){
        if(root==NULL)
            return 0;
        int leftheight=height(root->left);
        int rightheight=height(root->right);
        if(leftheight==-1 || rightheight==-1 || abs(leftheight - rightheight)>1)
            return -1;
        return max(leftheight,rightheight)+1;
    }
        
        
};
