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
     void helper(TreeNode*root,vector<int>&values){
        if(root==NULL)return;
        
        values.push_back(root->val);
        
        
        helper(root->left,values);
        helper(root->right,values);
        return;
        
    }
    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        
        vector<int>ans;
        helper(root1,ans);
        helper(root2,ans);
        sort(ans.begin(),ans.end());
        return ans;
    }
};