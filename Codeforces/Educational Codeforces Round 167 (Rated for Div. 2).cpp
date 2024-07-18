#include <iostream>
#include <vector>

int main(){
    int t;
    std::cin >> t;
    while(t--){
        int x, y;
        std::cin >> x >> y;
        if(y <= x && y < 0){
            std::cout << "NO\n";
        }else{
            std::cout << "YES\n";
        }
    }
    return 0;
}
