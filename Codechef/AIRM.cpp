// https://www.codechef.com/viewsolution/1067970285

#include <bits/stdc++.h>
#include <algorithm>

using namespace std;


int main() {
    int t;
    std::cin >> t;
    while (t--) {
        int n;
        std::cin >> n;
        std::vector < int > input(n);
        std::vector<int> input1(n);
        std::map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            std::cin >> input[i];
        }
        for(int i = 0; i < n; i++){
            std::cin >> input1[i];
        }
        for(int i = 0; i < n; i++){
            mpp[input[i]]++;
        }
        for(int i = 0; i < n; i++){
            mpp[input1[i]]++;
        }
        int maximum = 0;
        for(const auto& ae: mpp){
            maximum = std::max(maximum, ae.second);
        }
        std::cout << maximum << std::endl;

    }

    return 0;
}