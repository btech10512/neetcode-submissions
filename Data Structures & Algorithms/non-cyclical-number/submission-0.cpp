class Solution {
    public:
        bool f(int n,unordered_map<int,bool> &m) {
                if(m.find(n) != m.end()) return false;
                        m[n] = true;
                                // int digits = log(n)+1;

                                        vector<int>nums;

                                                while(n > 0) {
                                                            int digit = n%10;
                                                                        nums.push_back(digit);
                                                                                    n /= 10;
                                                                                            }
                                                                                                    int square = 0;
                                                                                                            for(int i:nums) {
                                                                                                                        square += i*i;
                                                                                                                                }
                                                                                                                                        if(square == 1) return true;
                                                                                                                                                return f(square,m);
                                                                                                                                                    }
                                                                                                                                                        bool isHappy(int n) {
                                                                                                                                                                unordered_map<int,bool>m;

                                                                                                                                                                        return f(n,m);
                                                                                                                                                                            }
                                                                                                                                                                            };
