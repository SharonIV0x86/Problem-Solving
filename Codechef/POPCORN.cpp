#include <bits/stdc++.h>
using namespace std;
// https://www.codechef.com/problems/POPCORN
int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int a1, a2, b1,b2, c1,c2;
	    std::cin >> a1 >> a2 >> b1 >> b2 >> c1 >> c2;
	    int MAX = std::max((a1 + a2), (b1 + b2));
	    MAX = std::max(MAX, (c1 + c2));
	    
	    std::cout << MAX << std::endl;
	}

}
