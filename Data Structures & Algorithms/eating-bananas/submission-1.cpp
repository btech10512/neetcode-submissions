class Solution {
public:
    bool f(vector<int>& piles, int &h,int mid) {
        int total = 0;
        for(int i=0;i<piles.size();i++) {
            if(piles[i]%mid == 0) {
                total += piles[i]/mid;
            }else {
                total += (piles[i]/mid) + 1;
            }
        }
        return (total <= h);
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        // so every number from 1 to N can be the possible answer
        // so we have to make answer from 1 till N increasing 1 each time
        
        // since h >= piles.length() so the greatest we can eat is max_element in pile[i]
        // so we do binary search on min element to max element and this is out search space
        int n = piles.size();
        // int left = *min_element(piles.begin(),piles.end());
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());
        int ans = 0;
        while(left <= right) {
            int mid = right - (right-left)/2;
            if(f(piles,h,mid)) {
                ans = mid;
                right = mid-1;
            }else {
                left = mid+1;
            }
        }
        return ans;
    }
};
