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
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;

        ListNode* head = nullptr;
        ListNode* tail = nullptr;

        int x = 0, y = 0, c = 0, carry = 0;

        while(temp1 != nullptr || temp2 != nullptr) {

            x = 0;
            y = 0;

            if(temp1 != nullptr) {
                x = temp1->val;
            }

            if(temp2 != nullptr) {
                y = temp2->val;
            }

            c = x + y + carry;

            carry = c / 10;
            c = c % 10;

            ListNode* newnode = new ListNode(c);

            if(tail == nullptr) {
                head = tail = newnode;
            }
            else {
                tail->next = newnode;
                tail = newnode;
            }

            if(temp1 != nullptr) {
                temp1 = temp1->next;
            }

            if(temp2 != nullptr) {
                temp2 = temp2->next;
            }
        }

        if(carry != 0) {
            ListNode* newnode = new ListNode(carry);
            tail->next = newnode;
            tail = newnode;
        }

        return head;
    }
};