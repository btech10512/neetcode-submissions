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
    ListNode* reverseLL(ListNode* prev,ListNode* head) {

        while(head) {
            ListNode* front = head->next;
            head->next = prev;
            prev = head;
            head = front;
        }
        return prev;
    }
    void reorderList(ListNode* head) {
        int count = 0;
        ListNode* temp = head;

        while(temp) {
            count++;
            temp = temp->next;
        }
        // cout<<count;
        int steps = (count-1)/2;
        temp = head;
        while(steps--) {
            temp = temp->next;
        }
        ListNode* rev = temp->next;
        temp->next = NULL;
        ListNode* reversed = reverseLL(NULL,rev);
        temp = head;

        while(reversed) {
            ListNode* front = temp->next;
            ListNode* back = reversed->next;
            temp->next = reversed;
            reversed->next = front;
            temp = front;
            reversed = back;
        }
        return;
    }
};
