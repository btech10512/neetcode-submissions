class Solution {
public:
    
    bool st(string s) {
        int num  = stoi(s);
        if(s.length() == 2 && num < 10) return false;
        if(num == 0) return false;
        if(num <= 26 && num >= 1) return true;
        
        return false;
    }
    int f(int index,string &s,vector<int> &dp) {
        if(index >= s.length()) return 1;
        if(dp[index] != -1) return dp[index];
        int one = 0;
        if(s[index] != '0') {
            one = f(index + 1,s,dp);
        }
        int two = 0;
        if(index < s.length()-1 && st(s.substr(index,2))) {
            two = f(index+2,s,dp);
        }

        return dp[index] = one + two;

    }
    int numDecodings(string s) {
        if(s[0] == '0') return 0;
        vector<int>dp(s.size(),-1);
        return f(0,s,dp);
    }
};
