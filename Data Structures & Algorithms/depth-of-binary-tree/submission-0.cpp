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

    int preorder(TreeNode *root)
    {
        if(!root)
        {
            return 0;
        }
        return 1+ max(preorder(root->right),preorder(root->left));
    }
public:
    int maxDepth(TreeNode* root) {
        
        return preorder(root);
    }
};
