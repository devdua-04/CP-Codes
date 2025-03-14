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
    bool check(TreeNode* root, int targetSum,int sum){
        if(root==NULL) return false;
        sum+=root->val;
        if(sum==targetSum) return true;
        return check(root->left,targetSum,sum) | check(root->right,targetSum,sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(root==NULL) return false;
        int sum=root->val;
        if(sum==targetSum) return true;
        return check(root->left,targetSum,sum) | check(root->right,targetSum,sum);
    }
};