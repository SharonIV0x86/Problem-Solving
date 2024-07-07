#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    std::cin >> T;
    while(T--){
        int A, B, C, D, K;
        std::cin >> A >> B >> C >> D >>K;
        int diff = std::abs(A - C) + std::abs(B - D);
        int remSteps = K - diff;
        bool res = false;
        
        if(remSteps == 0){
            res = true;
        }
        else if(K > diff && remSteps % 2== 0){
            res = true;
        }
        
        if(res){
            std::cout << "YES\n";
        }else{
            std::cout << "NO\n";
        }
    }

}
