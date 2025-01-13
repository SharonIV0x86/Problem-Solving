#include <iostream>
#include <vector>
#include <numeric>
#include <cmath>

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long n;
        std::cin >> n;
        std::vector<long long> vectuh(n);
        
        for (long long i = 0; i < n; i++)
            std::cin >> vectuh[i];

        long long sum = std::accumulate(vectuh.begin(), vectuh.end(), 0LL);

        long long s = sqrt(sum);
        if (s * s == sum) {
            std::cout << "YES\n";
        } else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
