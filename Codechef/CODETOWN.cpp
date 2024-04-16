#include <bits/stdc++.h>
//https://www.codechef.com/problems/CODETOWN?tab=statement
int isVowel(char ch) {
    if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
        return 1;
    else
        return 0;
}

int main() {
    int testCase;
    std::cin >> testCase;
    while (testCase--) {
        std::string actualStr = "CODETOWN";
        std::string str;
        std::cin >> str;

        if (str == actualStr) {
            std::cout << "YES\n";
            break;
        }
        int C = 1;
        
        for(int i = 0; i < 8; i++){
            if(isVowel(str[i]) != isVowel(actualStr[i])){
                std::cout << "NO\n";
                C = 0;
                break;
            }
        }
        if(C==1){
            std::cout << "YES\n";
        }
    }
    return 0;
}