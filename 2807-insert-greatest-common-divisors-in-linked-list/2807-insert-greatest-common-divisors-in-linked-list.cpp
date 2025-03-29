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
    int gcd(int n,int m){
        int res;
        for(int i=1;i<=min(m,n);i++){
            if(m%i==0 && n%i==0) res=i;
        }
        return res;
    }
    ListNode* insertGreatestCommonDivisors(ListNode* head) {
        ListNode* prev;
        ListNode* temp=head;
        prev=temp;
        temp=head->next;
        while(temp!=NULL){
            int t=gcd(prev->val,temp->val);
            prev->next=new ListNode(t);
            prev=prev->next;
            prev->next=temp;
            prev=temp;
            temp=temp->next;
        }
        return head;

    }
};