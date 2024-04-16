#include <bits/stdc++.h>

//https://www.codechef.com/problems/CHEFSTUD
std::string updateConfig(std::string str) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == '>') {
            str[i] = '<';
        }
        else if (str[i] == '<') {
            str[i] = '>';
        }
    }
    return str;
}

int main() {
    int testCases;
    std::cin >> testCases;
    while (testCases--) {
        std::string input;
        std::cin >> input;
        std::string updatedStr = updateConfig(input);

        int count = 0;
        for (int i = 0; i < input.length() - 1; i++) {
            if (updatedStr[i] == '>' && updatedStr[i + 1] == '<')
                count++;
        }
        std::cout << count << std::endl;
    }
    return 0;
}