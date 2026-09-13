class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int>s;
        int i=1;
        for(int num : nums) {
            s.insert(num);
            if(s.size() < i++) {
                return true;
            }
        }
        return false;
    }
};