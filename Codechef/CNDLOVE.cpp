#include <bits/stdc++.h>
#include <numeric>
// https://www.codechef.com/problems/CNDLOVE?tab=submissions
int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    std::cin >> n;
	    std::vector<int> candies(n);
	    for(int i = 0; i < n; i++){
	        std::cin >> candies[i];
	    }
	    int sum = std::accumulate(candies.begin(), candies.end(), 0);
	    if(sum % 2 == 0){
	        std::cout << "NO\n";
	    }else{
	        std::cout << "YES\n";
	    }
	    
	}
    return 0;
}
