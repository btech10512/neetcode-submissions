class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
                priority_queue<int,vector<int>,greater<int>>p;
                        int i=0;
                                while(i < k) {
                                            p.push(nums[i]);
                                                        i++;
                                                                }
                                                                        while(i < n) {
                                                                                    if(nums[i] > p.top()) {
                                                                                                    p.pop();
                                                                                                                    p.push(nums[i]);
                                                                                                                                }
                                                                                                                                            i++;
                                                                                                                                                    }

                                                                                                                                                            
                                                                                                                                                                    return p.top();
    }
};
