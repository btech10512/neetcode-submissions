class Solution {
public:
    int hammingWeight(uint32_t n) {
        int m = 32;
        int count = 0;
        while(m--) {
            if(n%2 == 1) {
                count++;
            }
            n >>= 1;
        }
        return count;
    }
};
