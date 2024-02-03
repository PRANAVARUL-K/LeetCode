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
    bool isSymmetric(TreeNode* root) {
        if(root == NULL || root->left == NULL && root->right == NULL)
            return true;
        return symmetric(root->left,root->right);
    }
    bool symmetric(TreeNode* left,TreeNode* right)
    {
        if(left == NULL && right == NULL)
            return true;
        if(left == NULL || right == NULL)
            return false;
        if(left->val == right->val)
            return symmetric(left->left,right->right) && symmetric(left->right,right->left);
        return false;
    }
};