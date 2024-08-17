#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n,x,y;
	    std::cin >> n >> x >> y;
	    if(y % x == 0 && n * x >= y)
	        std::cout << "YES\n";
	    else
	        std::cout << "NO\n";
	}
    return 0;
}
