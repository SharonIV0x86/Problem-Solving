#include <algorithm>
#include <iostream>

int main(){
    int T;
    std::cin >> T;
    while(T--){
        int x, y;
        std::cin >> x >> y;
        std::cout << std::min(x,y) << " " << std::max(x, y) << "\n";
    }
    return 0;
}

