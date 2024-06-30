#include <bits/stdc++.h>

// https://www.codechef.com/problems/CCOOK
int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n = 5;
        std::vector<int> input(5);
        int runningSum = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> input[i];
            runningSum += input[i];
        }
        if (runningSum == 0)
        {
            std::cout << "Beginner\n";
        }
        else if (runningSum == 1)
        {
            std::cout << "Junior Developer\n";
        }
        else if (runningSum == 2)
        {
            std::cout << "Middle Developer\n";
        }
        else if (runningSum == 3)
        {
            std::cout << "Senior Developer\n";
        }
        else if (runningSum == 4)
        {
            std::cout << "Hacker\n";
        }
        else if (runningSum == 5)
        {
            std::cout << "Jeff Dean\n";
        }
        input.clear();
    }
    return 0;
}
