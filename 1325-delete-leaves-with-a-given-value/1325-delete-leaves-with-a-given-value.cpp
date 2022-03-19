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
//     void dfs(TreeNode * root, int target){
        
        
//     }
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        // dfs(root,-1,target);
        // if(root->left==NULL && root->right==NULL && root->val==target){
        //     return NULL;
        // }
        
        if(root->left){
            root->left=removeLeafNodes(root->left,target);
           
        }
        if(root->right){
            root->right=removeLeafNodes(root->right,target);
        }
        
         if(root->left==NULL && root->right==NULL && root->val==target){
            return NULL;
        }
        
        
        return root;
    }
};