#include <iostream>
#include <vector>
#include <algorithm>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        long long n;
        std::cin >> n;
        std::vector<long long> vec(n);
        for (long long i = 0; i < n; i++)
        {
            std::cin >> vec[i];
        }
        std::sort(vec.begin(), vec.end());
        long long ssum = vec[0];

        for (long long i = 1; i < n; i++)
        {
            ssum = (ssum + vec[i]) / 2;
        }
        std::cout << ssum << "\n";
    }
    return 0;
}