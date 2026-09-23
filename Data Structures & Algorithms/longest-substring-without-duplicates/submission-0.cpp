class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if(n == 0 || n == 1) return n;

        unordered_set<char>st;
        int i = 0;
        int j = 0;
        int maxCount = 0;
        // st.insert(s[i]);
        while(j < n) {
            if(st.find(s[j]) == st.end()) {
                st.insert(s[j]);
                j++;
                maxCount = max(j-i,maxCount);
            }else {
                st.erase(s[i]);
                i++;
            }
        }
        return maxCount;
    }
};
