#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        float A, B, C, P, Q, R;
        std::cin >> A >> B >> C >> P >> Q >> R;
        float totalVotes = A + B + C;
        float requiredVotes = (P + Q + R) / 2.0;
        if (P + B + C > requiredVotes || A + Q + C > requiredVotes || A + B + R > requiredVotes || A + B + C > requiredVotes) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}