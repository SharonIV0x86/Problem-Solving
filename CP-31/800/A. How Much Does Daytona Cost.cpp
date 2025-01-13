#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        bool found = false;
        int temp;
        std::cin >> n >> k;
        for (int i = 0; i < n; i++)
        {
            std::cin >> temp;
            if (temp == k)
            {
                found = true;
            }
        }
        if (found)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }
}