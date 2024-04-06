#include <bits/stdc++.h>


int main() {
	int T;
	std::cin >> T;
    int n, k, x;
    while(T--){
        std::cin >> n >> k >> x;
        int sum = 0;
        int current = 0;
        for(int i = 1; i < k; i++){
            current = sum + 1;
            sum += current;
            if(x <= sum) break;
        }
        if(x > sum){
            std::cout << "YES\n";
        }
        else{
            std::cout << "NO\n";
        }
    }	

}
