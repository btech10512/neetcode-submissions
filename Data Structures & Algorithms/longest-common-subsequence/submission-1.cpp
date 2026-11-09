class Solution {
public:
    int f(int index1,int index2,const string &text1, const string &text2, vector<vector<int>> &dp) {
        if(index1 >= text1.length() || index2 >= text2.length()) return 0;
        if(dp[index1][index2] != -1) return dp[index1][index2];
        if(text1[index1] == text2[index2]) {
            return dp[index1][index2] = 1 + f(index1 + 1,index2 + 1,text1,text2,dp);
        }
        int one = f(index1 + 1,index2,text1,text2,dp);
        int two = f(index1,index2 + 1,text1,text2,dp);

        return dp[index1][index2] = max(one,two);
    }
    int longestCommonSubsequence(string text1, string text2) {
        vector<vector<int>>dp(text1.length(),vector<int>(text2.length(),-1));
        return f(0,0,text1,text2,dp);
    }
};
