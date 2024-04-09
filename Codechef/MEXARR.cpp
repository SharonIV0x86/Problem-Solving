#include <bits/stdc++.h>
using namespace std;

void solve(){
    long long  n;
    std::cin >> n;
    std::vector<long long> vec(n);
    for(auto &ae : vec){
        std::cin >> ae;
    }
    std::sort(vec.begin(), vec.end());
    long long res = 0;
    for(int i = 0; i < n; i++){
        if(vec[i] != i){
            res += std::abs(vec[i] - i);
        }
    }
    std::cout << res << std::endl;
}
/*The code is trying to make the smallest non-negative integer (called MEX) in the array as big as possible. It sorts the array to easily compare each number's position with its value. It then goes through each number and checks how far it is from where it should be. This difference is called a gap. The code adds up all these gaps. By adjusting numbers to reduce these gaps (either by increasing or decreasing them), it ensures that the MEX becomes as big as possible. Essentially, it's like filling in the missing numbers to make the array as "complete" as possible and thus maximizing the MEX.

https://www.codechef.com/viewsolution/1054931377

*/
int main() {
	int T;
	std::cin >> T;
	while(T--){
	    solve();
	}
     
}
