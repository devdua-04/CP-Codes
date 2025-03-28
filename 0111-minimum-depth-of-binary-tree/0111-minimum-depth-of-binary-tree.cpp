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
int depth(TreeNode* root){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL) return 1;
        if(root->left==NULL)
        if(root->left==NULL)
            return 1+depth(root->right);
        if(root->right==NULL)
            return 1+depth(root->left);
        int x=depth(root->right);
        int y=depth(root->left);
        return 1+(x<y ? x:y);
    }

    int minDepth(TreeNode* root) {
        if(root==NULL) return 0;
        if(root->left==NULL)
            return 1+depth(root->right);
        if(root->right==NULL)
            return 1+depth(root->left);
        int x=depth(root->right);
        int y=depth(root->left);
        return 1+(x<y ? x:y);
    }
};