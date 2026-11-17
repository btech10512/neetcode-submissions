class Solution {
public:
    int getSum(int a, int b) {
        int carry = 0;
        int ans = 0;
        for(int i=0;i<32;i++) {
            int first = a&1;
            int second = b&1;
            a >>= 1;
            b >>= 1;
            if(first == 1 && second == 1) {
                if(carry == 1) {
                    ans |= (1 << i);
                }
                carry = 1;
            }else if(first == 1 || second == 1){
                if(carry == 1) {
                    carry = 1;
                }else {
                    ans |= (1 << i);
                    carry = 0;
                }
            }else {
                if(carry == 1) {
                    ans |= (1 << i);
                }
                carry = 0;
            }

        }
        return ans;
    }
};
