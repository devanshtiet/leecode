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
    vector<int>result;
    int indx=0;
    void inorder(TreeNode *root){
        if (root==NULL){
            return; 
        }
        inorder(root->left);
        result.push_back(root->val);
        inorder(root->right);
    }
    void inorder2(TreeNode * root){
        if(root==0){
            return;
        }
        inorder2(root->left);
        root->val=result[indx++];
        inorder2(root->right);
    }
    void recoverTree(TreeNode* root) {
        inorder(root);
        sort(result.begin(),result.end());
        inorder2(root);

    }
};