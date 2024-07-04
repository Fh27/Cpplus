class Solution {
public:
    int D=0;
int maxDepth(TreeNode* root) {
        if(!root) return 0;
        int left=maxDepth(root->left);
        int right=maxDepth(root->right);
        int curD=left+right;
        D=max(D,curD);
        return max(left,right)+1; 
    }
    int diameterOfBinaryTree(TreeNode* root) {
        maxDepth(root);
        return D;
    }
};
