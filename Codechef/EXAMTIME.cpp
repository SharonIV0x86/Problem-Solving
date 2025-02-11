#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    std::cin >> t;
    while(t--){
        std::array<int, 3> dragon;
        std::array<int, 3> sloth;
        std::cin >> dragon[0] >> dragon[1] >> dragon[2];
        std::cin >> sloth[0] >> sloth[1] >> sloth[2];
        
        int totalDragon = dragon[0] + dragon[1] + dragon[2];
        int totalSloth = sloth[0] + sloth[1] + sloth[2];
        
        if(totalSloth > totalDragon){
            std::cout << "Sloth\n";
        }else if(totalDragon > totalSloth){
            std::cout << "Dragon\n";
        }else{
            if(dragon[0] > sloth[0]){
                std::cout << "Dragon\n";
            }else if(sloth[0] > dragon[0]){
                std::cout << "Sloth\n";
            }else{
                if(dragon[1] > sloth[1]){
                    std::cout << "Dragon\n";
                }else if(sloth[1] > dragon[1]){
                    std::cout << "Sloth\n";
                }else{
                    std::cout << "Tie\n";
                }
            }
        }
    }
}
