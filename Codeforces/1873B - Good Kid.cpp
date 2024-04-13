#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
//https://codeforces.com/problemset/problem/1873/B
int main(){
    int T;
    std::cin >> T;
    while(T--){
        int N;
        std::cin >> N;
        std::vector<int> vectuh(N);

        for(int i = 0; i < N; i++){
            std::cin >> vectuh[i];
        }
        std::vector<int>::iterator result = std::min_element(vectuh.begin(), vectuh.end());
        ++*result;

        int product = std::reduce(vectuh.begin(), vectuh.end(), 1, std::multiplies<>());
        std::cout << product << std::endl;

    }
}