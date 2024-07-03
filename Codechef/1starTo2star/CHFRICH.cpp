#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
	std::cin >> t;
	while(t--){
	    int A, B, X;
	    std::cin >> A >> B >> X;
	    std::cout << (B - A) / X << std::endl;
	}
    return 0;
}
