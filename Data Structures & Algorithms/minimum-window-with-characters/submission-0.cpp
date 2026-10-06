class Solution {
public:
    string minWindow(string s, string t) {
        int n = s.length();

                unordered_map<char,int>m;

                        int count = 0;

                                int minLength = INT_MAX;

                                        int startIndex = 0;

                                                for(int i=0;i<t.length();i++) {

                                                            m[t[i]]++;

                                                                    }

                                                                     

                                                                             int l = 0,r = 0;

                                                                              

                                                                                      while(r < n) {

                                                                                                  m[s[r]]--;

                                                                                                              if(m[s[r]] >= 0) {

                                                                                                                              count++;

                                                                                                                                          }

                                                                                                                                                      while(count == t.length()) {

                                                                                                                                                                      if(r-l+1 < minLength) {

                                                                                                                                                                                          minLength = r-l+1;

                                                                                                                                                                                                              startIndex = l;

                                                                                                                                                                                                                              }

                                                                                                                                                                                                                                              // minLength = min(minLength,r-l+1);

                                                                                                                                                                                                                                                              // startIndex = l;

                                                                                                                                                                                                                                                                              m[s[l]]++;

                                                                                                                                                                                                                                                                                              if(m[s[l]] > 0) {

                                                                                                                                                                                                                                                                                                                  count--;

                                                                                                                                                                                                                                                                                                                                  }

                                                                                                                                                                                                                                                                                                                                                  l++;

                                                                                                                                                                                                                                                                                                                                                              }

                                                                                                                                                                                                                                                                                                                                                                          r++;

                                                                                                                                                                                                                                                                                                                                                                                  }

                                                                                                                                                                                                                                                                                                                                                                                          if(minLength == INT_MAX) return "";

                                                                                                                                                                                                                                                                                                                                                                                                  return s.substr(startIndex,minLength);
    }
};
