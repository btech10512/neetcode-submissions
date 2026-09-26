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

        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {

                ListNode* head1 = list1;

                        ListNode* head2 = list2;

                                ListNode* dummy = new ListNode(0);

                                        ListNode* temp = dummy;

                                                while(head1 && head2) {

                                                            if(head1->val <= head2->val) {

                                                                            temp->next = head1;

                                                                                            temp = temp->next;

                                                                                                            head1 = head1->next;

                                                                                                                        }else {

                                                                                                                                        temp->next = head2;

                                                                                                                                                        temp = temp->next;

                                                                                                                                                                        head2 = head2->next;

                                                                                                                                                                                    }

                                                                                                                                                                                            }

                                                                                                                                                                                                    while(head1) {

                                                                                                                                                                                                                temp->next = head1;

                                                                                                                                                                                                                            temp = temp->next;

                                                                                                                                                                                                                                        head1 = head1->next;

                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                        while(head2) {

                                                                                                                                                                                                                                                                    temp->next = head2;

                                                                                                                                                                                                                                                                                temp = temp->next;

                                                                                                                                                                                                                                                                                            head2 = head2->next;

                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                            return dummy->next;

                                                                                                                                                                                                                                                                                                                }

                                                                                                                                                                                                                                                                                                                };

