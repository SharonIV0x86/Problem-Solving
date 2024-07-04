#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int x;
	    std::cin >> x;
	    if(x >= 1 && x < 100){
	        std::cout << "Easy\n";
	    }else if(x >= 100 && x < 200){
	        std::cout << "Medium\n";
	    }else{
	        std::cout << "Hard\n";
	    }
	}
    return 0;
}
