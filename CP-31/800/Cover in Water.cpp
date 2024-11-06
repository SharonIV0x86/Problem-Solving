#include <iostream>
#include <string>
#include <algorithm>
int main(){
    int t;
    std::cin >> t;
    while (t--)
    {
        int len;
        std::string str;
        std::cin >> len;
        std::cin >> str;
        std::string s = "...";
        if(str.find(s) != std::string::npos){
            std::cout << "2\n";
        }else{
           std::cout << std::count(str.begin(), str.end(), '.') << "\n";
        }
    }
    return 0;
}