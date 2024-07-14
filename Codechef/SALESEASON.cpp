#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int X;
	    std::cin >> X;
	    if(X <= 100){
	        std::cout << X << std::endl;
	    }else if(X > 100 &&  X <= 1000){
	        std::cout << X - 25 << std::endl;
	    }else if(X > 1000 && X <= 5000){
	        std::cout << X - 100 << std::endl;
	    }else if(X > 5000){
	        std::cout << X - 500 << std::endl;
	    }
	}
	return 0;
}
