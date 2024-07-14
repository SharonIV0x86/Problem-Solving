#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int N, X;
	    std::cin >> N >> X;
	    int totalSlices = N * X;
	    int remSlices = totalSlices % 4;
	    if(remSlices == 0){
	        std::cout << totalSlices / 4 << "\n";
	    }else{
	        std::cout << (totalSlices / 4) + 1 << "\n";
	    }
	}
    return 0;
}
