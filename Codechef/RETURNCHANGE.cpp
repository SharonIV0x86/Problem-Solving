#include <bits/stdc++.h>
using namespace std;
//https://www.codechef.com/problems/RETURNCHANGE?tab=statement
int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int X;
	    std::cin >> X;
	    int change = 0;
	    int rem = X % 10;
	    if(rem == 0){
	        change = 100 - X;
	    }
	    else if(rem > 5){
	        change = X + (10 - rem);
	        change = 100 - change;
	    }
	    else if(rem < 5){
	        change = X - rem;
	        change = 100 - change;
	    }
	    else{
	        change = X + 5;
	        change = 100 - change;
	    }
	    std::cout << change << std::endl;
	}

}
