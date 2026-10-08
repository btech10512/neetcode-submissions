class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int n = matrix.size();

                int m = matrix[0].size();

                 

                         int start = 0;

                                 int end = n*m-1;

                                  

                                          while(start <= end) {

                                                      int mid = end - (end - start)/2;

                                                       

                                                                   int i = mid/m;

                                                                               int j = mid%m;

                                                                                

                                                                                            if(target == matrix[i][j]) {

                                                                                                            return true;

                                                                                                                        }else if(target > matrix[i][j]) {

                                                                                                                                        start = mid+1;

                                                                                                                                                    }else {

                                                                                                                                                                    end = mid-1;

                                                                                                                                                                                }

                                                                                                                                                                                        }

                                                                                                                                                                                                return false;
    }
};
