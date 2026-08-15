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
bool symmetry(TreeNode *lroot, TreeNode*  rroot){
    if(lroot==NULL && rroot==NULL)return true;
    if(lroot==NULL ||rroot==NULL)return false;
    return lroot->val==rroot->val &&symmetry(lroot->left, rroot->right) && symmetry(lroot->right , rroot->left);

}
    bool isSymmetric(TreeNode* root) {
        return symmetry(root->left, root->right);
    }
};