#include <iostream>
#include <algorithm>
//https://codeforces.com/problemset/problem/1926/A
int main(){
    int T;
    std::cin >> T;
    while(T--){
        std::string str;
        std::cin >> str;

        int freqA = std::count(str.begin(), str.end(), 'A');
        int freqB = std::count(str.begin(), str.end(), 'B');

        std::cout << ((freqA > freqB) ? "A\n" : "B\n");

    }
    return 0;
}