// https://www.codechef.com/problems/GRIDBL?tab=statement

#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int rows, cols;
        std::cin >> rows >> cols;
        if (rows == 1 && cols == 1) {
            std::cout << "1\n";
        }
        else if (rows % 2 == 0 && cols % 2 == 0) {
            std::cout << "0\n";
        }
        else if (rows % 2 == 0 && cols % 2 != 0) {
            std::cout << rows << std::endl;
        }
        else if (rows % 2 != 0 && cols % 2 == 0) {
            std::cout << cols << std::endl;
        }
        else {
            std::cout << ((rows * 1) + (cols * 1)) - 1 << std::endl;
        }
    }

    return 0;
}