#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int A, B, A1,B1,A2,B2;
	    std::cin >> A >> B >> A1 >> B1 >> A2 >> B2;
	    if((A == A1 || A == B1) && (B == A1 || B ==B1)){
	        std::cout << "1\n";
	    }else if((A == A2 || A == B2) && (B == A2 || B == B2)){
	        std::cout << "2\n";
	    }else{
	        std::cout << "0\n";
	    }
	}
    return 0;
}
