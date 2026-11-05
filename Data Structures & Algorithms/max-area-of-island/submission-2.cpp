class Solution {
public:
    int n,m;
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    bool isValid(int i,int j) {
        return (i >=0 && i < n && j >= 0 && j < m);
    }
    int dfs(int i,int j,vector<vector<int>>& grid) {
        if(!isValid(i,j) || grid[i][j] == 0) return 0;

        grid[i][j] = 0;

        int area = 1;
        
        for(int k=0;k<4;k++) {
            int n_i = i + dx[k];
            int n_j = j + dy[k];
            area += dfs(n_i,n_j,grid);
        }
        return area;
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        int maxArea = 0;
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(grid[i][j] == 1) {
                    int area = dfs(i,j,grid);
                    maxArea = max(maxArea,area);
                }
            }
        }
        return maxArea;
    }
};
