class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int>prefixMax(n);
        vector<int>suffixMax(n);
        int maxi = 0;
        for(int i=0;i<height.size();i++) {
            maxi = max(maxi,height[i]);
            prefixMax[i] = maxi;
        }
        maxi = 0;
        for(int i=n-1;i>=0;i--) {
            maxi = max(maxi,height[i]);
            suffixMax[i] = maxi;
        }
        int ans = 0;
        for(int i=0;i<n;i++) {
            int curr = min(prefixMax[i],suffixMax[i]) - height[i];
            if(curr > 0) {
                ans += curr;
            }
        }
        return ans;
    }
};
