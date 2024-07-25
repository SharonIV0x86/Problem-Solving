#include <iostream>
#include <vector>
#include <algorithm>

int main()
{
    long long t;
    std::cin >> t;
    while (t--)
    {
        long long n, k;
        std::cin >> n >> k;
        std::vector<long long> potato(k);
        for (long long i = 0; i < k; i++)
        {
            std::cin >> potato[i];
        }
        auto itr = std::max_element(potato.begin(), potato.end());
        long long maxElement = *itr;
        long long maxElementIndex = std::distance(potato.begin(), itr);

        long long minop = 0;
        long long newSize = 0;
        for (long long i = 0; i < k; i++)
        {
            if (potato[i] == maxElement && i == maxElementIndex)
            {
                continue;
            }
            else
            {
                if (potato[i] == 1)
                {
                    minop++;
                }
                else
                {
                    minop += potato[i] * 2 - 1;
                }
            }
        }
        std::cout << minop << "\n";
    }
    return 0;
}