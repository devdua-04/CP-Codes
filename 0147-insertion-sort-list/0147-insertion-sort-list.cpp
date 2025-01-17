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
    // ListNode* l2;
    //     if(head!=NULL)
    //         l2=new ListNode(head->val);
    //     ListNode* temp=head->next;
    //     ListNode* first=l2;
    //     while(temp!=NULL){
    //         ListNode* t=new ListNode(temp->val);
    //         if(t->val<=first->val){
    //             t->next=first;
    //             first=t;
    //         }else if(t->val>=l2->val){
    //             l2->next=t;
    //             l2=t;
    //         }else{
    //             ListNode* t1=first;
    //             ListNode* prev=t1;
    //             // int flag=0;
    //             while(t->next==NULL){
    //                 if(t->val<=t1->val){
    //                     prev->next=t;
    //                     t->next=t1;
    //                     // break;
    //                 }
    //                 t1=t1->next;
    //                 prev=t1;
    //             }
    //         }
    //         temp=temp->next;
    //     }
    //     return first;
};