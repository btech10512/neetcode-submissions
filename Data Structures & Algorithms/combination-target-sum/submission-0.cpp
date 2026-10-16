class Solution {
    public:
        void f(int index,int target,vector<int> &nums,vector<int> &temp,vector<vector<int>> &ans,int &n) {
                if(target == 0) {
                            ans.push_back(temp);
                                        return;
                                                }
                                                        if(index >= n) return;

                                                                if(target < 0) return;
                                                                        temp.push_back(nums[index]);
                                                                                f(index,target-nums[index],nums,temp,ans,n);
                                                                                        temp.pop_back();
                                                                                                f(index+1,target,nums,temp,ans,n);
                                                                                                    }
                                                                                                        vector<vector<int>> combinationSum(vector<int>& nums, int target) {
                                                                                                                int n = nums.size();
                                                                                                                        vector<vector<int>>ans;
                                                                                                                                vector<int>temp;
                                                                                                                                        f(0,target,nums,temp,ans,n);

                                                                                                                                                return ans;
                                                                                                                                                    }
                                                                                                                                                    };
