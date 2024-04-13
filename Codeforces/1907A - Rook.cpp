#include <iostream>
#include <algorithm>
//https://codeforces.com/problemset/problem/1907/A
int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        std::string str;
        std::cin >> str;
        char charPos = str[0];
        int numPos = str[1] - '0';

        char tempChar;
        int tempPos;


        tempChar = charPos + 1;
        while (tempChar <= 'h')
        {
            
            std::cout << tempChar << numPos << std::endl;
            ++tempChar;
        }

        tempPos = numPos - 1;
        while(tempPos >= 1){
            std::cout << charPos << tempPos << std::endl;
            --tempPos;
        }

        tempChar = charPos - 1;
        while(tempChar >=  'a'){
            std::cout << tempChar << numPos << std::endl;
            --tempChar;
        }

        tempPos = numPos + 1;
        while(tempPos <= 8){
            std::cout << charPos << tempPos << std::endl;
            ++tempPos;
        }
    }
    return 0;
}