//https://www.codechef.com/viewsolution/1068867308
#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n, a;
	    std::cin >> n >> a;
	    std::cout << std::min(a, (n-a)) << std::endl;
	}
    return 0;
}
