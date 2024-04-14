#include <bits/stdc++.h>
#include <algorithm>
//https://www.codechef.com/problems/REMOVECARDS
//https://www.codechef.com/viewsolution/1055909890
int main() {
	int T;
	std::cin >> T;
	while(T--){
	    int N;
	    std::cin >> N;
	    std::vector<int> vectuh(N);
	    for(int i = 0; i < N; i++){
	        std::cin >> vectuh[i];
	    }
	    
	    int maxDupes = 0;
	    for(int i = 0; i < N; i++){
	        int cnt = std::count(vectuh.begin(), vectuh.end(), vectuh[i]);
	        maxDupes = std::max(maxDupes, cnt);
	    }
	    std::cout << N - maxDupes << std::endl;
	}
    return 0;
}
