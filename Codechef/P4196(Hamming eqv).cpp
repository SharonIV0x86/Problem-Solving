#include <bits/stdc++.h>
using namespace std;


bool has(int a, int b){
    std::bitset<64> bitA(a);
    std::bitset<64> bitB(b);
    return bitA.count() == bitB.count();
}

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n;
	    std::cin >> n;
	    vector<int> vec(n);
	    for(int i = 0; i < n; i++){
	        std::cin >> vec[i];
	    }
	    bool bb = true;
	    for(int i = 0; i < n; i++){
	        if(!has(vec[i], i+1)){
	            bb = false;
	        }
	    }
	    if(bb){
	        std::cout << "YES\n";
	    }else{
	        std::cout << "NO\n";
	    }
	}
    return 0;
}
