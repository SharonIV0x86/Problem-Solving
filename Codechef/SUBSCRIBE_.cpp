#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int N , X;
	    std::cin >> N >> X;
	    int groups = std::ceil(N / 6.0);
	    if(groups <= 0){
	        std::cout << 1 * X << std::endl;
	    }
	    else {
	        std::cout << groups * X << "\n";
	    }
	}
    return 0;
}
