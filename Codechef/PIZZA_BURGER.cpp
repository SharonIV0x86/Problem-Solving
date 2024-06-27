#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int money, costPizza, costBurger;
	    std::cin >> money >> costPizza >> costBurger;
	    
	    if(money >= costPizza){
	        std::cout << "PIZZA\n";
	    }else if(money < costPizza && money >= costBurger){
	        std::cout << "BURGER\n";
	    }else{
	        std::cout << "NOTHING\n";
	    }
	}
    return 0;
}
