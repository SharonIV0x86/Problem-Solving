#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int t;
    std::cin >> t;

    while (t--)
    {
        int n, s, m;
        std::cin >> n >> s >> m;

        std::vector<int> startTimes(n), endTimes(n);

        for (int i = 0; i < n; ++i)
        {
            std::cin >> startTimes[i] >> endTimes[i];
        }
        if (startTimes[0] >= s)
        {
            std::cout << "YES\n";
            continue;
        }
        bool tocont = false;
        for (int i = 1; i < n; ++i)
        {
            if (startTimes[i] - endTimes[i - 1] >= s)
            {
                std::cout << "YES\n";
                tocont = true;
                break;
            }
        }
        if (tocont)
            continue;

        if (m - endTimes[n - 1] >= s)
        {
            std::cout << "YES\n";
        }
        else
        {
            std::cout << "NO\n";
        }
    }

    return 0;
}

// #include <iostream>
// #include <vector>
// #include <algorithm>

// int main()
// {
//     int t;
//     std::cin >> t;
//     while (t--)
//     {
//         int n, s, m;
//         std::cin >> n >> s >> m;
//        std::vector<std::pair<int, int>> vectuh(n);

//         // Read the pairs into the vector
//         for (int i = 0; i < n; ++i)
//         {
//             std::cin >> vectuh[i].first >> vectuh[i].second;
//         }

//         // Convert the vector of pairs to a vector of integers (flattening)
//         std::vector<int> flatVectuh;
//         for (const auto& p : vectuh)
//         {
//             flatVectuh.push_back(p.first);
//             flatVectuh.push_back(p.second);
//         }

//         bool found = false;
//         int diff = std::abs(0 - flatVectuh[0]);
//         if (diff >= s)
//         {
//             std::cout << "YES\n";
//             continue;
//         }
//         else
//         {
//             for (int i = 1; i < flatVectuh.size() -2; i++)
//             {
//                 if (std::abs(flatVectuh[i] - flatVectuh[i + 1]) >= s)
//                 {
//                     found = true;
//                     break;
//                 }
//             }
//         }//1 2 3 5 6 8
//         if (found)
//         {
//             std::cout << "YES\n";
//         }
//         else
//         {
//             std::cout << "NO\n";
//         }
//     }
//     return 0;
// }
