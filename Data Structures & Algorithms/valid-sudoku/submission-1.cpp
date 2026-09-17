class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,vector<char>>col;
        unordered_map<int,vector<char>>row;
        unordered_map<int,vector<char>>cube;

        for(int i=0;i<board.size();i++) {
            for(int j=0;j<board[0].size();j++) {
                if(board[i][j] == '.') {
                    continue;
                }else {
                    // i = row number
                    // j = col number
                    int cube_number = (i/3) * 3 + (j/3); 
                    bool row_duplicate = find(row[i].begin(), row[i].end(), board[i][j]) != row[i].end();
                    bool col_duplicate = find(col[j].begin(), col[j].end(), board[i][j]) != col[j].end();
                    bool cube_duplicate = find(cube[cube_number].begin(),cube[cube_number].end(),board[i][j]) != cube[cube_number].end();
                    if(row_duplicate || col_duplicate || cube_duplicate) {
                        return false;
            
                    }else {
                        int num = board[i][j];
                        row[i].push_back(num);
                        col[j].push_back(num);
                        cube[cube_number].push_back(num);
                    }

                }
            }
        }
        return true;
    }
};
