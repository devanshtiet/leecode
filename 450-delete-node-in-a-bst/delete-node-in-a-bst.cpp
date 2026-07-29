class Solution {
public:
    TreeNode* majdoor(TreeNode* root){
        while(root->left != nullptr){
            root = root->left;
        }
        return root;
    }

    TreeNode* deleteNode(TreeNode* root, int key) {

        if(root == nullptr){
            return nullptr;
        }
        else if(root->val < key){
            root->right = deleteNode(root->right, key);
        }
        else if(root->val > key){
            root->left = deleteNode(root->left, key);
        }
        else{
            if(root->right == nullptr){
                TreeNode* temp = root->left;
                delete root;
                return temp;
            }

            else if(root->left == nullptr){
                TreeNode* temp = root->right;
                delete root;
                return temp;
            }

            TreeNode* temp = majdoor(root->right);
            root->val = temp->val;
            root->right = deleteNode(root->right, temp->val);
        }

        return root;
    }
};