class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        unordered_map<int,int>m;

        m.insert({nums[0],0});

        for(int i=1;i<n;i++) {
            int diff = target - nums[i];
            if(m.find(diff) != m.end()) {
                return {m[diff],i};
            }else {
                m.insert({nums[i],i});
            }
        }
        return {};
    }
};
