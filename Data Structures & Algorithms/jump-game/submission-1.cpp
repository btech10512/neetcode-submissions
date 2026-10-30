class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
                int maxReach = nums[0];
                        for(int i=0;i<n;i++) {
                                    if(i > maxReach) {
                                                    return false;
                                                                    maxReach = 0;
                                                                                }
                                                                                            maxReach = max(maxReach,i+nums[i]);

                                                                                                        if(i == n-1) return true;

                                                                                                                }

                                                                                                                        return false;
    }
};
