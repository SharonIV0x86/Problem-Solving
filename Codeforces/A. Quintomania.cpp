#include <iostream>
#include <vector>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vec(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> vec[i];
        }
        bool isperfect = true;
        for (int i = 0; i < n - 1; i++)
        {
            auto diff = std::abs(vec[i] - vec[i + 1]);
            if (diff == 5 || diff == 7)
            {
                continue;
            }
            else
            {
                std::cout << "NO\n";
                isperfect = false;
                break;
            }
        }
        if (isperfect)
        {
            std::cout << "YES\n";
        }
    }
    return 0;
}