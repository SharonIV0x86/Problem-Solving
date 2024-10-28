#include <iostream>
#include <vector>

int main(){
    std::vector<std::vector<int>> vec(5, std::vector<int>(5));

    int i1, j1;
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            std::cin >> vec[i][j];{
                if(vec[i][j] == 1){
                    i1 = i;
                    j1 = j;
                }
            }
        }
    }
    int index = std::abs(2 - i1) + std::abs(2 - j1);
    std::cout << index << "\n";
    return 0;
}