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
    void reorderList(ListNode* head) {
        if(head==NULL) return;
        ListNode* temp=head;
        // ListNode* prev=NULL;
        vector<int> sol;
        while(temp!=NULL){
            sol.push_back(temp->val);
            temp=temp->next;
        }
        for(int i=0;i<sol.size();i++){
            cout<<sol[i]<<" ";
        }
        int i=0;
        int j=sol.size()-1;
        temp=head;
        int flag=0;
        while(i<=j){
            if(flag==0){
                flag=1;
                temp->val=sol[i];
                i++;
            }else{
                flag=0;
                temp->val=sol[j];
                j--;
            }
            temp=temp->next;
        }
        return;
    }
};