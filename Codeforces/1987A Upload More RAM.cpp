#include <iostream>

int main(){
    int T;
    std::cin >> T;
    while(T--){
        int n, k;
        std::cin >> n >> k;
        std::cout << (n-1) * k + 1 << "\n";
    }
    return 0;
}