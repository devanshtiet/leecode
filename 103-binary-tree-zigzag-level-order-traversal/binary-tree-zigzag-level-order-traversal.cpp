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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>ans;
        if(root==NULL){
        return ans;
    }

    queue<TreeNode*>q;
    q.push(root);
    bool flag=false;
    while(!q.empty()){
        int s=q.size();
        vector<int>level;

        for(int i=0;i<s;i++){
            TreeNode* front = q.front();
            q.pop();
            level.push_back(front->val);
            if (front->left){
                q.push(front->left);
            }
            if(front->right){
                q.push(front->right);
            }
        }

            if (flag==true){
                reverse(level.begin(),level.end());

            }

            flag=!flag;
            ans.push_back(level);
        
        }
        return ans;
    }
};