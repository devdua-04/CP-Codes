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
    ListNode* sortList(ListNode* head) {
        vector<int> arr;
        if(head==NULL){
            return head;
        }
        while(head!=NULL){
            arr.push_back(head->val);
            head=head->next;
        }
        sort(arr.begin(),arr.end());
        ListNode* l2=new ListNode(arr[0]);
        ListNode* first=l2;
        for(int i=1;i<arr.size();i++){
            l2->next=new ListNode(arr[i]);
            l2=l2->next;
        }
        return first;
    }
};