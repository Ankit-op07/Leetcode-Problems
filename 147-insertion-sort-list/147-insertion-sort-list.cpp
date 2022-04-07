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
        vector<int>v;
        ListNode *curr=head;
        
        while(curr!=NULL){
            v.push_back(curr->val);
            curr=curr->next;
        }
        sort(v.begin(),v.end());
        ListNode *newList= new ListNode(0);
        ListNode *current=newList;
        
        for(int i=0;i<v.size();i++){
            ListNode * nd = new ListNode(v[i]);
            current->next=nd;
            current=nd;
        }
        current->next=NULL;
        
        return newList->next;
        
    }
};