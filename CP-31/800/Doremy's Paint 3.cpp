#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n;
        std::cin >> n;
        std::vector<int> vectuh(n);
        int e = 0;
        int o = 0;
        for (int i = 0; i < n; i++)
        {
            std::cin >> vectuh[i];
        }
        std::map<int, int> mpp;
        for (int i = 0; i < n; i++)
        {
            mpp[vectuh[i]]++;
        }
        if (mpp.size() >= 3)
            std::cout << "No\n";
        else if (std::abs(mpp.begin()->second - mpp.rbegin()->second) <= 1)
            std::cout << "Yes\n";
        else
            std::cout << "No\n";
    }
    return 0;
}

// --> Failed logic and intuition, :(
// int main()
// {
//     int t;
//     std::cin >> t;
//     while (t--)
//     {
//         int n;
//         std::cin >> n;
//         std::vector<int> vectuh(n);
//         for (int i = 0; i < n; i++)
//         {
//             std::cin >> vectuh[i];
//         }
//         bool isGood = true;
//         std::next_permutation(vectuh.begin(), vectuh.end());
//         int k = vectuh[0] + vectuh[1];
//         for (int i = 0; i < n - 1; i++)
//         {
//             if (vectuh[i] + vectuh[i + 1] == k)
//             {
//                 continue;
//             }
//             else
//             {
//                 isGood = false;
//                 break;
//             }
//         }
//         if (isGood)
//         {
//             std::cout << "Yes\n";
//         }
//         else
//         {
//             std::cout << "No\n";
//         }
//     }
//     return 0;
// }