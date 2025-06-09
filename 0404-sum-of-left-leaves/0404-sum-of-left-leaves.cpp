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
    int traverse(TreeNode* root,bool left){
        if(root==NULL) return 0;
        if(root->left==NULL && root->right==NULL && left){
            return root->val;
        }
        return traverse(root->left,true)+traverse(root->right,false);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        return traverse(root,false);
    }
};