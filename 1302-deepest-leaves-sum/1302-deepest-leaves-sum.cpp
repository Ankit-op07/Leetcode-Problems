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
    int deepestLeavesSum(TreeNode* root) {
        int sum = 0;
        int h=1;
        
        helper(root,h,1,sum);
        return sum;
    }

    void helper(TreeNode * root, int &maxH,int currH, int &sum){
        if(root==NULL){
            return;
        }
        if(currH > maxH){
            sum=0;
            maxH = currH;
        }
        if(currH == maxH){
           
            sum += root->val;
        }
        
        helper(root->left,maxH,currH+1,sum);
        helper(root->right,maxH,currH+1,sum);
        
        
        
    }
};