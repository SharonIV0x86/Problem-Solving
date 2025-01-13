#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int k;
        std::cin >> k;
        std::vector<int> vec(k);

        for (int i = 0; i < k; i++)
        {
            std::cin >> vec[i];
        }

        int len = k - 2;
        int m = 0, n = 0;

        std::sort(vec.begin(), vec.end());

        bool found = false;

        for (int i = 0; i < k; i++)
        {
            if (len % vec[i] == 0)
            {
                int target = len / vec[i];

                auto it = std::lower_bound(vec.begin(), vec.end(), target);

                if (it != vec.end() && *it == target && it - vec.begin() != i)
                {
                    m = vec[i];
                    n = *it;
                    found = true;
                    break;
                }
            }
        }

        if (found)
        {
            std::cout << m << " " << n << "\n";
        }
        else
        {
            std::cout << "No valid dimensions found\n";
        }
    }
    return 0;
}
