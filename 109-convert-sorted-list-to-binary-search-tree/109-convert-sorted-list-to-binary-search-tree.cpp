/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    TreeNode* sortedListToBST(ListNode* head) {
        vector<int>nums;
        ListNode *curr=head;
        while(curr!=NULL){
            nums.push_back(curr->val);
            curr=curr->next;
        }
        
        int l=0;
        int r=nums.size()-1;
        return fun(l,r,nums);
        
    }
    
    TreeNode *fun(int l,int r,vector<int>nums){
        if(l>r)return NULL;
        int mid=l+(r-l)/2;
        
        TreeNode *root = new TreeNode(nums[mid]);
        root->left=fun(l,mid-1,nums);
        root->right=fun(mid+1,r,nums);
        return root;
        
        
    }
};