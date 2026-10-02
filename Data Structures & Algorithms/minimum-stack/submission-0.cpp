class MinStack {
public:
    stack<pair<int,int>>s;
    // int mini = INT_MAX;
    MinStack() {

    }
    
    void push(int val) {
        if(!s.empty()) {
            int mini = min(val,s.top().second);
            s.push({val,mini});
        }else {
            s.push({val,val});
        }

    }
    
    void pop() {
        s.pop();
    }
    
    int top() {
        return s.top().first;
    }
    
    int getMin() {
        return s.top().second;
    }
};
