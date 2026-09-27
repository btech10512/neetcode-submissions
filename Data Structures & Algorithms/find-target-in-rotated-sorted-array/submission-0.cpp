class Solution {
public:
    int bs(int left,int right,vector<int> &nums,int &target) {
        while(left <= right) {
            int mid = right - (right-left)/2;
            if(target < nums[mid]) {
                right = mid-1;
            }else if(target > nums[mid]) {
                left = mid+1;
            }else {
                return mid;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int peak = -1;

        for(int i=0;i<n-1;i++) {
            if(nums[i] > nums[i+1]) {
                peak = i;
            }
        }
        int one = bs(0,peak,nums,target);
        int two = bs(peak+1,n-1,nums,target);

        if(one != -1) return one;

        return two;
    }
};
