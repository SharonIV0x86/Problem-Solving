#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
//https://codeforces.com/contest/1933/problem/B
int main()
{
    int testCase;
    std::cin >> testCase;
    while (testCase--)
    {
        bool found = false;
        int size;
        std::cin >> size;
        std::vector<int> vectuh(size);
        for (int i = 0; i < size; i++)
            std::cin >> vectuh[i];

        long long sum = std::accumulate(vectuh.begin(), vectuh.end(), 0);

        if (sum % 3 == 0)
        {
            std::cout << "0\n";
            found = true;
            std::cout << "Branch 1" << std::endl;
            continue;
        }
        else if ((sum + 1) % 3 == 0)
        {
            std::cout << "1\n";
            std::cout << "Branch 2" << std::endl;
            continue;
        }
        else
        {
            for (int i = 0; i < size; i++)
            {
                if ((sum - vectuh[i]) % 3 == 0)
                {
                    vectuh.erase(vectuh.begin() + i);
                    std::cout << "1\n";
                    found = true;
                    std::cout << "Branch 3" << std::endl;
                    break;
                }
            }
        }

        if ((sum - 1) % 3 == 0 && found == false)
        {
            std::cout << "2\n";
            std::cout << "Branch 3 " << std::endl;
        }
    }
    return 0;
}