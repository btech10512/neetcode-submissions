class Solution {
public:
    bool isPal(string s) {
        int i=0;
        int j=s.length()-1;

        while(i < j) {
            if(s[i] != s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    int f(int start,int e,string &s,vector<vector<int>> &dp) {
        if(start < 0 || e >= s.length()) return 0;
        if(dp[start][e] != -1) return dp[start][e];
        int ans = 0;
        if(isPal(s.substr(start,e-start+1))) {
            ans = 1 + f(start-1,e+1,s,dp);
        }
        return dp[start][e] = ans;
    }
    int f1(int start, int end, string &s) {
        if(start < 0 || end >= s.length()) return 0;

        if(s[start] != s[end]) return 0;
        return 1 + f1(start-1,end+1,s);
    }
    int countSubstrings(string s) {
        // expand around approach must be applied here
        vector<vector<int>>dp(s.length(),vector<int>(s.length(),-1));
        int count = 0;
        for(int i=0;i<s.length();i++) {
            count += f1(i,i,s);
            count += f1(i,i+1,s);
        }
        return count;
    }
};
