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
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root->val==val) return root;
        if(root->left==NULL && root->right==NULL) return NULL;
        if(root->val<val && root->right!=NULL) return searchBST(root->right,val);
        else if(root->val>val && root->left!=NULL) return searchBST(root->left,val);
        else return NULL;
    }
};