#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int A, B;
        std::cin >> A >> B;

        if ((A % 2 != 0 && B % 2 != 0) || (A == 1 || B == 1)) {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }
    return 0;
}