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
    // T.c = o(n);
    // S.c = o(n);
   // better  s.c =o(1);
    TreeNode* sortedListToBST(ListNode* head) {
       if(head==NULL)return NULL;
        
        return fun(head,NULL);
        
    }
    
    TreeNode *fun(ListNode *head,ListNode * tail){
        ListNode *slow=head;
        ListNode*fast=head;
        if(head==tail) return NULL;
        while(fast!=tail && fast->next!=tail){
            slow=slow->next;
            fast=fast->next->next;
            
        }
        TreeNode*root=new TreeNode(slow->val);
        root->left=fun(head,slow);
        root->right=fun(slow->next,tail);
        return root;
    }
    
   
};