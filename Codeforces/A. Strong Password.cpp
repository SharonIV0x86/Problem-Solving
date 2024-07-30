#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>
#include <unordered_map>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string str;
        std::cin >> str;
        int sameSubStar = 0;
        int sameSubEnd = 0;
        int index = 0;
        bool foundSame = false;
        for (int i = 0; i < str.length() - 1; i++)
        {
            if (str[i] == str[i + 1])
            {
                index = i+1;
                foundSame = true;
                break;
            }
        }
        if (foundSame)
        {
            if (str[index] != 'z' && str[index] != 'a')
            {
                str.insert(str.begin() + index, str[index] + 1);
            }
            else
            {
                str.insert(str.begin() + index, 'f');
            }
        }
        else
        {
            if (str.back() != 'a')
            {
                str.push_back('a');
            }
            else
            {
                str.push_back('b');
            }
        }
        std::cout << str << std::endl;
    }
}