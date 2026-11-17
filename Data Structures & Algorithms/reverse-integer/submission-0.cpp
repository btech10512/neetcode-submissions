class Solution {
public:
    int reverse(int x) {
        string num = to_string(x);
        bool isNeg = false;
        if(num[0] == '-') {
            isNeg = true;
        }
        std::reverse(num.begin(),num.end());
        if(isNeg) {
            num.pop_back();
        }

        long long ans = stoll(num);
        if(ans > INT_MAX || ans < INT_MIN) return 0;
        if(isNeg) {
            return -1LL*ans;
        }

        return ans;
    }
};
