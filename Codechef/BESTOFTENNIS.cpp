#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int X,Y;
	    std::cin >> X >> Y;
	    if(std::abs(X-Y) == 0){
	        std::cout << X+Y << std::endl;
	    }
	    else {
	        if(X > Y){
	            Y = X - 1;
	        }
	        else if(X < Y){
	            X = Y - 1;
	        }
	        std::cout << X+Y << std::endl;
	    }
	    
	    
	}
	return 0;

}
