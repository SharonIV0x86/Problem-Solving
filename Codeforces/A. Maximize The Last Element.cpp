#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> input(n);
        for (int i = 0; i < n; i++)
            std::cin >> input[i];

        auto maxItr = std::max_element(input.begin(), input.end());
        int maxElementIndex = std::distance(input.begin(), maxItr);
        if (maxElementIndex % 2 == 0)
        {
            std::cout << input[maxElementIndex] << "\n";
            continue;
        }
        else
        {
            input[maxElementIndex] = -1;
            while (maxElementIndex % 2 != 0)
            {
                auto maxIt = std::max_element(input.begin(), input.end());
                maxElementIndex = std::distance(input.begin(), maxIt);
                if (maxElementIndex % 2 != 0)
                {
                    input[maxElementIndex] = -1;
                }
            }
        }
        std::cout << input[maxElementIndex] << "\n";
    }
}