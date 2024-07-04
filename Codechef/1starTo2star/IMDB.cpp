#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin >> t;
	while(t--){
	    int n, x;
	    std::cin >> n >> x;
	    std::vector<int> movieSpace(n);
	    std::vector<int> movieRating(n);
	    
	    for(int i = 0; i < n; i++){
	        std::cin >> movieSpace[i] >> movieRating[i];
	    }
	    int maxRating = INT_MIN;
	    for(int i = 0; i < n; i++){
	        if(maxRating < movieRating[i] && movieSpace[i] <= x){
	            maxRating = std::max(movieRating[i], maxRating);
	        }
	    }
	    std::cout << maxRating << std::endl;
	}
}
