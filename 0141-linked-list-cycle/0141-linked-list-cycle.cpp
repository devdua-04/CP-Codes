/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL) return false;
        ListNode* temp=head;
        ListNode* rnr=head->next;
        while(temp!=rnr && rnr!=NULL){
            temp=temp->next;
            if(rnr->next==NULL){
                rnr=NULL;
                break;
            }
            rnr=rnr->next->next;
        }
        if(rnr!=NULL){
            return true;
        }else return false;
    }
};