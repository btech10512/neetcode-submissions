/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Node {

public:

    int val;

    Node* next;

    Node* random;

   

    Node(int _val) {

        val = _val;

        next = NULL;

        random = NULL;

    }

};


*/
 

class Solution {

public:

    Node* createLL(Node* head,unordered_map<Node*,Node*>&m1) {

        if(!head) return NULL;

 

        Node* temp = new Node(head->val);

        m1.insert({head,temp});

        temp->next = createLL(head->next,m1);

 

        return temp;

    }

    Node* copyRandomList(Node* head) {

        if(!head) return NULL;

 

        unordered_map<Node*,Node*>m1;

        Node* newHead = createLL(head,m1);

 

        Node* temp = newHead;

        Node* head1 = head;

        while(head1) {

            if(head1->random) {

                temp->random = m1[head1->random];

            }

            temp = temp->next;

            head1 = head1->next;

        }

        return newHead;
    
    }
};