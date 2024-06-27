#include <iostream>
//https://www.codechef.com/problems/CRICRANK?tab=statement
int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int r1, w1, c1;
        std::cin >> r1 >> w1 >> c1;
        int r2, w2, c2;
        std::cin >> r2 >> w2 >> c2;
        if ((r1 > r2)&&(c1 > c2)||(w1 > w2)&&(r1 > r2)||(c1 > c2)&&(w1 > w2))
        {
            std::cout << "A" << std::endl;
        }
        else
        {
            std::cout << "B" << std::endl;
        }
    }

    return 0;

}