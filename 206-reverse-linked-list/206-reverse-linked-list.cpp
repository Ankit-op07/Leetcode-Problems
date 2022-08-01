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
    ListNode* reverseList(ListNode* head,ListNode * prevNode = NULL, ListNode * nextNode = NULL) {
       // ListNode * currNode = head;
       //  ListNode * prevNode = NULL;
       //  ListNode * nextNode = NULL;
        
        if(!head){
            return prevNode;
        }
        
      
            nextNode = head ->next;
            head -> next = prevNode;
            prevNode = head;
            head = nextNode;
        
        return reverseList(head,prevNode,nextNode);
      
    }
};