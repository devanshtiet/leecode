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
    TreeNode* tree_bnade_bhai(vector<int>&inorder,vector<int>&postorder,int start,int end ,int &indx){
        if(start>end){
            return NULL;
        }
        int i=start;
        int rootval=postorder[indx];
        for(;i<=end;i++){
            if(inorder[i]==rootval){
                break;
            }
        }
        TreeNode* root=new TreeNode(rootval);
        indx--;
        root->right=tree_bnade_bhai(inorder,postorder,i+1,end,indx);
        root->left=tree_bnade_bhai(inorder,postorder,start,i-1,indx);
        return root;
    }

    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        int n=postorder.size();
        int indx=n-1;
        return tree_bnade_bhai(inorder,postorder,0,n-1,indx);

    }
};