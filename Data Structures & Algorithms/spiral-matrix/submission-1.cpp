class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n  = matrix.size();
        int m = matrix[0].size();
        vector<int>ans;

        int top = 0;
        int left = 0;
        int right = m-1;
        int bottom = n-1;

        while(top <= bottom && left <= right) {
            int i = left;
            while(i <= right) {
                ans.push_back(matrix[top][i]);
                i++;
            }
            top++;
            int j = top;
            while(j <= bottom) {
                ans.push_back(matrix[j][right]);
                j++;
            }
            right--;
            int k = right;
            if(top <= bottom) {
                while(k >= left) {
                    ans.push_back(matrix[bottom][k]);
                    k--;
                }
                bottom--;
            }
            int x = bottom;
            if(left <= right) {
                while(x >= top) {
                    ans.push_back(matrix[x][left]);
                    x--;
                }
                left++;
            }
        }
        return ans;
    }
};
