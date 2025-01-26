/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    int check(TreeNode* root, string num) {
        if (root == NULL)
            return 0;
        
        if (root->left == NULL && root->right == NULL)
            return stoi(num+to_string(root->val));
        return check(root->left, num + to_string(root->val)) +
               check(root->right, num + to_string(root->val));
    }
    int sumNumbers(TreeNode* root) {
        if (root == NULL)
            return 0;
        if (root->left == NULL && root->right == NULL)
            return root->val;
        string num=to_string(root->val);
        return check(root->left,num) +check(root->right,num);
    }
};