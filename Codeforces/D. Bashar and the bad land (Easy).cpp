#include <iostream>
#include <vector>

int main(){
    int n, x;
    std::cin >> n >> x;
    std::vector<int> vectuh(n);
    for(int i = 0; i < n; i++)
        std::cin >> vectuh[i];

    int c;
    int minStp = 99;
    for(int i = 0; i < n; i++){
        int sum = 0;
        c = 0;
        for(int j = i; j < n; j++){
            sum += vectuh[j];
            c++;
            minStp = std::min(minStp, c);
            if(sum == x)
            {
                std::cout << c << "\n";
                return 0;
            }
        }
    }
    return 0;
}