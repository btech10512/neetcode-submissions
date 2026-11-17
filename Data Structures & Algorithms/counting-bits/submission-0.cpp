class Solution {
public:
    int countBit(int n) {
        int count = 0;
        for(int i=31;i>=0;i--) {
            count += n&1;
            n >>= 1;
        }
        return count;
    }
    vector<int> countBits(int n) {
        int count = 0;
        vector<int>ans(n+1,0);
        for(int i=1;i<=n;i++) {
            ans[i] = countBit(i);
        }
        return ans;
    }
};
