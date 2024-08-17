#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n,x;
	    std::cin >> n >> x;
	    if(x % n == 0)
	        std::cout << "YES\n";
	    else 
	        std::cout << "NO\n";
	}
    return 0;
}
