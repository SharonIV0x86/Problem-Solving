class Solution {
public:
    int largest(std::vector<std::vector<int>>&grid, int m, int n){
        int Max = grid[m][n];
        for(int i = m; i <= m + 2; i++){
            for(int j = n; j <= n+2; j++){
                Max = std::max(Max, grid[i][j]);
            }
        }
        return Max;
    }
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        int n = grid.size();
        std::vector<std::vector<int>> result(n-2, std::vector<int>(n-2, 0));

        for(int i = 0; i < n-2; i++){
            for(int j = 0; j < n-2; j++){
                result[i][j] = largest(grid, i, j);
            }
        }
        return result;
    }
};