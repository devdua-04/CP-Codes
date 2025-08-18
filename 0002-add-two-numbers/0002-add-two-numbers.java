/**
 * Definition for singly-linked list.
 * public class ListNode {
 *     int val;
 *     ListNode next;
 *     ListNode() {}
 *     ListNode(int val) { this.val = val; }
 *     ListNode(int val, ListNode next) { this.val = val; this.next = next; }
 * }
 */
class Solution {
    public ListNode addTwoNumbers(ListNode l1, ListNode l2) {
        int c=0;
        ListNode h1=new ListNode();
        int temp=0;
        ListNode th=h1;
        while(l1!=null && l2!=null){
            temp=l1.val+l2.val+c;
            ListNode t=new ListNode(temp%10);
            c=temp/10;
            th.next=t;
            th=th.next;
            l1=l1.next;
            l2=l2.next;
        }
        while(l1!=null){
            temp=l1.val+c;
            ListNode t=new ListNode(temp%10);
            c=temp/10;
            th.next=t;
            th=th.next;
            l1=l1.next;
        }
        while(l2!=null){
            temp=l2.val+c;
            ListNode t=new ListNode(temp%10);
            c=temp/10;
            th.next=t;
            th=th.next;
            l2=l2.next;
        }
        if(c!=0){
            th.next=new ListNode(c);
            th=th.next;
        }
        return h1.next;
    }
}