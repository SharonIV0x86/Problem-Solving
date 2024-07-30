#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        std::string str;
        std::cin >> str;
        int count1s = 0;
        int count0s = 0;
        int n = str.length();
        for (int i = 0; i < n; i++) {
            if (str[i] == '0') {
                count0s++;
            } else {
                count1s++;
            }
        }
        if (count1s == 1 && count0s == n - 1) {
            std::cout << "Yes\n";
        } else if (count0s == 1 && count1s == n - 1) {
            std::cout << "Yes\n";
        } else {
            std::cout << "No\n";
        }

    }
    return 0;
}