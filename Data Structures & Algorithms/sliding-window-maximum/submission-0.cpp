class Solution {

    public:

        vector<int> maxSlidingWindow(vector<int>& nums, int k) {

                int n = nums.size();

                        priority_queue<pair<int,int>>pq;

                                for(int i=0;i<k;i++) {

                                            pq.push({nums[i],i});

                                                    }

                                                            vector<int>ans;

                                                                    int i = 0;

                                                                            int j = k-1;

                                                                                    while(j < n) {

                                                                                                int num = pq.top().first;

                                                                                                            int index = pq.top().second;

                                                                                                             

                                                                                                                         if(index >= i && index <= j) {

                                                                                                                                         ans.push_back(num);

                                                                                                                                                         i++;

                                                                                                                                                                         j++;

                                                                                                                                                                                         if(j < n) {

                                                                                                                                                                                                             pq.push({nums[j],j});

                                                                                                                                                                                                                             }

                                                                                                                                                                                                                                         } else {

                                                                                                                                                                                                                                                         pq.pop();

                                                                                                                                                                                                                                                                     }

                                                                                                                                                                                                                                                                             }

                                                                                                                                                                                                                                                                                     return ans;

                                                                                                                                                                                                                                                                                         }

                                                                                                                                                                                                                                                                                         };

