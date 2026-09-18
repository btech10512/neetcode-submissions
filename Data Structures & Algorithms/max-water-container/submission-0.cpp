class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int maxi = min(heights[0],heights[n-1])*(n-1);
        int i = 0;
        int j = n-1;

        while(i < j) {
            int curr = min(heights[i],heights[j])*(j-i);
            maxi = max(maxi,curr);
            if(heights[i] < heights[j]) {
                i++;
            }else {
                j--;
            }
        }
        return maxi;
    }
};
