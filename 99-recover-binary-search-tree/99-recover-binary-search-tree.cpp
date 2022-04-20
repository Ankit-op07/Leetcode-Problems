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
   
    
    void fun(TreeNode *root,vector<int>&temp){
        
        if(root==NULL) return ;
        
        fun(root->left,temp);
        temp.push_back(root->val);
        fun(root->right,temp);
        
    }
    
    void recoverTree(TreeNode* root) {
        vector<int>temp;
        
         fun(root,temp);
        vector<int>temp2=temp;
        sort(temp.begin(),temp.end());
    int a=-1,b=-1;
        for(int j=0;j<temp.size();j++){
            if(temp[j]!=temp2[j]){
                a=temp[j];
                b=temp2[j];
                break;
            }
        }
        
      
        solve(root,a,b);
        
        
    }
    
    void solve(TreeNode *root,int a,int b){
        
        if(root==NULL) return ;
        
         if(root->val==a){
             root->val=b;
         }else if(root->val==b){
             root->val=a;
         }
        
        solve(root->left,a,b);
        solve(root->right,a,b);

        
    }
};