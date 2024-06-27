//https://www.codechef.com/problems/ADVITIYA3

#include <climits>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int TestCases;
    std::cin >> TestCases;
    while(TestCases--){
        int n, k;
        std::cin >> n >> k;
        std::vector<int> cookieJars(n);
        
        for(int i = 0; i < n; i++){
            std::cin >> cookieJars[i]; 
        }
        int minCookie = INT_MAX;
        bool cookie = false;
        for(int i = 0; i < n; i++){
            if(k <= cookieJars[i]){
                minCookie = std::min(cookieJars[i] % k, minCookie);
                cookie = true;
            }
        }
        if(!cookie){
            std::cout << "-1" << std::endl;
        }else{
        std::cout << minCookie << std::endl;
        }
    }
    return 0;
}
