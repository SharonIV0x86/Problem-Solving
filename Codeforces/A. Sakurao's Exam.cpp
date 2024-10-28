#include <iostream>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int aOnes, bTwos;
        std::cin >> aOnes >> bTwos;
        if (aOnes % 2)
        {
            std::cout << "NO\n";
        }
        else
        {
            if (bTwos % 2 == 0)
            {
                std::cout << "YES\n";
            }
            else
            {
                if (aOnes == 0)
                {
                    std::cout << "NO\n";
                }
                else
                {
                    std::cout << "YES\n";
                }
            }
        }
    }
    return 0;
}