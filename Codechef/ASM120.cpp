#include <bits/stdc++.h>
//https://www.codechef.com/problems/ASM120?tab=statement
long long gcd(long long a, long long b) {
    if (b == 0) {
        return a;
    }
    else {
        return gcd(b, a % b);
    }
}

int main() {
    int t;
    std::cin >> t;
    while (t--) {
        long long x, y;
        std::cin >> x >> y;
        std::cout << gcd(x, y) << std::endl;
    }

    return 0;

}