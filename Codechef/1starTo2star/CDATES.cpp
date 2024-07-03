#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int D, L, R;
	    std::cin >> D >> L >> R;
	    if(D >= L && D <= R){
	        std::cout << "Take second dose now\n";
	    }else if(D < L){
	        std::cout << "Too Early\n";
	    }else{
	        std::cout << "Too Late\n";
	    }
	}
    return 0;
}
