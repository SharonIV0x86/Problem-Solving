#include <iostream>
//https://www.codechef.com/problems/AIRLINE?tab=statement

int main() {

    int t;
    std::cin >> t;
    while (t--) {
        int a, b, c, d, e;
        std::cin >> a >> b >> c >> d >> e;
        if (a + b <= d && c <= e) {
            std::cout << "YES" << endl;
        }
        else if (a + c <= d && b <= e) {
            std::cout << "YES" << endl;
        }
        else if (b + c <= d && a <= e) {
            std::cout << "YES" << endl;
        }
        else {
            std::cout << "NO" << endl;
        }
    }

    return 0;

}