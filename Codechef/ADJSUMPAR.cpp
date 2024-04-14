#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/ADJSUMPAR?tab=ide
int main() {
    int T;
    std::cin >> T;
    while(T--){
        int N;
        std::cin >> N;
        std::vector<int> vectuh(N);
        int sum = 0;
        for(int i = 0; i < N; i++){
            std::cin >> vectuh[i];
            sum += vectuh[i];
        }
        if(sum % 2 == 0){
            std::cout << "YES\n";
        }
        else {
            std::cout << "NO\n";
        }
    }
    return 0;
}
