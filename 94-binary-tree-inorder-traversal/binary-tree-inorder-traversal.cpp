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
    void traversal(TreeNode* root,vector<int>&results){
        if(root!=NULL){
            traversal(root->left,results);
            results.push_back(root->val);
            traversal(root->right,results);
        }
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>results;

        traversal(root,results);

        return results;
    }
};