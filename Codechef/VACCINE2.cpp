#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, d;
        std::cin >> n >> d;
        std::vector<int> patients(n);
        for (int i = 0; i < n; i++)
            std::cin >> patients[i];

        if (d == 1)
        {
            std::cout << n * d << std::endl;
            continue;
        }
        int riskCount = 0;
        int safeCount = 0;
        for (int i = 0; i < n; i++)
        {
            if (patients[i] >= 80 || patients[i] <= 9)
            {
                riskCount++;
            }
            else
            {
                safeCount++;
            }
        }
        int totalDays = 0;
        if (riskCount % d != 0)
        {
            totalDays = totalDays + (riskCount / d) + 1;
        }
        else
        {
            totalDays = totalDays + (riskCount / d);
        }
        if (safeCount % d != 0)
        {
            totalDays = totalDays + (safeCount / d) + 1;
        }
        else
        {
            totalDays = totalDays + (safeCount / d);
        }
        std::cout << totalDays << std::endl;
    }
    return 0;
}