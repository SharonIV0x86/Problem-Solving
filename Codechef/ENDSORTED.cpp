#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        int n;
        std::cin >> n;
        std::vector<int> v(n);
        int idx1 = 0;
        int idxn = n;
        for(int i = 0; i < n; i++){
            std::cin >> v[i];
            if(v[i] == 1){
                idx1 = i;
            }else if(v[i] == n){
                idxn = i;
            }
        }
        if(idxn < idx1){
            idx1--;
        }
        std::cout << idx1 + (n - idxn - 1) << "\n";
    }
    return 0;
}
