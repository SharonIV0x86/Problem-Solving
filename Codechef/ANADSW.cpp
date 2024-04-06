#include <bits/stdc++.h>
using namespace std;

void solve(){
    int N;
    std::cin >> N;
    std::vector<int> vectuh;
    
    for(int i = 0; i < N; i++){
        int a;
        std::cin >> a;
        vectuh.push_back(a);
    }
    
    if(N == 1){
        std::cout << "YES\n";
    }
    else if(N == 2){
        if(vectuh[0] > vectuh[1])
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }
    else if(N == 3){
        if(vectuh[1] > std::max(vectuh[0], vectuh[2]) || vectuh[1] < std::min(vectuh[0], vectuh[2]))
            std::cout << "NO\n";
        else
            std::cout << "YES\n";
    }
    else
    std::cout << "YES\n";
}

int main() {
	int T;
	std::cin >> T;
	while(T--){
	    solve();
	}

}
