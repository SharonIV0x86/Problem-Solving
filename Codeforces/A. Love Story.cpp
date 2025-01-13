#include <iostream>
#include <string>
#include <map>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        std::string str1 = "codeforces";
        std::string str2;
        std::cin >> str2;

        int diffs = 0;

        for (int i = 0; i < 10; i++)
        {
            if (str1[i] != str2[i])
            {
                diffs++;
            }
        }
        std::cout << diffs << "\n";
    }
    return 0;
}