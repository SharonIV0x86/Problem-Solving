#include <iostream>
#include <vector>


int main(){
    int n;
    std::cin >> n;
    std::vector<int> vectuh(n);
    int min = 1000000;
    for(int i = 0; i < n; i++){
        std::cin >> vectuh[i];
        if(vectuh[i] < 0){
            vectuh[i] = -vectuh[i];
        }
        // else if(vectuh[i] == 0){
        //     std::cout << "0\n";
        //     return ;
        // }
    
        min = std::min(min, vectuh[i]);
    }
    std::cout << min << "\n";
    return 0;

}