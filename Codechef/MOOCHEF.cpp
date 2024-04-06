#include <iostream>
#include <vector>
#include <algorithm>
void solve(){
    int N,l, r;
    std::cin >> N >> l >> r;
    std::vector<int> vec;
    int inp;
    int maxHap = 0;
    int minHap = 0;
    int currentHap = 0;
    for(int i = 0; i < N; i++){
        std::cin >> inp;
        vec.push_back(inp);
    }
    for(int i = 0; i < N; i++){
        if(vec[i] >= l && vec[i] <= r){
            currentHap += 1;
        }
        else{
            currentHap -= 1;
        }
        maxHap = std::max(maxHap, currentHap);
        minHap = std::min(minHap, currentHap);
    }
    std::cout << maxHap << " " << minHap << std::endl;
    
}

int main() {
    int T;
    std::cin >> T;

    while(T--){
        solve();
    }

    return 0;
}
