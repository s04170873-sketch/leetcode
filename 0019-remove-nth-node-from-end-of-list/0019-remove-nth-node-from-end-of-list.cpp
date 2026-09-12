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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp=head;
        int c=0;
        while(temp!=nullptr){
            c=c+1;
            temp=temp->next;
        }
        if(n == c){
            head = head->next;
            return head;
        }
        ListNode* h=head;
        for(int i=0;i<(c-n-1);i++){
            h=h->next;
        }
        h->next=h->next->next;
        return head;
    }
};