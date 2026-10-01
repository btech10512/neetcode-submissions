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
        ListNode* first = l1;
        ListNode* second = l2;
        ListNode* head = new ListNode();
        ListNode* secondary = head;
        int carry = 0;
        while(first && second) {
            int sum = first->val + second->val + carry;
            first = first->next;
            second = second->next;
            carry = sum/10;
            sum %= 10;
            ListNode* temp = new ListNode(sum);
            secondary->next = temp;
            secondary = secondary->next;
        }
        while(first) {
            int sum = first->val + carry;
            first = first->next;
            carry = sum/10;
            sum %= 10;
            ListNode* temp = new ListNode(sum);
            secondary->next = temp;
            secondary = secondary->next;
        }
        while(second) {
            int sum = second->val + carry;
            second = second->next;
            carry = sum/10;
            sum %= 10;
            ListNode* temp = new ListNode(sum);
            secondary->next = temp;
            secondary = secondary->next;
        }
        if(carry != 0) {
            ListNode* temp = new ListNode(carry);
            secondary->next = temp;
            secondary = secondary->next;
        }
        return head->next;
    }
};
