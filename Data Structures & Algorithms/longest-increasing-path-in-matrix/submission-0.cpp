class Solution {
    public:
        bool isValid(int i,int j,int n,int m) {
                if(i < 0 || i >= n || j < 0 || j >= m) return false;
                        return true;
                            }

                                int f(int i,int j,vector<vector<int>>& matrix,vector<vector<int>>&visited,int currLen,int &maxLen,int prev,vector<vector<int>> &dp) {

                                        if(isValid(i,j,matrix.size(),matrix[0].size()) && matrix[i][j] > prev && !visited[i][j]) {  
                                                    if(dp[i][j] != -1) return dp[i][j];
                                                                visited[i][j] = 1;
                                                                            maxLen = max(maxLen,currLen);
                                                                                        // dp[i][j] = maxLen;
                                                                                                    int up = f(i-1,j,matrix,visited,currLen+1,maxLen,matrix[i][j],dp);
                                                                                                                int down = f(i+1,j,matrix,visited,currLen+1,maxLen,matrix[i][j],dp);
                                                                                                                            int left = f(i,j-1,matrix,visited,currLen+1,maxLen,matrix[i][j],dp);
                                                                                                                                        int right = f(i,j+1,matrix,visited,currLen+1,maxLen,matrix[i][j],dp);
                                                                                                                                                    // maxLen--;
                                                                                                                                                                visited[i][j] = 0;
                                                                                                                                                                            return dp[i][j] = 1 + max(max(left,down),max(up,right));
                                                                                                                                                                                    }
                                                                                                                                                                                            return 0;
                                                                                                                                                                                                }
                                                                                                                                                                                                    int longestIncreasingPath(vector<vector<int>>& matrix) {
                                                                                                                                                                                                            int n = matrix.size();
                                                                                                                                                                                                                    int m = matrix[0].size();
                                                                                                                                                                                                                            int maxLen = 1;
                                                                                                                                                                                                                                    vector<vector<int>>visited(n,vector<int>(m,0));
                                                                                                                                                                                                                                            vector<vector<int>>dp(n,vector<int>(m,-1));
                                                                                                                                                                                                                                                    for(int i=0;i<n;i++) {
                                                                                                                                                                                                                                                                for(int j=0;j<m;j++) {
                                                                                                                                                                                                                                                                                f(i,j,matrix,visited,1,maxLen,-1,dp);
                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                            for(int i=0;i<n;i++) {
                                                                                                                                                                                                                                                                                                                        for(int j=0;j<m;j++) {
                                                                                                                                                                                                                                                                                                                                        maxLen = max(maxLen,dp[i][j]);
                                                                                                                                                                                                                                                                                                                                                    }
                                                                                                                                                                                                                                                                                                                                                            }
                                                                                                                                                                                                                                                                                                                                                                    return maxLen;
                                                                                                                                                                                                                                                                                                                                                                        }
                                                                                                                                                                                                                                                                                                                                                                        };
