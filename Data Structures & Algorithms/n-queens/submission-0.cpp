class Solution {
public:
    bool isValid(int index,int s,int n,vector<string> &temp) {
        int i = index;
        int j = s;
        while(i >= 0) {
            if(temp[i--][j] == 'Q') return false;
        }
        i = index;
        while(i >=0 && j >= 0) {
            if(temp[i--][j--] == 'Q') return false;
        }
        i = index;
        j = s;
        while(i >= 0 && j < n) {
            if(temp[i--][j++] == 'Q') return false;
        }

        return true;
    }
    void f(int index,vector<string> &temp,vector<vector<string>> &ans,const int &n) {
        if(index == n) {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<n;i++) {
            if(isValid(index,i,n,temp)){
                temp[index][i] = 'Q';
                f(index+1,temp,ans,n);
                temp[index][i] = '.';
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>temp(n,string(n,'.'));

        f(0,temp,ans,n);
        return ans;
    }
};