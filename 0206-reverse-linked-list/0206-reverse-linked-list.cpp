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
        if(head==NULL) return head;
        ListNode* temp=head;
        ListNode* prev=NULL;
        ListNode* next=temp->next;
        while(temp!=NULL && next!=NULL){
            temp->next=prev;
            prev=temp;
            temp=next;
            next=next->next;
        }
        temp->next=prev;
        head=temp;
        return temp;
    }
};