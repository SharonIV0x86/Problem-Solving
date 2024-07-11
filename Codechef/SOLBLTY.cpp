#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int X, A, B;
	    std::cin >> X >> A >> B;
	    int riseInTemp = 100 - X;
	    int risenSolubility = riseInTemp * B;
	    int maxSolubility = A + risenSolubility;
	    std::cout << maxSolubility * 10 << std::endl;
	}
    return 0;
}
