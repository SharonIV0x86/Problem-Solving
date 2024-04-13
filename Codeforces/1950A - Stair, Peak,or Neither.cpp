#include <iostream>
//https://codeforces.com/problemset/problem/1950/A
int main()
{
    int T;
    std::cin >> T;
    int a, b, c;
    while (T--)
    {
        std::cin >> a >> b >> c;

        if (a < b && b < c)
        {
            std::cout << "STAIR\n";
        }
        else if (a < b && b > c)
        {
            std::cout << "PEAK\n";
        }
        else
        {
            std::cout << "NONE\n";
        }
    }
    return 0;
}