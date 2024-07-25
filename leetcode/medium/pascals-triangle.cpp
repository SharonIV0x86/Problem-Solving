class Solution {
public:
    std::vector<int> getRow(int row){
        int ans = 1;
        std::vector<int> retr;
        retr.push_back(1);
        for(int col = 1; col < row; col++){
            ans = ans * (row - col);
            ans = ans / col;
            retr.push_back(ans);
        }
        return retr;
    }
    vector<vector<int>> generate(int numRows) {
        std::vector<std::vector<int>> result;
        for(int i = 1; i <= numRows; i++){
            result.push_back(getRow(i));
        }
        return result;
    }
};