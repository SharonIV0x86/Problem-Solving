class Solution {
public:
    void setValues(vector<vector<int>>&matrix, int row, int col){
        long long  tempRow = row;
        long long  tempCol = col;
        long long  m = matrix.size();
        long long n = matrix[0].size();
        for(int i = 0; i < n; i++){
            if(matrix[row][i] != 0){
            matrix[row][i] = -1189;//-1 doesnt work, as negative values can be there 

            }
        }
        for(int i = 0; i < m; i++){
            if(matrix[i][col] != 0){

            matrix[i][col] = -1189;
            }
        }

    }

    void setZeroes(vector<vector<int>>& matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == 0){
                setValues(matrix, i, j);

                }
            }
        }
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(matrix[i][j] == -1189){
                    matrix[i][j] = 0;
                }
            }
        }
    }
};


