#include <bits/stdc++.h>


int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector < int > arr(n);
        
        std::map <long long, long long> mpp;
        for(int i = 0; i < n; i++){
            std::cin >> arr[i];
            mpp[arr[i]]++;
        }
        
        int count = 0;
        for(const auto& ae : mpp){
            if(ae.second > count){
                count = ae.second;
            }
        }
        std::cout << (n - count) << std::endl;
        
        
    }

}