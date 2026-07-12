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
    int widthOfBinaryTree(TreeNode* root) {
        queue<pair<TreeNode *,long long >> q;
        q.push({root,0});
        long long maxwidth=0;
        while(!q.empty()){
            // lets process this bbg
            long long  left=q.front().second; //here the .second is used for the index part 
            // when we push the node the left node will be pushed first thats why we take qq.front for left and the right part will be after left so it will be behind thats why we take q.back for right.

            long long right= q.back().second;
            maxwidth=max(maxwidth,right-left+1);
            long long n=q.size();
            // now we know the size of the queue so we will start popping and then adding if any leaf node is present back in the queue

            while(n--){
                TreeNode* curr= q.front().first;
                long long indx=q.front().second-left;
                q.pop();
                if(curr->left != NULL){
                    q.push({curr->left,2*indx+1});
                }
                if (curr->right !=NULL){
                    q.push({curr->right,2*indx+2});
                }
            }

        }
        return maxwidth;

    }
};