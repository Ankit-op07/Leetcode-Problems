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

    // dfs solution 
    void dfs(TreeNode *current, TreeNode *parent, TreeNode *grandParent,int &sum){
        if(current==NULL) return;
        
        if(grandParent!=NULL && grandParent->val%2==0){
            sum+=current->val;
        }
        dfs(current->left,current,parent,sum);
        dfs(current->right,current,parent,sum);
    }
    
    
    int sumEvenGrandparent(TreeNode* root) {
               if(root==NULL) return 0 ;
        int sum=0;
        dfs(root,NULL,NULL,sum);
        return sum;
        
    }
};