#include <iostream>
#include <utility>
#include <vector>

int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        int n;
        std::cin >> n;
        std::vector<std::pair<int, int>> words(n);
        for (int i = 0; i < n; i++)
        {
            std::cin >> words[i].first >> words[i].second;
        }
        int maxQuality = -1;
        int winner = 0;
        for (int i = 0; i < n; i++)
        {
            if (words[i].first <= 10 && words[i].second > maxQuality)
            {
                maxQuality = words[i].second;
                winner = i+1;
            }
        }
        std::cout << winner<< "\n";
    }
    return 0;
}