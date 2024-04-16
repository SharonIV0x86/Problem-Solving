#include <bits/stdc++.h>

#include <algorithm>
//https://www.codechef.com/problems/EVENTUAL
int main() {
    int testCase;
    std::cin >> testCase;
    while (testCase--) {
        int N;
        std::cin >> N;
        std::string str;
        std::cin >> str;

        bool isFound = false;
        for (int i = 0; i < str.length(); i++) {
            int count = std::count(str.begin(), str.end(), str[i]);
            if (count % 2 != 0) {
                isFound = true;
                std::cout << "NO\n";
                break;
            }
        }
        if (isFound == false) {
            std::cout << "YES\n";
        }

    }
    return 0;
}