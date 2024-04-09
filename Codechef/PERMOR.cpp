#include <bits/stdc++.h>

using namespace std;

int main() {
    int T;
    std::cin >> T;
    while (T--) {
        int n;
        std::cin >> n;
        std::vector < int > vectuh;
        for (int i = n; i >= 1; i--) {
            std::cout << i << " ";
        }
        std::cout << "\n";
    }
    return 0;
}

/*
https://www.codechef.com/viewsolution/1029219796
the Bitwise OR of 2 numbers is always greater than or equal to those numbers hence by printing the permutation in reverse the conditions is satisfied.
Examples
Line 1

for N=5; 5 4 3 2 1 is the permutation. 5|4=5

4|3 =7

3|2=3

hence no Ai==Ai-1|Ai-2 for 3<=i<=N*/