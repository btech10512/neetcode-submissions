class Solution {
public:
    int f(int i,int j,int tx,int ty,vector<vector<int>> &dp) {

        if(i > tx || j > ty) return 0;
        if(i == tx && j == ty) return 1;
        if(dp[i][j] != -1) return dp[i][j];
        return dp[i][j] = f(i+1,j,tx,ty,dp) + f(i,j+1,tx,ty,dp);
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return f(0,0,m-1,n-1,dp);
    }
};
