class Node{
        public:
            Node* children[26];
                bool isEndOfWord;
                    Node() {
                            isEndOfWord = false;
                                    for(int i=0;i<26;i++) {
                                                children[i] = NULL;
                                                        }
                                                            }
                                                            };
                                                            class PrefixTree {
                                                            public:
                                                                Node* root;
                                                                    PrefixTree() {
                                                                            root = new Node();
                                                                                }
                                                                                    
                                                                                        void insert(string word) {
                                                                                                Node* curr = root;
                                                                                                        for(char c:word) {
                                                                                                                    int index = c-'a';
                                                                                                                                if(!curr->children[index]) {
                                                                                                                                                curr->children[index] = new Node();
                                                                                                                                                            }
                                                                                                                                                                        curr = curr->children[index];
                                                                                                                                                                                }
                                                                                                                                                                                        curr->isEndOfWord = true;
                                                                                                                                                                                            }
                                                                                                                                                                                                
                                                                                                                                                                                                    bool search(string word) {
                                                                                                                                                                                                            Node* curr = root;

                                                                                                                                                                                                                    for(char c: word) {
                                                                                                                                                                                                                                int index = c-'a';
                                                                                                                                                                                                                                            if(!curr->children[index]) {
                                                                                                                                                                                                                                                            return false;
                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                    curr = curr->children[index];
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                    return curr->isEndOfWord;
                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                            
                                                                                                                                                                                                                                                                                                                bool startsWith(string prefix) {
                                                                                                                                                                                                                                                                                                                        Node* curr = root;

                                                                                                                                                                                                                                                                                                                                for(char c: prefix) {
                                                                                                                                                                                                                                                                                                                                            int index = c-'a';
                                                                                                                                                                                                                                                                                                                                                        if(!curr->children[index]) {
                                                                                                                                                                                                                                                                                                                                                                        return false;
                                                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                                                                curr = curr->children[index];
                                                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                                                                return true;
                                                                                                                                                                                                                                                                                                                                                                                                                        
                                                                                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                                                                            };
