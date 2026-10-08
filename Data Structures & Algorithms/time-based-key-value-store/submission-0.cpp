class TimeMap {

    public:

        unordered_map<string,vector<pair<int,string>>>m;

            TimeMap() {

                }

                   

                       void set(string key, string value, int timestamp) {

                               m[key].push_back({timestamp,value});

                                   }

                                      

                                          string get(string key, int timestamp) {

                                                  const auto& toSearch = m[key];

                                                   

                                                           int start = 0;

                                                                   int end = toSearch.size()-1;

                                                                    

                                                                            int temp = INT_MIN;

                                                                                    while(start <= end) {

                                                                                                int mid = end - (end - start)/2;

                                                                                                            if(timestamp == toSearch[mid].first) {

                                                                                                                            return toSearch[mid].second;

                                                                                                                                        }else if(timestamp > toSearch[mid].first) {

                                                                                                                                                        temp = mid;

                                                                                                                                                                        start = mid + 1;

                                                                                                                                                                                    }else {

                                                                                                                                                                                                    end = mid-1;

                                                                                                                                                                                                                }

                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                if(temp != INT_MIN) {

                                                                                                                                                                                                                                            return toSearch[temp].second;

                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                

                                                                                                                                                                                                                                                                        return "";

                                                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                                            };

