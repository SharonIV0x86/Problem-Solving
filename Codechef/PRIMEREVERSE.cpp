#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    std::string A, B;
	    std::cin >> n;
	    std::cin >> A >> B;
	    int freqAOne = std::count(A.begin(), A.end(), '1');
	    int freqBOne = std::count(B.begin(), B.end(), '1');
        int freqAZero = std::count(A.begin(), A.end(), '0');
	    int freqBZero= std::count(B.begin(), B.end(), '0');
	    if(freqAZero == freqBZero && freqAOne == freqBOne){
	         std::cout << "YES\n";
	     }else{
	         std::cout << "NO\n";
	     }
	}

}
