/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    unordered_map<TreeNode*,TreeNode*>parent;
    // {5->3},{2->5} etc etc bro you can do this ;)
    void inorder(TreeNode* root){
        if(root==nullptr){
            return;
        }
        if(root->left!=nullptr){
            parent[root->left]=root;
            inorder(root->left);
        }
        if (root->right!=nullptr){
            parent[root->right]=root;
            inorder(root->right);
        }
    }

void bfs(TreeNode* node,int k,vector<int>&result){
    queue<TreeNode*>qe;
    qe.push(node);
    int level=0;
    // taking a set to mark all the visited as this is a modification of bf here we are also using the parent value so lets day that if 5 is pushed and then bfs is called for 2 we will not have to traverse 5 again as it will be marked visited;

    unordered_set<int>visited;
    visited.insert(node->val);
    while(! qe.empty()){
        int n=qe.size();
        if(level==k){
            break;
        }
        while(n--){
            TreeNode* curr=qe.front();
            qe.pop();
            if (curr->left!=nullptr && !visited.count(curr->left->val)){
                qe.push(curr->left);
                visited.insert(curr->left->val);
            }
            if (curr->right!=nullptr && !visited.count(curr->right->val)){
                qe.push(curr->right);
                visited.insert(curr->right->val);
            }
            // now to check for the parent 
    /// count to check if the map contains the curr and check if it is not visited
if(parent.count(curr) && !visited.count(parent[curr]->val)){
    qe.push(parent[curr]);
    visited.insert(parent[curr]->val);
}
        }
        level++;
    }
    while(!qe.empty()){
        TreeNode* temp=qe.front();
        qe.pop();
        result.push_back(temp->val);
    }
}




    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        vector<int>result;
        inorder(root);
        bfs(target,k,result);
        return result;
    }
};