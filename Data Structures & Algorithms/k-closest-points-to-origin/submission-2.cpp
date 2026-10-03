class Solution {

        public:

            struct Compare {

                bool operator()(const vector<int>& a, const vector<int>& b) {

                        int distA = a[0]*a[0] + a[1]*a[1];

                                int distB = b[0]*b[0] + b[1]*b[1];

                                 

                                         return distA < distB;

                                             }

                                             };

                                                 vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {

                                                         int n = points.size();

                                                                 priority_queue<vector<int>,vector<vector<int>>,Compare>minHeap;

                                                                        

                                                                                int i = 0;

                                                                                 

                                                                                         while(i < k) {

                                                                                                     minHeap.push(points[i]);

                                                                                                                 i++;

                                                                                                                         }

                                                                                                                          

                                                                                                                                  while(i < n) {

                                                                                                                                              int curr_dist = (points[i][0]*points[i][0] + points[i][1]*points[i][1]);

                                                                                                                                                          int max_dist = minHeap.top()[0]*minHeap.top()[0] + minHeap.top()[1]*minHeap.top()[1];

                                                                                                                                                                      if(max_dist > curr_dist) {

                                                                                                                                                                                      minHeap.pop();

                                                                                                                                                                                                      minHeap.push(points[i]);

                                                                                                                                                                                                                  }

                                                                                                                                                                                                                              i++;

                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                              vector<vector<int>>ans;

                                                                                                                                                                                                                                                      while(!minHeap.empty()) {

                                                                                                                                                                                                                                                                  ans.push_back(minHeap.top());

                                                                                                                                                                                                                                                                              minHeap.pop();

                                                                                                                                                                                                                                                                                      }

                                                                                                                                                                                                                                                                                              return ans;

                                                                                                                                                                                                                                                                                               

                                                                                                                                                                                                                                                                                                

                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                    };

