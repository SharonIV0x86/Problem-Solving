#include <iostream>
#include <algorithm>

int main() {
    int A, B;
    std::cin >> A >> B;
    int minAB = std::min(A, B);
    long long gcdFact = 1;
    for(int i = 1; i <= minAB; i++){
        gcdFact *= i;
    }
    std::cout << gcdFact << std::endl;
    return 0;
}
