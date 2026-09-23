

class Solution {

public:

    int carFleet(int target, vector<int>& position, vector<int>& speed) {

            int n = speed.size();

                    if(n == 1) return 1;

                            vector<pair<int,int>>pos;

                                    for(int i=0;i<n;i++) {

                                                pos.push_back({position[i],speed[i]});

                                                        }

                                                                sort(pos.begin(),pos.end(),[](const pair<int,int> &a,const pair<int,int> &b){

                                                                            return (a.first > b.first);

                                                                                    });

                                                                                            // stack<int>s;

                                                                                                    // s.push((target-pos[0].first)/pos[0].second);

                                                                                                            int fleet = 1;

                                                                                                                    // double fleet_time = 0;

                                                                                                                            double fleet_time =

                                                                                                                                    (double)(target - pos[0].first) / pos[0].second;

                                                                                                                                           

                                                                                                                                                   for(int i=1;i<n;i++) {

                                                                                                                                                               // double earlier_time = s.top();

                                                                                                                                                                           double curr_time = (double)((target-pos[i].first))/pos[i].second;

                                                                                                                                                                                       if(curr_time > fleet_time) {

                                                                                                                                                                                                       fleet++;

                                                                                                                                                                                                                       fleet_time = curr_time;

                                                                                                                                                                                                                                   }

                                                                                                                                                                                                                                               // s.push(curr_time);

                                                                                                                                                                                                                                                       }

                                                                                                                                                                                                                                                               return fleet;

                                                                                                                                                                                                                                                                   }

                                                                                                                                                                                                                                                                   };

                                                                                                                                                                                                                                                                    

                                                                                                                                                                                                                                                                     


                                                                                                                                                                                                                                                                    

                                                                                                                                                                                                                                                    


