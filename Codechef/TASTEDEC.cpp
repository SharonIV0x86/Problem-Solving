#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int X, Y;
	    std::cin >> X >>Y;
	    int chocoTaste = 2 * X;
	    int candyTaste = 5 * Y;
	    
	    if(chocoTaste > candyTaste){
	        std::cout << "Chocolate\n";
	    }
	    else if(candyTaste > chocoTaste){
	        std::cout << "Candy\n";
	    }else{
	        std::cout << "Either\n";
	    }
	}

}
