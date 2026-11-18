class Solution {
public:
    int dx[4] = {-1,1,0,0};
    int dy[4] = {0,0,-1,1};
    bool isValid(int i,int j, int n, int m) {
        return (i>=0&&i<n&&j>=0&&j<m);
    }
    bool f(int index,int i,int j,string &word, vector<vector<char>>& board) {
        if(index >= word.length()) return true;
        char c = board[i][j];
        board[i][j] = '#';
        bool isT = false;
        for(int k=0;k<4;k++) {
            int nx = i + dx[k];
            int ny = j + dy[k];
            if(isValid(nx,ny,board.size(),board[0].size()) && board[nx][ny] == word[index]) {
                if(f(index+1,nx,ny,word,board)) {
                    return true;
                }
            }
        }
        board[i][j] = c;
        return isT;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(board[i][j] == word[0] && f(1,i,j,word,board)) return true;
            }
        }
        return false;
    }
};
