#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int A, B, P, Q;
        std::cin >> A >> B >> P >> Q;
        if (A == P && B == Q) {
            std::cout << "0\n";
        }
        else if ((A + B) % 2 == 0 && (P + Q) % 2 == 0 || (A + B) % 2 != 0 && (P + Q) % 2 != 0) {
            std::cout << "2\n";
        } else {
            std::cout << "1\n";
        }
    }
    return 0;
}