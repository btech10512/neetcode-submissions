class Solution {
public:
    int f(int index,vector<int> &nums,int target,vector<unordered_map<int,int>> &dp) {
        if(index >= nums.size()) return target == 0?1:0;
        if(dp[index].find(target) != dp[index].end()) return dp[index][target];
        return dp[index][target] = f(index+1,nums,target - nums[index],dp) + f(index+1,nums,target+nums[index],dp);

    }
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();
        vector<unordered_map<int,int>>dp(n);
        return f(0,nums,target,dp);
    }
};
