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
    
    void helper(TreeNode * root,int level,int&maxx,int &ans){
        if(root==NULL) return;
        if(level>maxx){
            ans=root->val;
            maxx=level;
        }
        helper(root->left,level+1,maxx,ans);
         helper(root->right,level+1,maxx,ans);
    }
    int findBottomLeftValue(TreeNode* root) {
        int ans=root->val;
        int level=0;
        int maxx=0;
        helper(root,level,maxx,ans);
        return ans;
    }
};