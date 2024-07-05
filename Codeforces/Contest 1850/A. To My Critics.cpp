#include <iostream>

int main(){
    int T;
    std::cin >> T;
    while(T--){
        int a, b,c;
        std::cin >> a >> b >> c;
        if(a + b >= 10 || b + c >= 10 || a + c >= 10){
            std::cout << "YES\n";
        }else{
            std::cout << "NO\n";
        }
    }
    return 0;
}