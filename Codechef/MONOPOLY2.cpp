#include <bits/stdc++.h>
using namespace std;

// https://www.codechef.com/practice/course/logical-problems/DIFF800/problems/MONOPOLY2
int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int P,Q,R,S;
	    std::cin >> P >> Q >> R >> S;
	    int totalSum = P + Q + R + S;
	    int maxProfit = std::max({P,Q,R,S});
	    int remProfit = totalSum - maxProfit;
	    if(maxProfit > remProfit){
	        std::cout << "YES\n";
	    }else{
	        std::cout << "NO\n";
	    }
	}
	return 0;

}
