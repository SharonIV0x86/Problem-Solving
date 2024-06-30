#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n, a, b;
	    std::cin >> n >> a >> b;
	    float probA, probB;
	    std::vector<int> input(n);
	    for(int i = 0; i < n; i++){
	        std::cin >> input[i];
	    }
	    int countA = std::count(input.begin(), input.end(), a);
	    int countB = std::count(input.begin(), input.end(), b);
	    
	    probA = float(countA) / n;
	    probB = float(countB) / n;
	    float ans = float(probA * probB); 
	    std::cout << ans << std::endl;
	}

}
