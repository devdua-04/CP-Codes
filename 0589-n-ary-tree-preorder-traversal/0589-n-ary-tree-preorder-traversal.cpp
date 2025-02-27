/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void traverse(Node* root,vector<int>&res){
        if(root==NULL) return;
        res.push_back(root->val);
        for(auto i:root->children){
            traverse(i,res);
        }
        return;
    }
    vector<int> preorder(Node* root) {
        if(root==NULL) return {};
        vector<int> res;
        traverse(root,res);
        return res;
    }
};