class Solution {

public:

    void f(stack<int> &s,string &op) {

        int second = s.top();

        s.pop();

        int first = s.top();

        s.pop();

        if(op == "+") {

            s.push(first+second);

        }else if(op == "-") {

            s.push(first - second);

        }else if(op == "*") {

            s.push(first*second);

        }else {

           

            s.push(first/second);

            

        }

        return;

    }

    int evalRPN(vector<string>& tokens) {

        int n = tokens.size();

        stack<int>s;

        for(int i=0;i<n;i++) {

            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "*" || tokens[i] == "/") {

                f(s,tokens[i]);

            } else {

                s.push(stoi(tokens[i]));

            }

        }

 

        return s.top();

    }
};