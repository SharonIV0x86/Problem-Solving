#include <vector>
#include <string>
#include <algorithm>
#include <iostream>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        std::vector<std::string> grid(8);
        std::string answer;
        for (int i = 0; i < 8; i++) {
            std::cin >> grid[i];
            for (char ch : grid[i]) {
                if (ch != '.') {
                    answer += ch;
                }
            }
        }
        std::cout << answer << "\n";
    }
    return 0;
}
