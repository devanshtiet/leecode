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
void inorder(TreeNode *  node,vector<int>&result){
    if (node==NULL){
        return;
    }
    else{
        inorder(node->left,result);
        result.push_back(node->val);
        inorder(node->right,result);

    }
}
    bool findTarget(TreeNode* root, int k) {
        vector<int>result;
        inorder(root,result);
        int left=0;
        int right=result.size()-1;
        while(left<right){
            if((result[left]+result[right])==k){
                return true;
            }
            else if((result[left]+result[right])>k){
                right--;
            }
            else if ((result[left])+result[right]<k){
                left++;
            }

        }
        return false;
    }
};