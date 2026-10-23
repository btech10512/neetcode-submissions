class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        int top = 0;
        int bottom = n-1;
        int left = 0;
        int right = m-1;
        vector<int>ans;
        
        // left to right
        // then top++ 
        // read right column moving down
        // right--;
        //read bottom row in reverse
        // move bottom pointer up (bottom--);
        //read left most grid
        // move the left pointer one step right (left++)
        // in case of non-square matrix 
        // check bottom and left side before moving or traversing otherwise double entry can be there

        while(left <= right && top <= bottom) {
            int i = left;
            while(i <= right) {
                ans.push_back(matrix[top][i]);
                i++;
            }
            top++;
            int k = top;
            while(k <= bottom) {
                ans.push_back(matrix[k][right]);
                k++;
            }
            right--;
            int l = right;
            if(top <= bottom) {
                while(l >= left) {
                    ans.push_back(matrix[bottom][l]);
                    l--;
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