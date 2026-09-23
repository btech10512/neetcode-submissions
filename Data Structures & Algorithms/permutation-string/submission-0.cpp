class Solution {

    public:

        bool checkInclusion(string s1, string s2) {

                int n = s2.length();

                        int window = s1.length();

                                if(window > s2.length()) return false;

                                 

                                         unordered_map<char,int>m;

                                                 unordered_map<char,int>m2 = m;

                                                  

                                                          // map frequency for key

                                                                  for(char c:s1) {

                                                                              m[c]++;

                                                                                      }

                                                                                              // Initial map frequency

                                                                                                      for(int i=0;i<window;i++) {

                                                                                                                  m2[s2[i]]++;

                                                                                                                          }

                                                                                                                           

                                                                                                                                   // if(m2 == m) return true;

                                                                                                                                    

                                                                                                                                            int left = 0;

                                                                                                                                                    int right = window;

                                                                                                                                                            // while(right < n) {

                                                                                                                                                                    // }

                                                                                                                                                                            while(right < n) {

                                                                                                                                                                                        if(m2 == m) return true;

                                                                                                                                                                                                    m2[s2[left]]--;

                                                                                                                                                                                                                if(m2[s2[left]] == 0) {

                                                                                                                                                                                                                                m2.erase(s2[left]);

                                                                                                                                                                                                                                            }

                                                                                                                                                                                                                                                        left++;

                                                                                                                                                                                                                                                                    m2[s2[right]]++;

                                                                                                                                                                                                                                                                                right++;

                                                                                                                                                                                                                                                                                        }

                                                                                                                                                                                                                                                                                                return (m2 == m);  

                                                                                                                                                                                                                                                                                                    }

                                                                                                                                                                                                                                                                                                    };

