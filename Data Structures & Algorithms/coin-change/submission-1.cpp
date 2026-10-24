class Solution {
public:
    int f(int index,vector<int> &coins,int amount,vector<vector<int>> &dp) {
        if(amount == 0) return 0;
        if(index < 0) return INT_MAX;
        // if(amount == coins[index]) return 1;
        // if(amount < coins[index]) return INT_MAX;
        if(dp[index][amount] != -1) return dp[index][amount];
        int pick = INT_MAX;
        if(coins[index] <= amount) {
            int result = f(index,coins,amount - coins[index],dp);
            if(result != INT_MAX) {
                pick = 1 + result;
            }
        }
        int not_pick = f(index-1,coins,amount,dp);

        return dp[index][amount] = min(pick,not_pick);
    }
    int coinChange(vector<int>& coins, int amount) {
        if(amount == 0) return 0;
        int n = coins.size();
        sort(coins.begin(),coins.end());

        vector<vector<int>> dp(n, vector<int>(amount + 1, -1));
        int total_coin = f(n-1,coins,amount,dp);
        if(total_coin == INT_MAX) return -1;
        return total_coin;
    }
};
