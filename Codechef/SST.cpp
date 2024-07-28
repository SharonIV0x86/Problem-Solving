#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int a, b;
	    std::cin >> a >> b;
	    int val1 = 100 / 10;
	    val1 = val1 * a;
	    int val2 = 100 / 20;
	    val2 = val2 * b;
	    
	    if(val2 > val1){
	        std::cout << "SECOND\n";
	    }else if(val1 > val2){
	        std::cout << "FIRST\n";
	    }else{
	        std::cout << "ANY\n";
	    }
	}
    return 0;
}
