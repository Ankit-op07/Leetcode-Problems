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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){
return head;
        }
        
         ListNode*c=head;
        int n=0;
        while(c!=NULL){
            c=c->next;
            n++;
        }
        
        if(k%n==0){
            return head;
        }else{
            k=k%n;
        }
        
        ListNode *curr=head;
        
        int i=1;
        while(i!=(n-k)){
            curr=curr->next;
            i++;
        }
        ListNode *tail = curr;
        ListNode *newHead=curr->next;
        
        while(curr->next!=NULL){
            curr=curr->next;
        }
        curr->next=head;
        tail->next=NULL;
        return newHead;
    }
};