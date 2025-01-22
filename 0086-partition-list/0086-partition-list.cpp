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
    ListNode* partition(ListNode* head, int x) {
        if(head==NULL) return head;
        vector<int> nums;
        while(head!=NULL){
            nums.push_back(head->val);
            head=head->next;
        }
        vector<int> sol;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<x) sol.push_back(nums[i]);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>=x) sol.push_back(nums[i]);
        }
        ListNode *head1=new ListNode(sol[0]);
        ListNode* temp=head1;
        for(int i=1;i<sol.size();i++){
            temp->next=new ListNode(sol[i]);
            temp=temp->next;
        }
        return head1;
    }
};