class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int v = 0;
        int n = nums.size();
        for(int i=0;i<=n;i++) {
            v ^= i;
        }
        for(int i=0;i<n;i++) {
            v ^= nums[i];
        }
        return v;
    }
};
