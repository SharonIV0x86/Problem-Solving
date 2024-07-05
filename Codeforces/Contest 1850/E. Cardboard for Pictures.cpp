#include <iostream>
#include <vector>
#include <cmath>

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        unsigned long long n, c;
        std::cin >> n >> c;
        std::vector<unsigned long long> pictures(n);
        unsigned long long runningSum = 0;
        for (int i = 0; i < n; i++) {
            std::cin >> pictures[i];
        }

        unsigned long long low = 1, high = 1e9;

        while (low <= high) {
            unsigned long long mid = low + (high - low) / 2;
            runningSum = 0;
            for (int i = 0; i < n; i++) {
                runningSum += (pictures[i] + 2 * mid) * (pictures[i] + 2 * mid);
                if (runningSum > c) { 
                    break;
                }
            }
            if (runningSum == c) {
                std::cout << mid << std::endl;
                break;
            } else if (runningSum < c) {
                low = mid + 1;
            } else {
                high = mid;
            }
        }
    }
    return 0;
}
