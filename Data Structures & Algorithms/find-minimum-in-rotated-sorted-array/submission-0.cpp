class Solution {
public:
    int findMin(vector<int> &nums) {
        int n = nums.size();

        int left = 0;
        int right = n-1;
        while(left < right) {
            int mid = left + (right-left)/2;
            // we have to find the first elment of the right half of the array
            // if(nums[mid] >= nums[left] && nums[mid] >= nums[right]) {
            //     mid = right+1;
            // }
            // Case 1 = the mid is in the required index
            if(nums[mid] > nums[right]) {
                left = mid+1;
            }else {
                right = mid;
            }
        }
        return nums[left];
    }
};
