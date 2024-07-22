#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std:cin >> t;
	while(t--){
	    int n,x;
	    std::cin >> n >> x;
	    int rem = n - x;
	    
	    if(x >= n){
	        std::cout << "0\n";
	        continue ;
	    }
	    
	    if(rem % 4 == 0){
	        std::cout << rem / 4 << std::endl;
	    }else if(rem % 4 != 0){
	        std::cout << (rem / 4) + 1 << std::endl;
	    }
	}
    return 0;
}
