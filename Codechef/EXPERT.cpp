#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/EXPERT
int main() {
    int t;
    std::cin >> t;
    while(t--){
        float X, Y;
        std::cin >> X >> Y;
        if(Y >= X/2){
            std::cout << "YES\n";
        }else{
            std::cout << "NO\n";
        }
    }
}
