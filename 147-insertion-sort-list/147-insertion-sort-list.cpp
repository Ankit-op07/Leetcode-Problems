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
    ListNode* insertionSortList(ListNode* head) {
      
        int i=0;
        
        while(i<5005){
            
            ListNode *curr=head;
            
            while(curr->next!=NULL){
                if(curr->val>curr->next->val){
                    int temp=curr->val;
                   curr->val =  curr->next->val;
                    curr->next->val = temp;
                }
                curr=curr->next;
            }
            
            i++;
        }
        return head;
    }
};