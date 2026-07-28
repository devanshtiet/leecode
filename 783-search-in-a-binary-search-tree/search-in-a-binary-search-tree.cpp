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
    TreeNode* result = NULL; 
    queue<TreeNode*>q;
    q.push(root);
    while(!q.empty()){
        TreeNode* curr=q.front();
        q.pop();
        if (curr->left!=NULL){
            q.push(curr->left);

        }
        if (curr->right!=NULL){
            q.push(curr->right);
        }
        if(curr->val==val){
            result=curr;
        }
    }
    return result;
    }
};