class Solution {
    public:
        void f(int index,vector<int>& candidates,int target,vector<int> &temp,vector<vector<int>> &ans) {
                
                        if(target == 0) {
                                    ans.push_back(temp);
                                                return;
                                                        }
                                                                if(index >= candidates.size() || target < 0) return;
                                                                        
                                                                                temp.push_back(candidates[index]);
                                                                                        f(index+1,candidates,target-candidates[index],temp,ans);
                                                                                                int next = index+1;
                                                                                                        while(next < candidates.size() && candidates[next] == candidates[index]) {
                                                                                                                    next++;
                                                                                                                            }
                                                                                                                                    temp.pop_back();
                                                                                                                                            f(next,candidates,target,temp,ans);
                                                                                                                                                }
                                                                                                                                                    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
                                                                                                                                                            sort(candidates.begin(),candidates.end());
                                                                                                                                                                    vector<vector<int>>ans;
                                                                                                                                                                            vector<int>temp;

                                                                                                                                                                                    f(0,candidates,target,temp,ans);

                                                                                                                                                                                            return ans;
                                                                                                                                                                                                }
                                                                                                                                                                                                };
