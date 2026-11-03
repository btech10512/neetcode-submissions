class Solution {
public:
    void f(int index,string &digits,string &temp,unordered_map<char,string> &m,vector<string> &ans) {
        if(index == digits.size()) {
            if(temp == "") return;
            ans.push_back(temp);
            return;
        }
        char key = digits[index];
        string alpha = m[key];

        for(int i=0;i<alpha.size();i++) {
            temp.push_back(alpha[i]);
            f(index+1,digits,temp,m,ans);
            temp.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        unordered_map<char,string>m = {
            {'2', "abc"},
            {'3', "def"},
            {'4', "ghi"},
            {'5', "jkl"},
            {'6', "mno"},
            {'7', "pqrs"},
            {'8', "tuv"},
            {'9', "wxyz"}
        };

        vector<string>ans;
        string temp = "";

        f(0,digits,temp,m,ans);

        return ans;
    }
};
