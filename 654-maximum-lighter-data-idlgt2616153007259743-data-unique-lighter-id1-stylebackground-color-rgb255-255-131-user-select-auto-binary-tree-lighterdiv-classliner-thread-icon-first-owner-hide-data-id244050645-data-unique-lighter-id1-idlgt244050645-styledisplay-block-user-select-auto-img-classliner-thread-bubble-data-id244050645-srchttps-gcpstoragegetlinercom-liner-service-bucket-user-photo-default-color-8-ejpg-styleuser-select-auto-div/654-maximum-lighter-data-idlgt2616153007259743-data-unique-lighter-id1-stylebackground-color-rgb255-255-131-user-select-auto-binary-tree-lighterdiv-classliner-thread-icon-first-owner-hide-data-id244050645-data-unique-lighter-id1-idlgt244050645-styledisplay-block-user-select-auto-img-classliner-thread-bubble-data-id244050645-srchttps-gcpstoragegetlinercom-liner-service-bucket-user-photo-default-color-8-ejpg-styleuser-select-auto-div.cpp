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
    TreeNode* constructMaximumBinaryTree(vector<int>& nums) {
       
        TreeNode *ans = helper(0,nums.size()-1,nums);
return ans;
    
    }
    
    TreeNode*helper(int l,int r,vector<int>nums){
        if(l>r)return NULL;
        
        int maxi=INT_MIN;
        int index=0;
        for(int i=l;i<=r;i++){
if(nums[i]>maxi){
    maxi=nums[i];
    index=i;
}       
        }
        TreeNode *root=new TreeNode(maxi);
        root->left=helper(l,index-1,nums);
        root->right=helper(index+1,r,nums);
        return root;
    }
};