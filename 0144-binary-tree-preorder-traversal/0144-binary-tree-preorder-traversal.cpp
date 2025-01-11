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
void Traverse(TreeNode* root,vector<int> &preorder){
        if(root==NULL) return;
        
        if(root->left==NULL && root->right==NULL){
            preorder.push_back(root->val);
            return;
        }
        
        preorder.push_back(root->val);
        Traverse(root->left,preorder);
        Traverse(root->right,preorder);
        
    }
    vector<int> preorderTraversal(TreeNode* root) {
     vector<int> preorder;
        Traverse(root,preorder);
        return preorder;   
    }
};