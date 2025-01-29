#include <iostream>
#include <vector>
#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

int main()
{
    int t;
    std::cin >> t;
    while (t--)
    {
        int n, k;
        std::cin >> n >> k;
        std::vector<std::vector<int>> grid(n, std::vector<int>(n));

        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                std::cin >> grid[i][j];
            }
        }
        int numRows = (n + k - 1) / k;
        std::vector<std::vector<int>> res(numRows);

        for (int i = 0; i < n; i += k)
        {
            int rowIndex = i / k;

            if (rowIndex < numRows)
            {
                for (int j = 0; j < n; j += k)
                {
                    res[rowIndex].push_back(grid[i][j]);
                }
            }
        }
        for (const auto &row : res)
        {
            for (const auto &col : row)
            {
                std::cout << col << " ";
            }
            std::cout << "\n";
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
//         int n, k;
//         std::cin >> n >> k;
//         std::vector<std::vector<int>> grid(n);
//         for (int i = 0; i < n; i++)
//         {
//             for (int j = 0; j < n; j++)
//             {
//                 int e;
//                 std::cin >> e;
//                 grid[i].push_back(e);
//             }
//         }
//         int numRows = (n + k - 1) / k;
//         std::vector<std::vector<int>> res(numRows);
//         int row = 0;

//         for (int i = 0; i < n; i += k)
//         {

//             for (int j = 0; j < n; j += k)
//             {
//                 res[row].push_back(grid[i][j]);
//             }
//             row++;
//         }
//         for (auto &row : res)
//         {
//             for (auto &col : row)
//             {
//                 std::cout << col << " ";
//             }
//             std::cout << "\n";
//         }
//     }
//     return 0;
// }