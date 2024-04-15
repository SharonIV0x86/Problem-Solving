#include <iostream>
 //the logic here is basically like an arithmetic progression. we just add the odd and even terms separately and compare every time.
//https://www.codechef.com/problems/CANDY123?tab=statement
int main() {
    int T;
    std::cin >> T;

    while (T--) {
        int Limak, Bob;
        std::cin >> Limak >> Bob;

        int l = 0;
        int b = 0;
        for (int i = 0;; i++) {
            if (i % 2 == 0) {
                b += i;
                if (b > Bob) {
                    std::cout << "Limak\n";
                    break;
                }
            } else {
                l += i;
                if (l > Limak) {
                    std::cout << "Bob\n";
                    break;
                }
            }
        }
    }
    return 0;
}