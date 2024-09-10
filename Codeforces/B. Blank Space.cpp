#include <iostream>
#include <vector>

int main(){
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vectuh(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> vectuh[i];
        }
        
        int count = -1;
        int tempC = 0;
        for(int i = 0; i < n; i++){
            if(vectuh[i] == 0){
                tempC++;
            }else{
                count = std::max(count, tempC);
                tempC = 0;
            }
        }
        count = std::max(count, tempC);
        std::cout << count << "\n";
    }
    return 0;
}