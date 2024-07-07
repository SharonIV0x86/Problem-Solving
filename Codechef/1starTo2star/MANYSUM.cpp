#include <bits/stdc++.h>

using namespace std;
//very very tricky problem no kidding.
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int L, R;
        std::cin >> L >> R;
        int diff = (R - L) + 1;
        int count = 0;
        count += diff;
        count += diff - 1;
        if(L == R){
            std::cout << "1\n";
        }else {
        std::cout << count << std::endl;
            
        }
    }
    return 0;
}