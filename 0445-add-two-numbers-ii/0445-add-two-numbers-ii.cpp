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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        stack<int> ls1;
        stack<int> ls2;
        while(l1!=NULL){
            ls1.push(l1->val);
            l1=l1->next;
        }
        while(l2!=NULL){
            ls2.push(l2->val);
            l2=l2->next;
        }
        int rem=0;
        stack<int> sol;
        int s1=ls1.size();
        int s2=ls2.size();
        int ans=0;
        // cout<<s1<<" "<<s2;
        while(s1!=0 && s2!=0){
            int temp=ls1.top()+ls2.top()+rem;
            ls1.pop();
            ls2.pop();
            rem=temp/10;
            sol.push(temp%10);
            cout<<temp<<endl;
            s1--;
            s2--;
        }
        while(s1!=0){
            int temp=rem+ls1.top();
            sol.push(temp%10);
            rem=temp/10;
            ls1.pop();
            s1--;
        }
        while(s2!=0){
            int temp=rem+ls2.top();
            sol.push((temp%10));
            rem=temp/10;
            ls2.pop();
            s2--;
        }
        if(rem!=0) sol.push(rem);
        ListNode* l3=new ListNode();
        ListNode* h=l3;
        while(!sol.empty()){
            l3->next=new ListNode(sol.top());
            sol.pop();
            l3=l3->next;
        }
        return h->next;

    }
};