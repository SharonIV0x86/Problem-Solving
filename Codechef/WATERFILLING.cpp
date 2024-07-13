#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int Bottle1, Bottle2, Bottle3;
	    std::cin >> Bottle1 >> Bottle2 >> Bottle3;
	    if((Bottle1 == 0 && Bottle2 == 0) || (Bottle2 ==0 && Bottle3 == 0) || (Bottle3 == 0 && Bottle1 == 0)){
	        std::cout << "Water filling time\n";
	    }else{
	        std::cout << "Not now\n";
	    }
	}
    return 0;
}
