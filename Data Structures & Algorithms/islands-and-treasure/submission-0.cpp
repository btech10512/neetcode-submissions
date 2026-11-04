class Solution {
public:
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    bool isValid(int i,int j,int n,int m) {
        return (i >= 0 && i < n && j >=0 && j < m);
    }
    void islandsAndTreasure(vector<vector<int>>& grid) {
        queue<pair<int,int>>q;
        int n = grid.size();
        int m = grid[0].size();
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 0) {
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()) {
            auto [i,j] = q.front();
            q.pop();
            for(int k=0;k<4;k++) {
                int n_i = i + dx[k];
                int n_j = j + dy[k];

                if(n_i < 0 || n_i >= n || n_j < 0 || n_j >= m) {
                    continue;
                }
                if(grid[n_i][n_j] != INT_MAX) {
                    continue;
                }
                grid[n_i][n_j] = min(grid[n_i][n_j],grid[i][j]+1);
                q.push({n_i,n_j});
            }
        }
        return;
    }
};
