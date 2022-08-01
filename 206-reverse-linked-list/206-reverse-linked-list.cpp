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
    ListNode* reverseList(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        ListNode * first = head;
        ListNode * second = first->next;
        ListNode * third = head;
        
        while(second != NULL){
            third = second;
            second = second->next;
            third->next = first;
            first = third;
        }
        head->next = NULL;
        return third;
    }
};