#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/ZCOSCH
int main() {
	int R;
	std::cin >> R;
	if(R <= 50 && R >= 1){
	    std::cout << "100\n";
	}
	else if(R >=50 && R <= 100){
	    std::cout << "50\n";
	}else{
	    std::cout << "0\n";
	}
    return 0;
}
