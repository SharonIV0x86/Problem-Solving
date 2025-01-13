#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> vectuhUWU(n);
        std::unordered_map<int , int> mpp;
        for(int i = 0; i < n; i++){
            std::cin >> vectuhUWU[i];
            mpp[vectuhUWU[i]]++;
        }
        for(const auto& [first, second] : mpp){
            if(second % 2 != 0){
                std::cout << first << std::endl;
                break;
            }
        }
    }
    return 0;
}
