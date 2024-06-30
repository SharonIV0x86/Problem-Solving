class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for(int i = 0; i < n; i++){
            for(int j = i+1; j < n; j++){
                std::swap(matrix[i][j], matrix[j][i]);
            }
        }
        for(auto &rows: matrix){
            std::reverse(rows.begin(), rows.end());
        }
    }
};