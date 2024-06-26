//https://www.codechef.com/problems/BLITZ3_2

#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int n, a, b;
	    std::cin >> n >> a >> b;
	    
	    int totalTime = (180 + n) * 2;
	    int timeLeft = a + b;
	    int duration = totalTime - timeLeft;
	    
	    std::cout << duration << std::endl;
	}
    return 0;
}
