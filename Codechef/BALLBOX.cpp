#include <bits/stdc++.h>
//https://www.codechef.com/problems/BALLBOX
using namespace std;

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n, b;
        std::cin >> n >> b;
        int t = b * (b + 1) / 2;

        if (n >= t) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}