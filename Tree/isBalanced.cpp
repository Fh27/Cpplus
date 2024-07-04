class Solution {
public:
bool isBool=true;
int height(TreeNode* root){
    if(!root){
        return 0;
    }
    int left=height(root->left);
    int right=height(root->right);
    if(abs(left-right)>1){
        isBool=false;
    }
    return max(left,right)+1;
    }

    bool isBalanced(TreeNode* root) {
        height(root);
        return isBool;
    }
};
