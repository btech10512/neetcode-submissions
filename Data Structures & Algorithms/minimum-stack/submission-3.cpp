class MinStack {
public:
    stack<int>s,mini;
    // stack<int>mini;,
    MinStack() {
        mini.push(INT_MAX);
    }
    
    void push(int val) {
        if(val <= mini.top()) {
            mini.push(val);
            s.push(val);
        }else {
            s.push(val);
        }
    }
    
    void pop() {
        if(!s.empty() && !mini.empty() && s.top() == mini.top()) {
            // s.pop();
            mini.pop();

        }
        if(!s.empty()) {
            s.pop();
        }
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return mini.top();
    }
};
