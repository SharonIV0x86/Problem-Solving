#include <iostream>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        std::string color;
        for (int i = 1; i <= 12; i++)
        {
            if (i == a || i == b)
                color.push_back('R');
            if (i == c || i == d)
                color.push_back('B');
        }
        if (color == "RBRB" || color == "BRBR")
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