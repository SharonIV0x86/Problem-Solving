#include <iostream>
#include <algorithm>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b;
        std::cin >> a >> b;
        std::cout << std::abs(a-b) << std::endl;
    }
}