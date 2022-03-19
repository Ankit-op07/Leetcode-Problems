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
    int goodNodes(TreeNode* root,int maxx=INT_MIN) {
       
        if(root==NULL) return 0;
        int count=0;
        
        if(root->val>=maxx){
            count++;
            maxx=root->val;
        }
        
        count += goodNodes(root->left,maxx);
        count += goodNodes(root->right,maxx);
        
        return count;
        
       
    }
    
    
//     void dfs(TreeNode *root,int maxx,int &count){
        
//         if(root==NULL){
//             return;
//         }
        
//         if(root->val>=maxx){
//             count++;
//             maxx=root->val;
//         }
        
//         dfs(root->right,maxx,count);
//         dfs(root->left,maxx,count);
//     }
};