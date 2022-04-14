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
   
    TreeNode* searchBST(TreeNode* root, int val) {
        
       // TreeNode*ans = NULL;
        if(!root) return NULL;
        if(root->val==val){
            return root;
        }
        
        TreeNode *left = searchBST(root->left,val);
        TreeNode *right = searchBST(root->right,val);
        
        if(left) return left;
        if(right) return right;
        return NULL;
       
        
    }
      
    
    void fun (TreeNode * root, TreeNode * ans,int val ){
        if(root==NULL) return ;
        
        if(root->val == val){
            cout<<root->val;
             ans = root;
            return ;
        }
        
        fun(root->left,ans,val);
        fun(root->right,ans,val);
    }
};