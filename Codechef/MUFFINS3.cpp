#include <bits/stdc++.h>
//https://www.codechef.com/problems/MUFFINS3?tab=statement
int main() {
	int T;
	std::cin >> T;
	while(T--){
	    long long N;
	    std::cin >> N;
	    if(N == 1 || N == 2){
	        std::cout << N << std::endl;
	    }
	    else{
	        std::cout << N/2+1 << std::endl;
	    }
	}
    return 0;
}
