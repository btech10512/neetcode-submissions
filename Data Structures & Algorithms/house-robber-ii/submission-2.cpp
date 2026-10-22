class Solution {
public:
    int f(int index,vector<int> &nums,vector<int> &dp,int last) {
        if(index > last) return 0;
        if(dp[index] != -1) return dp[index];
        
        int pick = nums[index] + f(index+2,nums,dp,last);
        int not_pick = f(index+1,nums,dp,last);

        return dp[index] = max(pick,not_pick);


    }
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        vector<int>dp(n+1,-1);
        int ans1 = f(0,nums,dp,n-2);
        vector<int>dp2(n+1,-1);
        int ans2 = f(1,nums,dp2,n-1);
        return max(ans1,ans2);
    }
};
