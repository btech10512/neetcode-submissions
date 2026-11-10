class Solution {
public:
    int f(int index,vector<int>& coins, int amount, vector<vector<int>> &dp) {
        if(index == coins.size()) {
            return 0;
        }
        if(amount == 0) {
            return 1;
        }
        if(dp[index][amount] != -1) return dp[index][amount];
        int take = 0;
        if(amount >= coins[index]) {
            take = f(index,coins,amount - coins[index],dp);
        }
        int dont_take = f(index+1,coins,amount,dp);
        return dp[index][amount] = take + dont_take;
    }
    int change(int amount, vector<int>& coins) {
        vector<vector<int>> dp(coins.size(),vector<int>(amount + 1, -1));
        return f(0,coins,amount,dp);
    }
};
