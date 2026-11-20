/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;
    Node() {
        val = 0;
        neighbors = vector<Node*>();
    }
    Node(int _val) {
        val = _val;
        neighbors = vector<Node*>();
    }
    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/

class Solution {
    public:
        Node* f(Node* node,unordered_map<Node*,Node*> &m) {
                // base case is not configured yet
                        if(m.find(node) != m.end()) return m[node];
                                if(node == NULL) return NULL;
                                        int data = node->val;
                                                // vector<Node*>nei;
                                                        // if node is already present, no need to create a new one and only update the neighbour list[] by returning the node's address and not NULL
                                                                Node* newNode = new Node(data);
                                                                        m[node] = newNode;
                                                                                for(int i=0;i<node->neighbors.size();i++) {
                                                                                            newNode->neighbors.push_back(f(node->neighbors[i],m));
                                                                                                    }
                                                                                                            return newNode;
                                                                                                                }
                                                                                                                    Node* cloneGraph(Node* node) {
                                                                                                                            unordered_map<Node*,Node*>m;
                                                                                                                                    return f(node,m);
                                                                                                                                        }
                                                                                                                                        };

