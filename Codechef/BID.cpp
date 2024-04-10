#include <bits/stdc++.h>

#include <numeric>

using namespace std;

int main() {
    int T;
    std::cin >> T;
    int N;
    int inp;

    while (T--) {
        std::vector < int > attA;
        std::vector < int > defA;
        std::vector < int > attP;
        std::vector < int > defP;
        std::cin >> N;
        for (int i = 0; i < N; i++) {
            std::cin >> inp;
            attA.push_back(inp);
        }
        for (int i = 0; i < N; i++) {
            std::cin >> inp;
            defA.push_back(inp);
        }
        for (int i = 0; i < N; i++) {
            std::cin >> inp;
            attP.push_back(inp);
        }
        for (int i = 0; i < N; i++) {
            std::cin >> inp;
            defP.push_back(inp);
        }
        int atta = std::accumulate(attA.begin(), attA.end(), 0);
        int defa = std::accumulate(defA.begin(), defA.end(), 0);
        int attp = std::accumulate(attP.begin(), attP.end(), 0);
        int defp = std::accumulate(defP.begin(), defP.end(), 0);

        if (atta > attp && defa > defp) {
            std::cout << "A\n";
        }
        else if (attp > atta && defp > defa) {
            std::cout << "P\n";
        }
        else {
            std::cout << "DRAW\n";
        }


    }
    return 0;

}