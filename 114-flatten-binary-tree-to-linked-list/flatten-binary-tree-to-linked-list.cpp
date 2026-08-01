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
void preorder(TreeNode* head,vector<TreeNode*>&result)
{
    if(head==nullptr){
        return;
    }
    result.push_back(head);
    preorder(head->left,result);
    preorder(head->right,result);
}    
void flatten(TreeNode* root) {
    if(root==nullptr){
        return;
    }
        
        vector<TreeNode*>result;
        preorder(root,result);
        for(int i=0;i<result.size()-1;i++){
            result[i]->left=NULL;
            result[i]->right=result[i+1];
        }
        result.back()->left=NULL;
        result.back()->right=NULL;
        
    }
};