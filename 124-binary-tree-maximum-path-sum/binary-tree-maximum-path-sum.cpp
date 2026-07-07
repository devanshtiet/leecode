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
    int ans=INT_MIN;
    int maxsuum(TreeNode* root){
        if(root==nullptr){
            return 0;
        }
       int lh = max(0,maxsuum(root->left));
       int rh = max(0,maxsuum(root->right));
       ans = max(ans,root->val+lh+rh);
       return max(lh,rh)+root->val;
        
    }
    int maxPathSum(TreeNode* root) {

        maxsuum(root);
        return ans;
    }
};