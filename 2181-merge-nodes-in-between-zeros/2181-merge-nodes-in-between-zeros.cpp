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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp=head;
        int sum=0;
        ListNode* k=new ListNode();
        ListNode *h1=k;
        temp=temp->next;
        while(temp!=NULL){
            if(temp->val==0){
                k->next=new ListNode(sum);
                k=k->next;
                temp=temp->next;
                sum=0;
            }else{
                sum+=temp->val;
                temp=temp->next;
            }
        }
        return h1->next;
    }
};