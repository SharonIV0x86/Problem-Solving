#include <iostream>


//print a sinlge element of the pascal triangle, variant 1
long long nCr(long long n, long long r){
    long long res = 1;
    for(int i = 0; i < r; i++){
        res = res * (n -i);
        res = res / (i+1);
    }
    return res;
}

//get row variant, 2
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

//print row, variant 3
void pascalRow(int rowToPrint){
    long long ans = 1;
    for(int col = 1; col < rowToPrint; col++){
        std::cout << ans << " ";
        ans = ans * (rowToPrint - col);
        ans = ans / col;
    }
    std::cout << "\n";
}

int main(){
    pascalRow(6);

}