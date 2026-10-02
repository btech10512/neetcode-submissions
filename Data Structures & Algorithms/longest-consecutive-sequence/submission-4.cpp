class Solution {

        public:

            int longestConsecutive(vector<int>& nums) {

                    int n = nums.size();

                            if(n == 0) return 0;

                                    unordered_set<int>s;

                                     

                                             for(int i:nums) {

                                                        s.insert(i);

                                                                }

                                                                 

                                                                         int i = 0;

                                                                                 int ans = 1;

                                                                                         while(i < n) {

                                                                                                     int temp = 1;

                                                                                                                 if(s.find(nums[i]-1) == s.end()) {

                                                                                                                                 // this means this is the starting of the sequence

                                                                                                                                                 // so we have to start incrementing from this

                                                                                                                                                                 int num = nums[i]+1;

                                                                                                                                                                                 while(s.find(num) != s.end()) {

                                                                                                                                                                                                     temp++;

                                                                                                                                                                                                                         num++;

                                                                                                                                                                                                                                         }

                                                                                                                                                                                                                                          

                                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                                                  ans = max(ans,temp);

                                                                                                                                                                                                                                                                              i++;

                                                                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                                                                              return ans;

                                                                                                                                                                                                                                                                                                  }

                                                                                                                                                                                                                                                                                                  };
