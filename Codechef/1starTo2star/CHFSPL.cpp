#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int A, B ,C;
	    std::cin >> A >> B >> C;
	    int max1 = std::max(A + B, B + C);
	    max1 = std::max(max1, A + C);
	    std::cout << max1 << std::endl;
	}
    return 0;
}
