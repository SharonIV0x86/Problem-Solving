#include <bits/stdc++.h>
using namespace std;

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    float w1,w2, x1,x2,M;
	    std::cin >> w1 >> w2 >> x1 >> x2 >> M;
	    int delWeight = w2 - w1;
	    float weightIncreasePerMonth = delWeight / M;
	    if(weightIncreasePerMonth >= x1 && weightIncreasePerMonth <= x2)
	        std::cout << "1\n";
	    else
	        std::cout << "0\n";
	}
    return 0;
}
