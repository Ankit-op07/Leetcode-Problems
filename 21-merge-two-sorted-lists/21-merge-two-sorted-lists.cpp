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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
         ListNode *main=new ListNode();
        ListNode *n=main;
        ListNode *i=l1;
         ListNode *j=l2;
        while(i!=NULL && j!=NULL){
            if(i->val<=j->val){
               
                ListNode*next=new ListNode(i->val);
                n->next=next;
                n=next;
                i=i->next;
            }else{
                ListNode*next=new ListNode(j->val);
                n->next=next;
                n=next;
                j=j->next;
            }
        }
        while(i!=NULL){
             ListNode*next=new ListNode(i->val);
                n->next=next;
            n=next;
            i=i->next;
        }
          while(j!=NULL){
             ListNode*next=new ListNode(j->val);
             
                n->next=next;
               n=next;
              j=j->next;
        }
       main=main->next;
        return main;
    }
};