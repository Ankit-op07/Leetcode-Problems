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
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        if(head->next==NULL){
            return head;
        }
    int length=1;
        ListNode *curr=head,*pt1=head,*pt2=head;
        while(curr->next!=NULL){
            
            
            
            length++;
            curr=curr->next;
        }
        int p1=k-1;
        while(p1--){
            
            
            pt1=pt1->next;
        }
        int p2=length-k;
        while(p2--){
            
            
            
            pt2=pt2->next;
        }
        swap(pt1->val,pt2->val);
        
     return head;   
    }
};