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
        int count = 0;
        ListNode* temp = head;
        while(temp) {
            count++;
            temp = temp->next;
        }
        if(n == count) return head->next;
        count = count-n-1;

        temp = head;

        while(count--) {
            temp = temp->next;
        }
        ListNode* front = temp->next;
        temp->next = front->next;
        return head;
    }
};
