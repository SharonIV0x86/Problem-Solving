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
        int cows = n / 4;
        int remLegsAfterCows = n % 4;
        int chicken = remLegsAfterCows / 2;
        std::cout << cows + chicken << std::endl;
    }
    return 0;
}