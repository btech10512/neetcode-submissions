class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>>ans;
        unordered_map<string,vector<string>>m;

        for(int i=0;i<strs.size();i++) {
            string cpy = strs[i];
            sort(cpy.begin(),cpy.end());
            m[cpy].push_back(strs[i]);
        }
        // for(string s:strs) {
        //     string key = s;
        //     sort(key.begin(),key.end());
        //     m[key].push_back(s);
        // }
        for(auto it:m) {
            ans.push_back(it.second);
        }
        return ans;
    }
};
