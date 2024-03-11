class Solution {
public:
    vector<int> inOrder;
    void inorder(TreeNode* root){
        if(!root) return;
        else{
            inorder(root -> left);
            inOrder.push_back(root -> val);
            inorder(root -> right);
        }
    }


    int minDiffInBST(TreeNode* root) {
        if(!root) return 0;
        inorder(root);
        int res = INT_MAX;
        for(auto i = 1; i < inOrder.size(); i++){
            res = min(res, inOrder[i] - inOrder[i - 1]);
        }
        return res;
    }
};