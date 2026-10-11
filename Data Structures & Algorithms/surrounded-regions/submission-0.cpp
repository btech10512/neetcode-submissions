class Solution {
public:
    void bfs(int i,int j,vector<vector<char>>& board) {
        if(i < 0 || i >= board.size() || j < 0 || j >= board[0].size()) return;
        if(board[i][j] != 'O') return;
        board[i][j] = '#';

        bfs(i,j-1,board);
        bfs(i,j+1,board);
        bfs(i-1,j,board);
        bfs(i+1,j,board);
    }
    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();
        queue<pair<int,int>>q;

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(board[i][j] == 'O') {
                    if((i==0 || i==n-1)) {
                        q.push({i,j});
                    }
                    else if(j==0 || j==m-1) {
                        q.push({i,j});
                    }else {
                        continue;
                    }
                }
            }
        }
        while(!q.empty()) {
            int i = q.front().first;
            int j = q.front().second;
            q.pop();
            if(board[i][j] == 'O') {
                bfs(i,j,board);
            }
        }
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(board[i][j] == '#') {
                    board[i][j] = 'O';
                }else if(board[i][j] == 'O') {
                    board[i][j] = 'X';
                }
            }
        }
        return;
    }
};
