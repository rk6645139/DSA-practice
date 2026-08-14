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
vector<TreeNode*>generateTrees(int n){
    if(n==0)return {};
    return build(1, n);
}
    vector<TreeNode*> build(int start, int end) {
        vector<TreeNode*>result;
        if(start>end){
            result.push_back(nullptr);
            return result;
        }

        for(int i=start; i<=end; i++){
            vector<TreeNode*>lefts=build(start, i-1);
            vector<TreeNode*>rights=build(i+1, end);
        

        for(TreeNode* l:lefts){
            for(TreeNode* r:rights){
                TreeNode* root = new TreeNode(i);
                    root->left = l;
                    root->right = r;
                    result.push_back(root);
            }}
        }

        return result;

        
    }
};