#include <iostream>
#include <vector>
#include <numeric>
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vectuh(n);
        for (int i = 0; i < n; i++)
            std::cin >> vectuh[i];

        long long sum = std::accumulate(vectuh.begin(), vectuh.end(), 0);
        int size = vectuh.size();
        if (sum % 2 == 0 && size % 2 == 0)
        {
            std::cout << "Yes\n";
        }
        else if (size % 2 != 0 && sum % 2 != 0)
        {
            std::cout << "Yes\n";
        }
        else
        {
            std::cout << "No\n";
        }
    }
    return 0;
}