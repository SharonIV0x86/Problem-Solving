#include <bits/stdc++.h>

using namespace std;
#include <string>

//https://www.codechef.com/problems/ZOOZ?tab=ide
int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int N;
        std::cin >> N;
        std::string str[N];

        if (N % 2 == 0) {
            str[0] = "1";
            str[N - 1] = "1";
            for (int i = 1; i < N - 1; i++) {
                str[i] = "0";
            }
        }
        else {
            for (int i = 0; i < N / 2; i++) {
                str[i] = "0";
            }
            for (int i = N / 2; i < N; i++) {
                str[i] = "0";
            }
            str[N / 2] = "1";
        }
        
        for(int i = 0; i < N; i++){
            std::cout << str[i];
        }
        std::cout << std::endl;
        
        
    }

}