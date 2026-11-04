class Solution {
public:
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int,int>>q;
        int fresh = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 2) {
                    q.push({i,j});
                }
                if(grid[i][j] == 1) {
                    fresh++;
                }
            }
        }
        if(fresh == 0) return 0;
        int time = 0;
        while(!q.empty()) {
            int size = q.size();
            bool rotted = false;
            for(int s=0;s<size;s++) {
                auto [i,j] = q.front();
                q.pop();
                for(int k=0;k<4;k++) {
                    int n_i = i + dx[k];
                    int n_j = j + dy[k];
                    if(n_i < 0 || n_i>= n || n_j < 0 || n_j >= m) {
                        continue;
                    }   
                    if(grid[n_i][n_j] != 1) continue;
                    grid[n_i][n_j] = 2;
                    q.push({n_i,n_j});
                    fresh--;
                    rotted = true;
                }
            }
            if(rotted) {
                time++;
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 1) return -1;
            }
        }
        return fresh == 0?time:-1;
    }
};
