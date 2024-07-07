#include <iostream>
#include <vector>

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;
        std::vector<int> xCoord(n);
        std::vector<int> yCoord(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> xCoord[i] >> yCoord[i];
        }
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j)
                {
                    if (xCoord[j] == xCoord[i] || yCoord[j] == yCoord[i])
                    {
                        count++;
                    }
                    else
                    {
                        int difX = std::abs(xCoord[i] - xCoord[j]);
                        int difY = std::abs(yCoord[i] - yCoord[j]);
                        if (difX == difY)
                        {
                            count++;
                        }
                    }
                }
            }
        }
        std::cout << count << std::endl;
    }
}