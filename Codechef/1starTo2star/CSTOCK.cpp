#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    double S, A,B,C;
	    std::cin >> S >> A >> B >> C;
	    double pcentage = (C / 100);
	    pcentage *= S;
	    double change;
	    if(C > 0){
	    change = S + pcentage;
	    }else{
	        change = S - (-pcentage);
	    }
	    if(change >= A && change <= B){
	        std::cout << "YES\n";
	    }else{
	        std::cout << "NO\n";
	    }
	}
    return 0;
}
