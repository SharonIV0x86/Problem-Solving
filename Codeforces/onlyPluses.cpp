

#include <iostream>
#include <algorithm>
#include <vector>
int main(){
    int T;
    std::cin >> T;
    while(T--){
        int a, b, c;
        std::cin >> a >> b >> c;
        int tempA = a;
        int tempB = b;
        int tempC = c;

        std::vector<int> inp;
        inp.push_back(a);
        inp.push_back(b);
        inp.push_back(c);

        std::sort(inp.begin(), inp.end());
        if(inp[0] == inp[1]){
            inp[2] += 5;
        }
        else if(inp[1] == inp[2]){
            inp[0] += 5;
        }
        else{
        inp[0] += 3;
        inp[1] += 2;

        }
        std::cout << inp[0] * inp[1] * inp[2] << std::endl;
    }
    return 0;
}