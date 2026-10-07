class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();

         

                 stack<int>s;

                         vector<int>nextSmaller(n,n);

                                 vector<int>prevSmaller(n,-1);

                                         // This is for the nextSmaller Element

                                                 for(int i=n-1;i>=0;i--) {

                                                             while(!s.empty() && heights[s.top()] >= heights[i]) {

                                                                             s.pop();

                                                                                         }

                                                                                                     if(!s.empty()) {

                                                                                                                     nextSmaller[i] = s.top();

                                                                                                                                 }

                                                                                                                                             s.push(i);

                                                                                                                                                     }

                                                                                                                                                             // Similarly we have to do it for prev Smaller element's index

                                                                                                                                                                     s = stack<int>();

                                                                                                                                                                             for(int i=0;i<n;i++) {

                                                                                                                                                                                         while(!s.empty() && heights[s.top()] >= heights[i]) {

                                                                                                                                                                                                         s.pop();

                                                                                                                                                                                                                     }

                                                                                                                                                                                                                                 if(!s.empty()) {

                                                                                                                                                                                                                                                 prevSmaller[i] = s.top();

                                                                                                                                                                                                                                                             }

                                                                                                                                                                                                                                                                         s.push(i);

                                                                                                                                                                                                                                                                                 }

                                                                                                                                                                                                                                                                                  

                                                                                                                                                                                                                                                                                          int maxi = INT_MIN;

                                                                                                                                                                                                                                                                                           

                                                                                                                                                                                                                                                                                                   for(int i=0;i<n;i++) {

                                                                                                                                                                                                                                                                                                               maxi = max(maxi,(nextSmaller[i] - prevSmaller[i]-1)*heights[i]);

                                                                                                                                                                                                                                                                                                                       }

                                                                                                                                                                                                                                                                                                                               return maxi;
    }
};
