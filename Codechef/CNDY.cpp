#include <bits/stdc++.h>

#include <algorithm>
//https://www.codechef.com/problems/CNDY
using namespace std;

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        long long N;
        std::cin >> N;
        N = 2 * N;
        std::vector < int > candiesVector(N);
        for (long long i = 0; i < N; i++)
            std::cin >> candiesVector[i];

        bool hasNO = false;

        for (const auto ae: candiesVector) {
            int count = std::count(candiesVector.begin(), candiesVector.end(), ae);
            if (count >= 3) {
                std::cout << "NO\n";
                hasNO = true;
                break;
            }
        }
        
        if(!hasNO){
            std::cout << "YES\n";
        }
        
    }
    

}