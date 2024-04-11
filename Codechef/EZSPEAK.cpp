#include <bits/stdc++.h>

using namespace std;
//https://www.codechef.com/problems/EZSPEAK
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::string str;
        std::cin >> str;

        int consCount = 0;

        for (int i = 0; i < N; i++) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u') {
                consCount = 0;
                continue;
            }
            else {
                consCount++;
                
                if (consCount == 4)
                    break;
                    
            }


        }
        if (consCount >= 4)
        {
            std::cout << "NO\n";
        } else {
            std::cout << "YES\n";
        }
    }

    return 0;

}