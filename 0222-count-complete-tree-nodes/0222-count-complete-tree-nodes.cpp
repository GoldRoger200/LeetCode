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
    int l(TreeNode* root){
        if(!root)
            return 0;
        int c1=0;
        while(root){
            ++c1;
            root=root->left;
        }
        return c1;
    }
    int r(TreeNode* root){
        if(!root)
            return 0;
        int c2=0;
        while(root){
            ++c2;
            root=root->right;
        }
        return c2;
    }
    int countNodes(TreeNode* root) {
        if(!root)
            return 0;
        int LH=l(root);
        int RH=r(root);
        if(LH==RH)
            return pow(2,LH)-1;
        return 1+countNodes(root->left)+countNodes(root->right);
    }
};