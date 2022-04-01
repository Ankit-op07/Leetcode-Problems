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
   
    bool isSymmetric(TreeNode* root) {
        //return fun(root->left,root->right);
        
        stack<TreeNode *> st1;
        stack<TreeNode *> st2;
        
        st1.push(root->left);
        st2.push(root->right);
        
        while(!st1.empty() && !st2.empty()){
            
            TreeNode *left=st1.top();
            st1.pop();
            TreeNode *right=st2.top();
            st2.pop();
            
            if(left==NULL && right==NULL){
               continue;
            }
            if(left==NULL || right==NULL){
                return false;
            }
            
            if(left->val!=right->val) return false;
            
            st1.push(left->left);
            st1.push(left->right);
            st2.push(right->right);
            st2.push(right->left);
        }
        
        return true;
        
        
        
    }
    
    bool fun(TreeNode *p, TreeNode *q){
        
        if(p==NULL && q==NULL){
            return true;
        }else if(p==NULL || q==NULL){
            return false;
        }
        
        if(p->val!=q->val) return false;
        
        return fun(p->left,q->right) && fun(p->right,q->left);
    }
    
    

   
};