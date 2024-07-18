#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int A,B,X,Y;
	    std::cin >> A >> B >> X >>Y;
	    if(X * Y >= A * B){
	       std::cout << "YES\n";
	    }else{
	        std::cout << "NO\n";
	    }
	}
    return 0;
}
