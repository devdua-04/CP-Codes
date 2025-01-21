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
    void check(TreeNode* root, int targetSum,int sum,vector<vector<int>> &sol,vector<int> temp){
        if(root==NULL) return;
        sum+=root->val;
        temp.push_back(root->val);
        if(sum==targetSum && root->left==NULL && root->right==NULL) {
            sol.push_back(temp);
            return;
        }
        check(root->left,targetSum,sum,sol,temp);
        check(root->right,targetSum,sum,sol,temp);
        return;
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> sol;
        vector<int> temp;
        if(root==NULL) return sol;
        int sum=root->val;
        temp.push_back(root->val);
        if(sum==targetSum && root->left==NULL && root->right==NULL){
            sol.push_back(temp);
            return sol;
        }
        check(root->left,targetSum,sum,sol,temp); 
        check(root->right,targetSum,sum,sol,temp);
        return sol;
    }
};