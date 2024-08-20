#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int a,b,c,d;
	    std::cin >> a >> b >> c >> d;
	    std::cout << std::max({std::max(a+c, a+d), std::max(b+c, b+d)}) << std::endl;
	}
    return 0;
}
