class Solution {
public:
    int f(int index,vector<int> &nums,vector<int> &dp) {
        if(index >= nums.size()) {
            return 0;
        }
        if(dp[index] != -1) return dp[index];
        int pick = nums[index] + f(index+2,nums,dp);
        int not_pick = f(index+1,nums,dp);

        return dp[index] = max(pick,not_pick);
    }   
    int rob(vector<int>& nums) {
        int n = nums.size();
        vector<int>dp(n+1,-1);
        return f(0,nums,dp);
    }

    
};
