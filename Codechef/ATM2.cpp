#include <bits/stdc++.h>
#include <string>

using namespace std;
//https://www.codechef.com/problems/ATM2?tab=ide
int main() {
    int T;
    std::cin >> T;
    while(T--){
        int N, K;
        std::cin >> N >> K;
        std::string str;
        str.reserve(N);
        std::vector<int> vectuh(N);
        for(int i = 0; i < N; i++){
            std::cin >> vectuh[i];
        }
        
        for(int i = 0; i < N; i++){
            if(K - vectuh[i] >= 0){
                K -= vectuh[i];
                str.push_back('1');
            }
            else{
                str.push_back('0');
            }
        }
        std::cout << str << std::endl;
        
        
    }
    return 0;


}
