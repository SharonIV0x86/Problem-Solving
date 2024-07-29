#include <iostream>
#include <cmath>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, x;
        std::cin >> n >> x;
        float flr = (float)(n - 2) / x;

        if (n == 1 || n == 2)
        {
            std::cout << "1\n";
        }
        else
        {
            std::cout << std::ceil(flr + 1) << "\n";
        }
    }
    return 0;
}