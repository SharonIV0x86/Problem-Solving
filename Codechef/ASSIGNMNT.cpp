#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int X, Y, Z;
	    std::cin >> X >> Y >>Z;
	    
	    if((X * Y) <= Z * 1440){
	        std::cout << "YES\n";
	    } 
	    else{
	        std::cout << "NO\n";
	    }
	    
	}

}
