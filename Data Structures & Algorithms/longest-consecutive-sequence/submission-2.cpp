class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int>s;
        for(int i:nums) {
            s.insert(i);
        }
        int maxCount = 0;

        for(int i=0;i<nums.size();i++) {
            if(s.find(nums[i] - 1) == s.end()) {
            int curr_count = 1;
            int current = nums[i];
            while(s.find(current+1) != s.end()) {
                curr_count++;
                current += 1;
            }
            maxCount = max(maxCount,curr_count);
        }
        }
        return maxCount;
    }
};
