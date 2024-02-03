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
    int minDepth(TreeNode* root,int min = 0) {
        if(root == NULL)
            return min;
        return mini(minDepth(root->right,min),minDepth(root->left,min)) + 1;
    }
    int mini(int a,int b)
    {
        if(a == 0)
            return b;
        if(b == 0)
            return a;
        return a > b ? b : a;
    }
        
};