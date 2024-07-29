// https://www.codechef.com/viewsolution/1075481538
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::string str;
        std::cin >> str;
        int count = 1;
        for (int i = 0; i < n - 1; i++)
        {
            if (str[i] == '1' && str[i + 1] == '0')
            {
                count++;
            }
        }
        std::cout << count << "\n";
    }
    return 0;
}