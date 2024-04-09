#include <bits/stdc++.h>
using namespace std;

int main() {
    int D1, D2;
    int R1, R2;
    
    std::cin >> R1 >> R2;
    std::cin >> D1 >> D2;
    
    if((R1 + D1) > (R2 + D2))
        std::cout << "Dominater\n";
    else
        std::cout << "Everule\n";

}
