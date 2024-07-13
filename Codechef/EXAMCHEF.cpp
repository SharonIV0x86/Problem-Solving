#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    float X, Y ,Z;
	    std::cin >> X >> Y >> Z;
	    int totalSt = X * Y;
	    float pcentage = (Z / totalSt) * 100;
	    if(pcentage > 50){
	        std::cout << "YES\n";
	    }else{
	        std::cout << "NO\n";
	    }
	}
    return 0;
}
