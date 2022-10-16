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
    bool Mirror(TreeNode* r1,TreeNode* r2){
        if(!r1 && !r2)
            return true;
        if(r1 && r2 && r1->val==r2->val)
            return Mirror(r1->left,r2->right)&&Mirror(r1->right,r2->left);
        return false;
    }
    bool isSymmetric(TreeNode* root) {
        return Mirror(root,root);
    }
};