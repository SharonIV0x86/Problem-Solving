#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int N;
	    std::cin >> N;
	    int sum = N*(N+1) /2;
	    if(sum %2 == 0)
	        std::cout << N << std::endl;
	    else
	        std::cout << N- 1 << std::endl;
	}
    return 0;
}
