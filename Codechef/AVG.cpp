#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k, v;
        std::cin >> n >> k >> v;
        std::vector<int> input;
        for(int i = 0; i < n; i++){
            int x;
            std::cin >> x;
            input.push_back(x);
        }
        int sum = std::accumulate(input.begin(), input.end(), 0);
        int r = (n+k) * v;
        r -= sum;
        if(r % k == 0 && r > 0){

            std::cout << r / k << std::endl;
        }else{
            std::cout << "-1\n";
        }
        
    }
    return 0;
}