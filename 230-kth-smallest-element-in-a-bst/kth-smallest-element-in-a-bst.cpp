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
        void inorder(TreeNode* node){
            if(node!= NULL){
            inorder(node->left);
            result.push_back(node->val);
            inorder(node->right);
            }
        }
    int kthSmallest(TreeNode* root, int k) {
        inorder(root);
        sort(result.begin(),result.end());
        return result[k-1];
    }
};