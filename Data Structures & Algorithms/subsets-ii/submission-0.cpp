class Solution {
public:
    void f(int index,vector<int>& nums,vector<int> &temp,vector<vector<int>> &ans) {
        if(index == nums.size()) {
            ans.push_back(temp);
            return;
        }
        if(index > nums.size()) return;

        // pick 

        temp.push_back(nums[index]);

        f(index+1,nums,temp,ans);

        int i = index+1;

        while(i < nums.size() && nums[i] == nums[index]) {
            i++;
        }
        temp.pop_back();
        f(i,nums,temp,ans);

    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        vector<vector<int>>ans;
        vector<int>temp;
        f(0,nums,temp,ans);
        return ans;
    }
};
