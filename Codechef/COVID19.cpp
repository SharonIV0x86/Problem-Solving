#include <bits/stdc++.h>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector < int > vectuh(n);
        for (int i = 0; i < n; i++)
            std::cin >> vectuh[i];

        int bestCase = 1;
        int worstCase = 1;
        int max = INT_MIN;
        int min = INT_MAX;
        for (int i = 0; i < n - 1; i++) {
            if (std::abs(vectuh[i] - vectuh[i + 1]) <= 2) {
                bestCase++;
                worstCase++;
            } else {
                max = std::max(max, worstCase);
                min = std::min(min, bestCase);
                bestCase = 1;
                worstCase = 1;
            }
        }
        max = std::max(max, worstCase);
        min = std::min(min, bestCase);
        std::cout << min << " " << max << "\n";
    }
    return 0;
}