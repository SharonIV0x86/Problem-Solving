#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n, k;
        std::cin >> n >> k;
        std::vector < int > days(n);
        for (int i = 0; i < n; i++) {
            std::cin >> days[i];
        }
        bool can = true;
        int currProt = 0;
        if (k > days[0]) {
            std::cout << "NO 1\n";
            can = false;
        } else {
            for (int i = 0; i < n; i++) {
                currProt += days[i];
                if (currProt < k) {
                    std::cout << "NO " << i + 1 << "\n";
                    can = false;
                    break;
                }else{
                    currProt -= k;
                }
            }
        }
        if (can) {
            std::cout << "YES\n";
        }
    }
    return 0;
}