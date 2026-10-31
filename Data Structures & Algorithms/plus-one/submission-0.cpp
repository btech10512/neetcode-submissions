class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
                vector<int>ans;
                        int carry = 0;

                                int i = n-1;

                                        while(i >= 0) {
                                                    int sum = digits[i] + carry;
                                                                if(i == n-1) {
                                                                                sum += 1;
                                                                                            }
                                                                                                        int digit = sum%10;
                                                                                                                    carry = sum/10;
                                                                                                                                ans.push_back(digit);
                                                                                                                                            i--;
                                                                                                                                                    }
                                                                                                                                                            if(carry != 0) {
                                                                                                                                                                        ans.push_back(carry);
                                                                                                                                                                                }

                                                                                                                                                                                        reverse(ans.begin(),ans.end());
                                                                                                                                                                                                return ans;
    }
};
