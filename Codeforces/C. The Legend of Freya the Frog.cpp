#include <iostream>
#include <algorithm>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int x, y, k;
        std::cin >> x >> y >> k;
        int moves = 0;
        bool moveX = true;
        while (x != 0 && y != 0)
        {
            if (moveX)
            {
                if (x != 0)
                    x -= k;
                moves++;
                moveX = false;
            }
            else
            {
                if (y != 0)
                    y -= k;
                moves++;
                moveX = true;
            }
        }
        std::cout << moves << "\n";
    }
}