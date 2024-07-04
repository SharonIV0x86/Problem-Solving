#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        if(k == 0){
            std::cout << n << std::endl;
        }else{
            std::cout << n % k << std::endl;
        }
    }
    return 0;
}

