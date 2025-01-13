#include <iostream>
#include <algorithm>
#include <vector>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        std::cin >> n >> k;
        std::vector<int> vectuh(n);
        for (int i = 0; i < n; i++)
            std::cin >> vectuh[i];

        if (k > 1 || std::is_sorted(vectuh.begin(), vectuh.end()))
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