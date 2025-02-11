#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string S1;
        std::string S2;
        std::cin >> S1 >> S2;
        int n = S1.length();
        int samech = 0;
        int maxdif = 0;
        for (int i = 0; i < S1.length(); i++) {
            if (S1[i] == '?' || S2[i] == '?') {
                samech++;
                maxdif++;
            } else if (S1[i] == S2[i]) {
                samech++;
            } else if (S1[i] != '?' && S2[i] != '?') {
                maxdif++;

            }
        }
        std::cout << (n - samech) << " " << maxdif << "\n";
    }
    return 0;
}