class Solution {
public:
    vector<int> v;
    int i = 0;
    void inOrder(TreeNode* root){
        if(!root) return;
        inOrder(root -> left);
        v.push_back(root -> val);
        inOrder(root -> right);
    }
    void check(TreeNode* root){
        if(!root) return;
        check(root -> left);
        if(v[i] != root -> val) swap(v[i], root -> val);
        i++;
        check(root -> right);
    }


    void recoverTree(TreeNode* root) {
        inOrder(root);
        sort(v.begin(), v.end());
        check(root);
    }
};