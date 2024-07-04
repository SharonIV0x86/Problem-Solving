#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int guests, fruits, vegetables, fishes;
	    std::cin >> guests >> fruits >> vegetables >> fishes;
	    int value = std::min(vegetables, fruits+fishes);
	    if(value >= guests){
	        std::cout << "YES\n";
	    }else{
	        std::cout << "NO\n";
	    }
	}
    return 0;
}
