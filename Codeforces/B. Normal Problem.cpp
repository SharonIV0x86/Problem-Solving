#include <iostream>
#include <string>
#include <algorithm>
int main(){
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string a;
        std::cin >> a;
        for(int i = 0; i < a.length(); i++){
            if(a[i] == 'p'){
                a[i] = 'q';
            }else if(a[i] == 'q'){
                a[i] = 'p';
            }
        }
        std::reverse(a.begin(), a.end());
        std::cout << a << "\n";
    }
    return 0;
    
}