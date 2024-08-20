#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n,x;
        std::cin >> n >> x;
        if(n == x){
            std::cout << "0\n";
        }else if(x <= n/2){
            std::cout << x << "\n";
        }else {
            std::cout << n - x << "\n";
        }
    }
    return 0;
}
