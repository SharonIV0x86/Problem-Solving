#include <iostream>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        if (n < 5)
            std::cout << "-1\n";
        else
        {
            for (int i = 2; i < n + 1; i += 2)
            {
                if (i != 4)
                    std::cout << i << " ";
            }
            std::cout << "4 5 ";
            for (int i = 1; i < n + 1; i += 2)
            {
                if (i != 5)
                    std::cout << i << " ";
            }
            std::cout << "\n";
        }
    }
    return 0;
}