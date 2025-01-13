#include <iostream>
#include <vector>
#include <map>
int main(){
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> vec(n);
        std::map<int, int> mpp;
        std::map<int, int> indexMap;
        
        for(int i = 0; i < n; i++){
            std::cin >> vec[i];
            mpp[vec[i]]++;
        }
        int score = 0;
        for(const auto& [first, second] : mpp){
            score += second / 2;
        }
        std::cout << score << "\n";
    }
    return 0;
}