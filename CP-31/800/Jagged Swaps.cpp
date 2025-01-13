#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
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
        if (vectuh[0] == 1)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
    return 0;
}